#include <stdio.h>
#include <string.h>

void main() {
    FILE* f;

    for(int i = 0; i < 10; i++) {

        char dummyString[25];
        int stringNumber = 1;
        char stringIndex[2];
        sprintf(stringIndex, "%d", stringNumber);
        char fileName[] = strcat("/tmp/arq", strcat(stringIndex, ".txt"));

        printf("Digite o valor para a string %d\n: ", stringNumber);
        scanf("%s", &dummyString);
        f = fopen(fileName, "w");

        for(int i = 0; i < 25; i++) {
            fputc(dummyString[i], f);
        }

        fputc('\0', f);
        fclose(f);
        stringNumber++;
    }
    
}