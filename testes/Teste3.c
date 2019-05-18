#include <stdio.h>
#include <stdlib.h>

int main()
{
    char notas[50];
    int i;
    int aboveAvg = 0;
    for (i = 0; i < 50; i++){
        char num = rand() % 101;        
        notas[i] = num;
    }

    float total;
    for (i = 0; i < 50; i++){
        total += notas[i];
    }

    float avg = total / 50;
    printf("Média das notas: %.2f\n", avg);

    for(i=0; i< 50; i++){
        if(notas[i] > avg){
            aboveAvg += 1;                        
        }
        printf("Nota aluno %d: %d\n", i, notas[i]);
    }

    printf("Quantidade de notas acima da média: %d\n", aboveAvg);
}