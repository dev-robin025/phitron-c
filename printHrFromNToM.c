#include<stdio.h>

// A programe take two non-negetive N and M. and print from N to M. N and M represents time in hour(24hr format). 

// Smaple Input: 9 13  --> output:9 10 11 12
// Smaple Input: 21 4  --> output:21 22 23 0 1 2 3 4

int main(){
    int n,m;
    scanf("%d%d",&n,&m);

    for(int i=n; i<=24; i++){
        if(i==24){
            i=0;
        }
        printf("%d ",i);

        if(i==m){
            break;
        }
    }

}