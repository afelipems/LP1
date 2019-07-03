#include <stdio.h>
#include <string.h>

void escreva_string (FILE* f, char* str) { 
    
    f = fopen("/tmp/filename.txt", "w");

    for(int i = 0; i < strlen(str); i++) {
        fputc(str[i], f);
    }
    fputc('\0', f);
    fclose(f);
}

void exercicio_1() {
    char inputString [25];
    FILE* file;

    printf("Digite o valor para a string em até no máximo 25 caracteres");
    scanf("%s", &inputString);
    escreva_string(file, inputString);
}
