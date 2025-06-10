/*Calcule a área de um círculo (use π = 3.14).formula: pi * raio * raio */

#include <stdio.h>

#define pi 3.14

int main(){

float raio,area;

printf("Informe o valor do raio do seu circulo: ");
scanf("%f",&raio);

area = pi * (raio*raio);

printf("O valor da area do circulo de  é: %.2f\n",area); 



return 0;
}
