/*Peça um número e mostre seu dobro.*/

#include <stdio.h>

int main(){

int dobro,numero;

printf("Informe um numero: ");
scanf("%d",&numero);
dobro = numero * 2;

printf("O dobro de %d é %d\n", numero, dobro);


return 0;
}
