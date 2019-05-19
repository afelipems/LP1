#include <stdio.h>
struct Preco
{
   int sub;
   union {
      float reais;
      float dolares;
      float euros; 
   };
};

void exibe (struct Preco* p) {
    switch (p -> sub)
    {
    case 0:
        printf("Reais = %d \n", p ->reais);
        break;
    case 1:
        printf("Dólares = %d \n", p ->dolares);
        break;
    case 2:
        printf("Euros = %d \n", p -> euros);
        break;
    default:
        printf("Índice de subtipo inválido");
        break;
    }
}

void altera (struct Preco* p, int i) {
    (*p).sub = i;
}

void main (void) {
    struct Preco preco;
    preco.dolares = 4;
    preco.sub = 1;
    exibe(&preco);
    altera(&preco, 2); //euro
    exibe(&preco);
}
