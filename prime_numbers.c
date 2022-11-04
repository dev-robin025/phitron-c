#include  <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int nums[n],count=0;    
    for(int i=0;i<n;i++) {
        scanf("%d",&nums[i]);
        count++;
        for(int j=2;j<=nums[i]/2;j++){
            if(nums[i]%j==0) {
                count--;
                break;
            }
        }
    }

    printf("%d\n",count);

    for(int i=0;i<n;i++){
        int isPrime=1;
        for(int j=2;j<=nums[i]/2;j++){
            if(nums[i]%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1) printf("%d ",nums[i]);
    }

    return 0;
}