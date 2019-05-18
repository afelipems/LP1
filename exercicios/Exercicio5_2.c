#include <stdio.h>
void compra(int* conta, int valor);

int main()
{
    int primeiraConta;
    int segundaConta;
    int* conta;
    int valorCompra = 500;

    printf("Digite o saldo da primeira conta");
    scanf("%d", &primeiraConta);
    printf("Digite o saldo da segunda conta");
    scanf("%d", &segundaConta);

    if (primeiraConta > segundaConta)
    {
        conta = &primeiraConta;
    }
    else
    {
        conta = &segundaConta;
    }

    compra(conta, valorCompra);
    printf("Valor da primeira conta: %d | Valor da segunda conta: %d", primeiraConta, segundaConta);
}

void compra(int* conta, int valor)
{
    *conta -= valor;
}