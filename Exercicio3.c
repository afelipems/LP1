#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temps[50];
    int i;
    int aboveAvg = 0;
    for (i = 0; i < 50; i++){
        int num = (rand() % (100 - (-100) + 1)) + 100;
        printf("Num %d\n", num);
        temps[i] = num;
    }

    float total;
    for (i = 0; i < 50; i++){
        total += temps[i];
    }

    float avg = total / 50;
    printf("Média das temperaturas: %.6f\n", avg);

    for(i=0; i< 50; i++){
        if(temps[i] > avg){
            aboveAvg += 1;
            printf("Temperatura: %d\n", temps[i]);            
        }
    }

    printf("Quantidade de elementos acima da média: %d\n", aboveAvg);



}
