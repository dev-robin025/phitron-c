#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);

    for(int i=0;i<strlen(str);i++){
        if(!(str[i]=='0' || str[i]=='1')){
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
    
}