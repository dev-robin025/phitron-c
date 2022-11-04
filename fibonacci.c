#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int series[n];
    series[0]=0;
    series[1]=1;

    if(n>1) printf("%d %d",series[0],series[1]);
    else printf("%d",series[0]);
    
    for(int i=2;i<n;i++){
        series[i]=series[i-1]+series[i-2];
        printf(" %d",series[i]);
    }

    return 0;
}