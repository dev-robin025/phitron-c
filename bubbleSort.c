#include<stdio.h>

int main(){
    int n=5;

    int nums[]={4,9,1,8,3};

    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]) continue;
            else{
                nums[i+1]+=nums[i];
                nums[i]=nums[i+1]-nums[i];
                nums[i+1]=nums[i+1]-nums[i];
            }
        }
    }

    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d ",nums[i]);
    }

    return 0;
}