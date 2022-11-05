#include <stdio.h>
#include <string.h>

int main(){
    char name[20];

    fgets(name,20,stdin); // alternatively get name input using scanf() function below.
    // scanf("%[^\n]s",name); 

    // firstly get character length using while loop manually shown below.
    // int i=0, counter=0;

    // while(name[i]!='\0'){ 
    //     counter++;
    //     i++;
    // }

    // And finally simple we can get string length using strlen() function.
    int counter = strlen(name);


    printf("there are %d character in whole name",counter-1);
    
    return 0;
}