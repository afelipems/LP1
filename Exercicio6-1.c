#include <stdio.h>
void preenche(int[], int);

int main()
{
    int vec[10];
    preenche(vec, 10);
}

void preenche(int *vector, int n){
    for(int i = 0; i < n; i++){
        printf("Digite um número: ");
        scanf("%d", &vector[i+4]);
    }

    for(int k = 0; k < 10; k++){
        printf("%d", vector[k]);
    }
}
