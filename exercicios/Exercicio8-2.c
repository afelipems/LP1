#include <stdio.h>
#include <string.h>

void main() {
    char outputString [25];
    FILE* file;

    file = fopen("/tmp/arq.txt", "r");

    int count = 0;

    while(fgetc(file) != '\0' && count < 25) {
        outputString[count] = fgetc(file);
        count++;
    }

    printf("Output string: %s", outputString); 
}