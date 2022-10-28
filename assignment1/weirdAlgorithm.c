    #include<stdio.h>

    int main(){
        int n;
        scanf("%d",&n);

        do{
            printf("%d, ",n);
            if(n%2==0){
                n/=2;
            }else{
                n-=1;
            }
        }while(n>1);

        printf("%d",n);

        return 0;
    }