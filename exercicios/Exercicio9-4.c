#include <stdio.h>
#include <string.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int contem(struct Caixa* caixa, int valor) {

    if(caixa ->valor == valor) {
        return 1;
    }

    if((caixa->prox) == NULL) {
        return 0;
    }

    contem(*(&(caixa->prox)), valor);
}