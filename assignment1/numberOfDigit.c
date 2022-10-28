    #include<stdio.h>

    // You will be given a number as input. You will have to find the number of digits in that number. 

    int main(){
        long long int number;
        scanf("%lld",&number);

        int count=0;

        while(number != 0){
            count++;
            number = number / 10;
        };

        // as well as this oparation is implement by do while loop below. 

        // do{
        //     number = number / 10;
        //     count++;
        // }while(number != 0);

        printf("%d digits",count);

        return 0;
    }