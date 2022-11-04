#include<stdio.h>
#include <string.h>

int main(){
    int N,target;
    scanf("%d",&N);
    
    int nums[N];

    for(int i=0;i<N;i++){
        scanf("%d",&nums[i]);
    };

    scanf("%d",&target);

    char* flag="No";

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(nums[i]+nums[j]==target){
                flag="Yes";
                break;
            }
        };
        if(strcmp(flag,"Yes")==0) break;
    }

    printf("%s",flag);

    return 0;
}