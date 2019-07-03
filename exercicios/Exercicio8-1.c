#include <stdio.h>
#include <string.h>

void main() {

    char inputString [25];
    FILE* file;

    printf("Digite o valor para a string em até no máximo 25 caracteres");
    scanf("%s", &inputString);
    file = fopen("/tmp/arq.txt", "w");
    for(int i = 0; i < strlen(inputString); i++) {
        fputc(inputString[i], file);
    }
    fputc('\0', file);
    fclose(file);
}