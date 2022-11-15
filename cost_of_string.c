#include<stdio.h>
#include<string.h>

int main(){
    char str[100],sum=0,cost=0;
    scanf("%s",str);

    for(int c=0;c<strlen(str);c++) sum+=str[c]-96;

    while(sum>1){
        if(sum%2!=0){
            printf("NO");
            return 0;
        }
        sum/=2;
        cost++;
    }

    printf("cost = 2^%d",cost);

    return 0;
}