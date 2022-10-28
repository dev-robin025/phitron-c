    
    #include <stdio.h>

    // Take two integers as input and print their GCD(Gretest Common Divison) as the output.

    int main(){
        int a,b;
        scanf("%d %d",&a,&b);

        printf("The GCD of %d and %d is ",a,b);

        do{
            if(a>b) {
            // In this statement below, I check ==> if the first argument is largest from second argument, then I swap the arguments. Where, first arg is smallest, and second arg is largest. So that i can apply "Euclidean Algorithm".
                a=a+b,b=a-b,a=a-b;
            };
            b=b%a;

        } while(b>0);

        printf("%d",a);
        
        return 0;
    }

