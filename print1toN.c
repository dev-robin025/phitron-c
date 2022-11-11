#include<stdio.h>

// this function takes one positive integer and print 1 to n.

int main(){
    int n;
    scanf("%d",&n);

    int i=1;

    if(n>i){
        // for(int i = 1; i <= n; i++){
        //     printf("%d ",i);
        // }

        while(n>=i){
            printf("%d ",i);
            i++;
        }

        //  do {
        //     printf("%d ",i);
        //     i++;
        // }while(n>=i);
    }else{
        // for(int i = 1; i >= n; i--){
        //     printf("%d ",i);
        // }

        while(n<=i){
            printf("%d ",i);
            i--;
        }

         do {
            printf("%d ",i);
            i--;
        }while(n<=i);
    }

   

   

    return 0;
}