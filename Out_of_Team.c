#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    
    int runs[n];
    int elimination=0;

    for(int i=0;i<n;i++){
        scanf("%d",&runs[i]);

        if(runs[i]<k) {
            elimination++;
        }
    }
    printf("%d",elimination);
    
    return 0;
}