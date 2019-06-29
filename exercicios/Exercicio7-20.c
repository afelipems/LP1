#include <stdio.h>

enum Moeda {
    Real,
    Dolar,
    Euro
};

struct Preco
{
   enum Moeda Moeda;
   union {
      float reais;
      float dolares;
      float euros; 
   };
};

void exibe (struct Preco* p) {
    switch (p -> Moeda)
    {
    case Real:
        printf("Reais = %d \n", p ->reais);
        break;
    case Dolar:
        printf("Dólares = %d \n", p ->dolares);
        break;
    case Euro:
        printf("Euros = %d \n", p -> euros);
        break;
    default:
        printf("Índice de subtipo inválido");
        break;
    }
}

void altera (struct Preco* p, enum Moeda moeda) {
    (*p).Moeda = moeda;
}

void main (void) {
    struct Preco preco;
    enum Moeda moeda = Real;
    preco.dolares = 4;
    preco.Moeda= moeda;
    exibe(&preco);
    enum Moeda alteraMoeda = Euro;
    altera(&preco, alteraMoeda);
    exibe(&preco);
}
