#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    scanf("%[^\n]s",name);

    for(int i=0;i<strlen(name);i++) {
        if(name[i]>=65) name[i]-=32;
    }

    printf("%s",name);
    return 0;
}