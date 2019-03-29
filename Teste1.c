#include <stdio.h>
int main( ) {

   printf("Escolha um número: ");
   int num;
   scanf("%d", &num);
   int soma = 0;

   while(num > 0){
       soma = (soma+num);
       num = num - 1;
   }
   printf("somou %d\n", soma);
   return 0;
}