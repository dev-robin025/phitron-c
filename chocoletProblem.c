#include <stdio.h>

int main(){
    int chocolet; 
    printf("Plese enter a number: \n");
    scanf("%d",&chocolet);

    int emptyPacket = chocolet;

    while (emptyPacket >= 4) {
        int newChocolet =  emptyPacket/4;
        int remainPacket = emptyPacket % 4;
        chocolet += newChocolet;
        emptyPacket = newChocolet + remainPacket;
    };

    printf("total %d chocolet you will get\n",chocolet);
    
    return 0;
}