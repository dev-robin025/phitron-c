#include <stdio.h>

int main(){
    int n,k;
    scanf("%d",&n);

    int nums[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&nums[i]);
    }

    scanf("%d",&k);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                nums[i]=nums[i]+nums[j];
                nums[j]=nums[i]-nums[j];
                nums[i]=nums[i]-nums[j]; 
            }
        }
    }

    printf("%d",nums[k-1]);
    return 0;
}