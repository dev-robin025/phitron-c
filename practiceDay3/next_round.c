#include<stdio.h>

// source ==> https://codeforces.com/problemset/problem/158/A

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    int scores[n];
    for(int i=0;i<n;i++){
        scanf("%d",&scores[i]);
    }

    int q=0;
    for(int i=0;i<n;i++){
        if(scores[i]>0 && scores[i]>= scores[k-1]) q++;
    }

    printf("%d",q);

    return 0;
}