#include <stdio.h>
#include <string.h>

int main(){
    char str[20];

    // scanf("%[^\n]%*c", str);
    // scanf("%[^\n]s", str);
    fgets(str,20,stdin);

    int len = strlen(str);
    int counter=0;

    for(int i=0;i<strlen(str)-1;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')  counter++;
    }

    printf("There are %d vowel.", counter);
    return 0;
}