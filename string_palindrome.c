#include<stdio.h>
#include<string.h>

// You are given a string S of small letters, now check whether the given string is palindrome or not. If the string is
// palindrome print YES otherwise print NO.
// Note - A palindrome is a string that reads the same backward as forward

int main(){  
    char str[40],rev[40];
    scanf("%s", str);

    int len = strlen(str);

    for(int i=1;i<=len;i++){
        rev[len-i]=str[i-1];
    }

    int match = strcmp(str,rev);

    if(match==0) printf("Yes");
    else printf("No");

    return 0;  
}  