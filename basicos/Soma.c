/*Calcule a soma de dois números.*/

#include <stdio.h>

int main(){

int soma,numero1,numero2;

printf("Informe um numero: ");
scanf("%d",&numero1);

printf("Informe outro numero: ");
scanf("%d",&numero2);

soma = numero1 + numero2;

printf("O resultado da soma é: %d\n",soma);


return 0;
}
