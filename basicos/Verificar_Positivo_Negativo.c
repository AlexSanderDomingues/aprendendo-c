/*Verifique se um número é positivo, negativo ou zero*/

#include <stdio.h>

int main(void){

int numero;

printf("Digite um numero: ");
scanf("%d",&numero);

if(numero > 0){ printf("%d é positivo.\n",numero); }

else if(numero < 0){ printf("%d é negativo.\n",numero); }

else{ printf("O numero e zero.\n"); }





return 0;
}
