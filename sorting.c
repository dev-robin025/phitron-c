#include <stdio.h>

int main(){
    int n=5;

    int nums[]={4,9,1,8,3};

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]<nums[j]) continue;
            else {
                nums[i]+=nums[j];
                nums[j]=nums[i]-nums[j];
                nums[i]-=nums[j];
            }
        }
        // explanation what happens in this pass for {9,4,1,8,3}:

            // 4 9 1 8 3 ==> 1 9 4 8 3 ==> 1 9 4 8 3 ==> 1 9 4 8 3
            // 1 4 9 8 3 ==> 1 4 9 8 3 ==> 1 3 9 8 4
            // 1 3 8 9 4 ==> 1 3 4 9 8
            // 1 3 4 8 9

        printf("%d ",nums[i]); 
    }

    return 0;
}