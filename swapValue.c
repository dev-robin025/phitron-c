#include <stdio.h>

// basically the value must be swapped but you can not assign 13 directly to a and 5 directly to b. You can not use other numbers as well.
 
int main()
{
    int a=5, b=13;
    //Write code here

    // By declare extra variable:
        // int c=a;
        // a=b;
        // b=c;

    // Without extra variable
        a=a+b,b=a-b,a=a-b; // <--single line

    // multiple line
        // a=a+b;
        // b=a-b;
        // a=a-b;

    //End of code
    printf("%d and %d" , a, b); // 13 and 5   
}
