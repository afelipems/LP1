#include <stdio.h>
void compra(int* conta, int valor);

int main()
{
    int primeiraConta;
    int segundaConta;
    int* conta;
    int valorCompra = 500;
    int compras [] = {100, 50, 80, 30, 120};

    printf("Digite o saldo da primeira conta: ");
    scanf("%d", &primeiraConta);
    printf("Digite o saldo da segunda conta: ");
    scanf("%d", &segundaConta);

    if (primeiraConta > segundaConta)
    {
        conta = &primeiraConta;
    }
    else
    {
        conta = &segundaConta;
    }

    for(int i = 0; i < 5; i++){
        compra(conta, compras[i]);
        printf("Valor da primeira conta: %d | Valor da segunda conta: %d \n", primeiraConta, segundaConta);
    }
}

void compra(int* conta, int valor)
{
    *conta -= valor;
}