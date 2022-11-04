#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int nums[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
        if(nums[i]%2!=0) sum+=nums[i];
    }

    if(sum%2==0) printf("YES");
    else printf("NO");

    return 0;
}