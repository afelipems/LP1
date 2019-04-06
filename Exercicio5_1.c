#include <stdio.h>
int main()
{
    int a;
    int b;
    int* p;

    printf("Escolha o primeiro número: ");
    scanf("%d", &a);

    printf("Escolha o segundo número: ");
    scanf("%d", &b);

    if(a > b){
        p = &a;
    } else
    {
        p = &b;
    }

    *p -= 50;

    printf("Valor de a: %d | Valor de b: %d ", a, b);
    return 0;
}