#include<stdio.h>
#include <string.h>

int main()
{
    char* test1="robin";
    char* test2="robim";


    int res = strcmp(test1,"robin");
    printf("%d",res);
 
    return 0;
}