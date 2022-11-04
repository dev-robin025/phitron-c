#include<stdio.h>

// this programe takes two positive integer as n and m and print all numbers from 1 to n that are divisible by m.

int main(){
    int n,m;
    printf("Enter Two positive integer: \n");
    scanf("%d%d",&n,&m);

    for(int i=m;i<=n;i+=m){
        printf("%d ",i);
    }

    // int i =m;

    // while(n>=i){
    //     printf("%d ",i);
    //     i+=m;
    // }
    return 0;
}