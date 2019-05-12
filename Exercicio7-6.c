#include <stdio.h>

struct Futebolista {
    char nome[255];
    int idade;
    char time [255];
};

void main (void) {
    struct Futebolista neymar = {"Neymar", 27, "Paris Saint-Germain"};
    struct Futebolista courtois = {"Thibaut Courtois", 27, "Real Madrid"};
    struct Futebolista messi = {"Lionel Messi", 31, "Barcelona"};

    struct Futebolista futebolistas [3] = {neymar, courtois, messi};

    for(int i = 0; i<3; i++){
        printf(" \n Atleta: \n Nome: %s \n Idade: %d \n Time: %s", futebolistas[i].nome, futebolistas[i].idade, futebolistas[i].time);
    }    

}