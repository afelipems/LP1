#include <stdio.h>
#include <string.h>

void main (void) {

    char inputString [25];
    char outputString [25];
    FILE* f;

    printf("Digite algum valor de no máximo 25 caracteres: \n");
    scanf("%s", &inputString);
    f = fopen("/tmp/arq-01.txt", "w");

    for(int i = 0; i < strlen(inputString); i++) {        
        fputc(inputString[i], f);
    }
    fclose(f);

    f = fopen("/tmp/arq-01.txt", "r");
    for(int i = 0; i < strlen(inputString); i++) {        
        outputString[i] = fgetc(f);
    }
    fclose(f);

    printf("String digitada: %s \n", &outputString);

}
