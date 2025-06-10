/*Converta graus Celsius para Fahrenheit. F = C x 1,8 + 32*/

#include <stdio.h>

int main(){

float temperatura,resultado;

printf("informe uma temperatura: ");
scanf("%f",&temperatura);

resultado = (temperatura * 1.8) + 32;

printf("o resultado da conversao e: %.2f\n", resultado);

return 0;
}


