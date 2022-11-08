#include<stdio.h>

int main(){
    int r;  
    scanf("%d",&r);

    int board[3][3];

    for(int i=0;i<r;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        board[x-1][y-1]=1;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]!=1){
                printf("%d %d\n",i+1,j+1);
            }
        }
    }

    return 0;
}