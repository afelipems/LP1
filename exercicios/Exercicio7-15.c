#include <stdio.h>

union Animal
{
    struct Anfibio {
    int numeroDePatas;
    float espessuraDaPele;
    int temCauda;
    } Anfibio;

    struct Ave {
        float comprimentoBico;
        int autonomiaVoo;
        float faixaDeFrequenciaDoCanto;
    } Ave;

    struct Mamifero
    {
        int quantidadeDeDentes;
        float volumeDoCerebro;
        int velocidadeTerrestre;
    } Mamifero;

    struct Reptil {
        int venenoso;
        int autonomiaDebaixoDagua;
        float espessuraDosOvos;
    } Reptil; 
};

void main (void) {
    int intvar;
    float floatvar;

    //EXEMPLO 1
    union Animal sapo;
    struct Anfibio anf;
    printf("Digite propriedade 1 do animal");
    scanf("%d", &intvar);
    anf.numeroDePatas = intvar;
    printf("Digite propriedade 2 do animal");
    scanf("%d", &floatvar);
    anf.espessuraDaPele = floatvar;
    printf("Digite propriedade 3 do animal");
    scanf("%d", &intvar);
    anf.temCauda = intvar;
    sapo.Anfibio = anf;

    //EXEMPLO 2
    union Animal galinha;
    struct Ave ave;
    printf("Digite propriedade 1 do animal");
    scanf("%d", &floatvar);
    ave.comprimentoBico = floatvar;
    printf("Digite propriedade 2 do animal");
    scanf("%d", &intvar);
    ave.autonomiaVoo = intvar;
    printf("Digite propriedade 3 do animal");
    scanf("%d", &floatvar);
    ave.faixaDeFrequenciaDoCanto = floatvar;
    galinha.Ave = ave;

    //EXEMPLO 3
    union Animal gato;
    struct Mamifero mam;
    printf("Digite propriedade 1 do animal");
    scanf("%d", &intvar);
    mam.quantidadeDeDentes = intvar;
    printf("Digite propriedade 2 do animal");
    scanf("%d", &floatvar);
    mam.volumeDoCerebro = floatvar;
    printf("Digite propriedade 3 do animal");
    scanf("%d", &intvar);
    mam.velocidadeTerrestre = intvar;
    gato.Mamifero = mam;

    //EXEMPLO 4
    union Animal jacare;
    struct Reptil rep;
    printf("Digite propriedade 1 do animal");
    scanf("%d", &intvar);
    rep.venenoso = intvar;
    printf("Digite propriedade 2 do animal");
    scanf("%d", &intvar);
    rep.autonomiaDebaixoDagua = intvar;
    printf("Digite propriedade 3 do animal");
    scanf("%d", &floatvar);
    rep.espessuraDosOvos = floatvar;
    jacare.Reptil = rep;

    //EXEMPLO 5
    union Animal pato;
    struct Ave ave2;
    printf("Digite propriedade 1 do animal");
    scanf("%d", &floatvar);
    ave2.comprimentoBico = intvar;
    printf("Digite propriedade 2 do animal");
    scanf("%d", &intvar);
    ave2.autonomiaVoo = intvar;
    printf("Digite propriedade 3 do animal");
    scanf("%d", &floatvar);
    ave2.faixaDeFrequenciaDoCanto = floatvar;
    pato.Ave = ave2;

    //EXEMPLO 6
    union Animal salamandra;
    struct Anfibio anf2;
    printf("Digite propriedade 1 do animal");
    scanf("%d", &intvar);
    anf2.numeroDePatas = intvar;
    printf("Digite propriedade 2 do animal");
    scanf("%d", &floatvar);
    anf2.espessuraDaPele = floatvar;
    printf("Digite propriedade 3 do animal");
    scanf("%d", &intvar);
    anf2.temCauda = intvar;
    salamandra.Anfibio = anf2;


}

