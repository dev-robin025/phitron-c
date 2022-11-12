    #include <stdio.h>

    int main(){
        int s=3;
        int matrix[s][s];

        for(int r=0;r<s;r++){
            for(int c=0;c<s;c++){
                scanf("%d",&matrix[r][c]);
            }
        }

        int x1=0,x2=0;

        for(int r=0;r<s;r++){
            x1+=matrix[r][r];
            x2+=matrix[r][s-(r+1)];
        }

        if(x1!=x2) {
            printf("NO");
            return 0;
        }

        int base=x1;

        for(int r=0;r<s;r++){
            int row_sum=0,col_sum=0;

            for(int c=0;c<s;c++){
                row_sum+=matrix[r][c];
                col_sum+=matrix[c][r];
            }

            if(base!=row_sum || base!=col_sum){
                printf("NO");
                return 0;
            }
        }

        printf("YES");

        return 0;
    }