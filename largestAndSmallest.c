#include<stdio.h>

// You need to take 4 distinct integer as input. Print the largest and smallest among them. 

int main(){
    int nums[4],large,small;

    for(int i=0;i<4;i++){
        scanf("%d",&nums[i]);
    }

    // initially first integer of array assigned as large and small.
    large=small=nums[0];

    // this loop is giving the exact large and small value by the help of two branching statement. 
    for(int i=0;i<4;i++){
        if(large<nums[i]){
            large=nums[i];
        }

        if(small>nums[i]){
            small=nums[i];
        }
    }

    printf("Largest = %d\nSmallest = %d",large,small);

    return 0;
}
