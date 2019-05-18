#include <stdio.h>
#include<stdlib.h>
#include <math.h>

void preencheVetor(struct Ponto p []);
void preenche(struct Ponto* p, int x, int y);
struct Ponto getPontoMaisDistanteDaOrigem (struct Ponto p[]);

struct Ponto {
    int x;
    int y;
};

void main(void){

    struct Ponto pontos[10];
    preencheVetor(pontos);

    struct Ponto pontoMaisDistanteDaOrigem = getPontoMaisDistanteDaOrigem(pontos);

    printf("Ponto mais distante da origem  \n: X = %d \n Y = %d", pontoMaisDistanteDaOrigem.x, pontoMaisDistanteDaOrigem.y);
}

void preencheVetor(struct Ponto p[])
{
    for (int i = 0; i < sizeof(p); i++)
    {
        preenche(&(p[i]), i, i);
    }
}

void preenche (struct Ponto* p, int x, int y) {    
    (*p).x = x;
    (*p).y = y;
}

struct Ponto getPontoMaisDistanteDaOrigem (struct Ponto p[])
{
      double maiorDistancia = 0;
      int indexMaisDistante = 0;

      for(int i = 0; i < sizeof(p); i++) {

        double distancia = sqrt(pow(p[i].x, 2) + pow(p[i].y, 2));
        if (distancia >= maiorDistancia)
        {
            maiorDistancia = distancia;
            indexMaisDistante = i;
        }          
      }

      return p[indexMaisDistante]; 
}
