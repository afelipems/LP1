#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temps[50];
    int i;
    int aboveAvg = 0;
    for (i = 0; i < 50; i++){
        char num = rand() % 101 - 50;        
        temps[i] = num;
    }

    float total;
    for (i = 0; i < 50; i++){
        total += temps[i];
    }

    float avg = total / 50;
    printf("Média das temperaturas: %.2f\n", avg);

    for(i=0; i< 50; i++){
        if(temps[i] > avg){
            aboveAvg += 1;
            printf("Temperatura acima da média: %d\n", temps[i]);            
        }
    }

    printf("Quantidade de elementos acima da média: %d\n", aboveAvg);
}
