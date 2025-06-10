/*Crie um programa que receba três notas de um aluno e calcule sua média. O programa deve exibir
"Aprovado" se a média for maior ou igual a 7.0, "Recuperação" se estiver entre 5.0 e 6.9, e
"Reprovado" se for inferior a 5.0*/

#include <stdio.h>

int main(void){

float nota1,nota2,nota3,media;

printf("Informe sua primeira nota: ");
scanf("%f",&nota1);

printf("Informe sua segunda nota: ");
scanf("%f",&nota2);

printf("Informe sua terceira nota: ");
scanf("%f",&nota3);

media = (nota1 + nota2 + nota3)/3;

printf("Sua media final foi: %.1f\n",media);

if (media >= 7.0){

	printf("Aluno Aprovado!\n");


}
else if (media >= 5.0 && media <= 6.9){

	printf("Aluno em Recuperação.\n");
}
else{

	printf("Aluno Reprovado!\n");

}



 return 0;
}
