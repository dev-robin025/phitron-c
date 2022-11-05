#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int charge;
        char sign;
        scanf("%d%c",&charge,&sign);
        int total=0;

        do{
            if(charge<60){
                total+=60-charge;
                charge=60;
            }else if(charge<80){
                total+=(80-charge)*2;
                charge=80;
            }else{
                total+=(100-charge)*3;
                charge=100;
            }
        }while(charge<100);

        printf("%d minutes\n",total);
    }

    return 0;
}