#include <stdio.h>
#include <stdlib.h>

struct Ponto
{
    int x;
    int y;
};

struct Personagem
{
    int id;
    struct Ponto posicao;
    int pontuacao;
};

void main(void)
{
    struct Personagem personagens[10];

    for(int i = 0; i < 10; i++) {
        struct Personagem personagem = {i+1, rand()%10, rand()%10, 0};
        personagens[i] = personagem;
    }
}