#include <stdio.h>
int main( ) {

   printf("Escolha o primeiro número: ");
   int num1;
   scanf("%d", &num1);

   printf("Escolha o segundo número: ");
   int num2;
   scanf("%d", &num2);

   for(int i = num2; i >= num1; i--){

       if(i%2 == 0){
           printf("%d\n", i);
       }
   }
   return 0;
}