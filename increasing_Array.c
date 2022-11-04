#include <stdio.h>

// source==> https://cses.fi/problemset/task/1094

int main(){
    int n; 
    scanf("%d",&n); 

    long long int arr[n],count=0;

    for(int i=1;i<=n;i++){
        scanf("%lld",&arr[i]);

        while(arr[i-1]>arr[i]){
            count++;
            arr[i]=arr[i]+1;
        };
    }

    printf("%lld",count);

    return 0;
}