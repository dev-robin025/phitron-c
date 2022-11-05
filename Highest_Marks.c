#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int marks[n];
    int highest=0;

    for(int i=0;i<n;i++) {
        scanf("%d",&marks[i]);
        if(highest<marks[i]) highest=marks[i];
    }

    for(int i=0;i<n;i++){
        int diff = highest-marks[i];
        printf("%d ",diff);

    }

    return 0;
}