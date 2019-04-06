#include <stdio.h>
int ehPrimo(int number);

int main()
{
    ehPrimo(10);
}

int ehPrimo(int number)
{
    int currentNumber = 2;
    
    if(number <= 2){
        return 1;
    }

    for(int i = 2; i <= number/2; i++){
        if(number % i == 0){
            printf("Não primo");
            return 0;            
        }
    }
    printf("É primo");
    return 1;
}