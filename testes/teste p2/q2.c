#include<stdio.h>

struct Pessoa {
    char nome [255];
    int idade;
};

struct Professor {
    struct Pessoa pessoa;
    char unidade[4];
    float salario;
};

struct Aluno {
    struct Pessoa pessoa;
    int periodo;
    float cr;
};

struct Membro {
    int subtipo;
    union {
        struct Professor professor;
        struct Aluno aluno;
    };

};

void preenche_membro(struct Membro* membro) {
    printf("Para professor digite 0 e para aluno digite 1: \n");
    scanf("%d", membro ->subtipo);
    
    switch (membro ->subtipo)
    {
    case 0:
        preenche_professor(&(membro->professor));
        break;
    case 1:
        preenche_aluno(&(membro->aluno));
        break;
    default:
        break;
    }
}

void exibe_membro(struct Membro* membro) {
    switch (membro->subtipo)
    {
    case 0:
        exibe_professor(&(membro->professor));
        break;
    case 1:
        exibe_aluno(&(membro->aluno));
        break;
    default:
        break;
    }
}