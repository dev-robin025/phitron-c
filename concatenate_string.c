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

        for(int j=0;word[j]!='\0';j++){
            concat[d_len+j]=word[j];
        }
    }
    printf("%s",concat); 

    return 0;
}