/*Calcule o quadrado de um número. */

#include <stdio.h>

int main(void){

    int numero, quadrado;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    quadrado = numero * numero;

    printf("O quadrado de %i eh %i\n",numero,quadrado);

    return 0;
}