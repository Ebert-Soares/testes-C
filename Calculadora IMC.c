#include <stdio.h>
#include <stdlib.h>
//calculadora de IMC

int main(void){

float altura;	
float peso;
	
printf("Altura(em cm): ");	
scanf("%f", &altura);

printf("Peso(em kg): ");	
scanf("%f", &peso);


printf("%f\n", peso / ((altura * altura)/ 100 ));






return 0; 	
}
