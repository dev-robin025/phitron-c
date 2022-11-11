#include<stdio.h>

// this programe print all even number to integer N. 

int main(){
    int n;
    scanf("%d",&n);

    // for(int i=2;i<=n;i+=2){
    //     printf("%d ",i);
    // }

    int i = 2;

    while(i<=n){
        printf("%d ",i);
        i+=2;
    }

    return 0;
}