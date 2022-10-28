    #include<stdio.h>

    // take two integers as input from you. And then it will show us in output whether any one of those two numbers is divisible by the other or not. 


    int main(){

        int first,second;
        scanf("%d %d",&first,&second);

        if(first%second==0){
            printf("The first number is divisible by the second number.");
        }else if(second%first==0){
            printf("The second number is divisible by the first number.");
        }else{
            printf("None of them are divisible by the other.");
        }

        return 0;
    }