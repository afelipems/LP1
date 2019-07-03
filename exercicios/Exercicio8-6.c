#include <stdio.h>
#include <string.h>

struct Pessoa {
    int  idade;
    char nome[64];
    int  peso;
};

void preenche_pessoa(struct Pessoa* pessoa) {
    printf("Digite a idade da pessoa \n");
    scanf("%d", pessoa->idade);

    printf("Digite o nome da pessoa: \n");
    scanf("%s", pessoa->nome);

    printf("Digite o peso da pessoa: \n");
    scanf("%f", pessoa->peso);
}

void le_binario(FILE* file, struct Pessoa* pessoa) {
    file = fopen("/tmp/file.bin", "rb");
    fread(&pessoa, sizeof(struct Pessoa), 1, file);
    fclose(file);
}

void escreve_binario(FILE* file, struct Pessoa* pessoa) {
    file = fopen("/tmp/file.bin", "wb");
    fwrite(&pessoa, sizeof(struct Pessoa), 1, file);
    fclose(file);
}

void main() {
    struct Pessoa pessoas [10];
    FILE* file;

    for(int i = 0; i < 10; i++) {
        struct Pessoa pessoa;
        preenche_pessoa(&pessoa);
        pessoas[i] = pessoa;

        escreve_binario(file, &pessoa);
    }
}