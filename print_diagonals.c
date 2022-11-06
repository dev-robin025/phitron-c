#include <stdio.h>

// Given a 2D square matrix, print the Principal and Secondary diagonals. Examples :

//  Input==> 
    // 4
    // 1 2 3 4
    // 4 3 2 1
    // 7 8 9 6
    // 6 5 4 3

// Output:
    // Principal Diagonal: 1 3 9 3
    // Secondary Diagonal: 4 2 8 6

int main(){
    int n;
    scanf("%d",&n);

    int matrix[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    int principal[n],secondary[n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) principal[i]=matrix[i][j];
            else if(i+j == n-1) secondary[i]=matrix[i][j];
            else continue;
        }
    }

    printf("Principal Diagonal: ");
    for(int i=0;i<n;i++) printf("%d ",principal[i]);

    printf("\nSecondary Diagonal: ");
    for(int i=0;i<n;i++) printf("%d ",secondary[i]);

    return 0;
}