#include <stdio.h>


int main(){
    int T;
    scanf("%d",&T);

    long long int nums[3];

    for(int i=0;i<T;i++){
        long long S,A,B,C;
        scanf("%lld %lld %lld %lld",&S,&A,&B,&C);
        long long int sum=A+B+C;
        printf("%lld\n",S-sum);
    }

    return 0;
}