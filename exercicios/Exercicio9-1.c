#include <stdio.h>
#include <string.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void main() {
struct Caixa c5 = {5, NULL};
struct Caixa c4 = {7, &(c5)};
struct Caixa c3 = {9, &(c4)};
struct Caixa c2 = {3, &(c3)};
struct Caixa c1 = {1, &(c2)};

printf("%d->%d->%d->%d->%d", c1.valor, *(&(c1.prox)->valor)
, *(&(c2.prox)->valor), *(&(c3.prox)->valor), *(&(c4.prox)->valor));
}