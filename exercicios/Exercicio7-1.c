#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

void main (void) {
    struct Personagem p1;
    p1.forca = 10;
    p1.energia = 50;
    p1.experiencia = 30;

    //---------------//

    struct Personagem p2 = {10,50,30};
}
