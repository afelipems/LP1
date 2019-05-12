#include <stdio.h>

struct Animal {
    int patas;
    int olhos;
};

void preenche (struct Animal* a) {    
    (*a).patas = 4;
    (*a).olhos = 4;
}

void main(void){
    struct Animal cachorro;
    preenche(&cachorro);

    printf("Patas: %d \n Olhos: %d \n", cachorro.patas, cachorro.olhos);
}