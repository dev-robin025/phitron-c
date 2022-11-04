#include <stdio.h>
#include <math.h>


// In this problem you will be given an integer as input and you need to find out whether the number is prime or not.

int main(){
    int n,squareRoot;

    scanf("%d",&n);

    squareRoot = sqrt(n);

    char* dicission;

    if(squareRoot<2){
        dicission="Prime";
    }else{
        for(int i=2;i<=squareRoot;i++){
            if(n%i==0){
                dicission="Composite";
                break;
            }else{
                dicission="Prime";
            }
        }
    }

    printf("%s",dicission);

    return 0;
}