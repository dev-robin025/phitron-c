#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        long long int n;
        scanf("%lld",&n);

        int isSecret=1;

        if(n<=2) isSecret=0;

        for(int j=2;j<=n/2;j++){
            if(n%j==0){
                isSecret=0;
                break;
            }
        }

        if(isSecret==1) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}