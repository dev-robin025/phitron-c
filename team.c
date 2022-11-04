#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int p,v,t;
    
    int output=0;

    for(int i=0;i<n;i++){
        scanf("%d %d %d",&p,&v,&t);
        if(p+v+t>=2) output++;
    }


    // int p[n],v[n],t[n];

    // for(int i=0;i<n;i++){
    //     scanf("%d %d %d",&p[i],&v[i],&t[i]);
    // }

    // int output=0;

    // for(int i=0;i<n;i++){
    //     if(p[i]+v[i]+t[i]>=2) output++;
    // }
   
    printf("%d",output);

    return 0;
}