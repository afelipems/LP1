#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

struct Personagem preencheA(void) {
    struct Personagem dummy;
    dummy.forca = 40;
    dummy.energia = 50;
    dummy.experiencia = 65;
    return dummy;

}

void main (void) {
    struct Personagem p1 = preencheA();
    struct Personagem p2 = preencheA();
    printf("(%d,%d,%d) vs (%d,%d,%d)\n", p1.forca, p1.energia, p1.experiencia,
    p2.forca, p2.energia, p2.experiencia);
}