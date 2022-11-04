#include <stdio.h>

// Task:--> Take two integers as input and print their LCM as the output. 

// helper function which helps me to get GCD of arguments
int getGcd(int a,int b){
    do{
        if(a>b) a=a+b,b=a-b,a=a-b;
        b=b%a;
    } while(b>0);

    return a;
};

// Driver function
int main(){
    int a,b,gcd,lcm;
    scanf("%d %d",&a,&b);

    gcd = getGcd(a,b);
    
    lcm = a*b/gcd;
    
    printf("The LCM of %d and %d is %d",a,b,lcm);
    return 0;
};

