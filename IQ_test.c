#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    };

    int odd=0,even=0;
    for(int i=0;i<n;i++){
        if(nums[i]%2==0) even++;
        else odd++;
    }

    int index=0;
    if(odd==1){
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                index = i+1;
                break;
            }
        }
    }else{
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                index = i+1;
                break;
            }
        }
    }

    printf("%d",index);
    return 0;
}

// Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

// Input
// The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

// Output
// Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

// <------ Example Input:-------> 
// 5               ||         4
// 2 4 7 8 10      ||         1 2 1 1

// output:
// 3