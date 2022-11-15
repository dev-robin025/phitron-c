#include<stdio.h>
#include<string.h>

int main(){
    int m;
    scanf("%d",&m);

    char concat[100];

    for(int i=0;i<m;i++){
        char word[100];
        scanf("%s",word);
        
        int d_len = strlen(concat); //d donates destination
        int s_len = strlen(word); // s donates source

        for(int c=0;c<=s_len;c++){
            concat[d_len+c]=word[c];
        }
    }
    printf("%s",concat); 

    return 0;
}