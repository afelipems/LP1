#include<stdio.h>

enum Dia {
    Dom,
    Seg,
    Ter,
    Qua,
    Qui,
    Sex,
    Sab
};

char* nome(enum Dia dia) {

    switch (dia)
    {
    case Dom:
        return "Domingo\n";
        break;
    case Seg:
        return "Segunda\n";
        break; 
    case Ter:
        return "Terca\n";
        break; 
    case Qua:
        return "Quarta\n";
        break; 
    case Qui:
        return "Quinta\n";
        break; 
    case Sex:
        return "Sexta\n";
        break; 
    case Sab:
        return "Sábado\n";
        break;                                                         
    default:
        break;
    }
};

void main() {
    enum Dia dia = Qui;
    char* a = nome(dia);
    printf("%s", a);
}