#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int first[n][m],second[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&first[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&second[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",first[i][j]+second[i][j]);
        }
            printf("\n");
    }

    return 0;
}