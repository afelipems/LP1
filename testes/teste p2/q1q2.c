#include <stdio.h>

struct Pessoa
{
    char nome[255];
    int idade;
};

struct Professor
{
    struct Pessoa pessoa;
    char unidade[4];
    float salario;
};

struct Aluno
{
    struct Pessoa pessoa;
    int periodo;
    float cr;
};

void preenche_pessoa(struct Pessoa *p)
{
    printf("Digite o nome da pessoa: \n");
    scanf("%s", p->nome);
    printf("Digite a idade da pessoa: \n");
    scanf("%d", p->idade);
    exibe_pessoa(&p);
}

void preenche_professor(struct Professor *p)
{
    printf("Digite a unidade do professor: \n");
    scanf("%s", p->unidade);

    printf("Digite o salário do professor: \n");
    scanf("%f", p->salario);

    preenche_pessoa(&(p->pessoa));
}

void preenche_aluno(struct Aluno *a)
{
    printf("Digite o período do aluno: \n");
    scanf("%d", a->periodo);

    printf("Digite o CR do aluno: \n");
    scanf("%f", a->cr);

    preenche_pessoa(&(a->pessoa));
}

void exibe_pessoa(struct Pessoa *p)
{
    printf("Nome da pessoa: %s", p->nome);
    printf("Idade da pessoa: %s", p->idade);
}

void exibe_professor(struct Professor *p)
{
    printf("Unidade do professor: %s", p->unidade);
    printf("Salário do professor: %f", p->salario);
}

void exibe_aluno(struct Aluno *p)
{
    printf("Período do aluno: %d", p->periodo);
    printf("CR do aluno: %f", p->cr);
}

void main()
{
    struct Pessoa pessoa;
    preenche_pessoa(&pessoa);
    exibe_pessoa(&pessoa);

    struct Aluno aluno;
    preenche_aluno(&aluno);
    exibe_aluno(&aluno);

    struct Professor professor;
    preenche_professor(&professor);
    exibe_professor(&professor);
}

//------------------------------- QUESTÃO 2 --------------------------------//
struct Membro
{
    int subtipo;
    union {
        struct Professor professor;
        struct Aluno aluno;
    };
};

void preenche_membro(struct Membro *membro)
{
    printf("Para professor digite 0 e para aluno digite 1: \n");
    scanf("%d", membro->subtipo);

    switch (membro->subtipo)
    {
    case 0:
        preenche_professor(&(membro->professor));
        break;
    case 1:
        preenche_aluno(&(membro->aluno));
        break;
    default:
        break;
    };
};
void exibe_membro(struct Membro *membro)
{
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
};

void test() {
    struct Membro membros[100];
    for(int i=0; i <100;  i++) {
        struct Membro dummy;
        preenche_membro(&dummy);
        exibe_membro(&dummy);
        membros[i] = dummy;
    }
}

//Deve ser adicionado um novo struct Funcionario com cargo e salario e as funções preenche/exibe funcionario;
//Preenche/Exibe membro deve ter um novo switch para funcionário e Membro deve contar com um novo struct Funcionario;
//Facilitou. Desta maneira é possível escrever menos código;