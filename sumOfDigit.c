#include<stdio.h>

// need to find the sum of the digits of the input.

int main(){
    long long int n;
    scanf("%lld",&n);

    int sum=0;

    do{
        sum+=n%10;
        n/=10;
    }while(n!=0);

    printf("%d",sum);

    return 0;
}