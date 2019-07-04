#include <stdio.h>
#include <string.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe(struct Caixa* caixa) { 
    if((caixa->prox) == NULL) {
        printf("%d ", caixa->valor);
        return;
    }
    printf("%d -> ", caixa->valor);
    exibe(*(&(caixa->prox)));
}

void main() {

    struct Caixa c5 = {5, NULL};
    struct Caixa c4 = {7, &(c5)};
    struct Caixa c3 = {9, &(c4)};
    struct Caixa c2 = {3, &(c3)};
    struct Caixa c1 = {1, &(c2)};

    exibe(&c1);
}