//Programa que calcula diâmetro, área e perímetro de uma circunferência

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
int main(void){
	
float raio;
	
	
printf("Raio da circunferência: ");
scanf("%f", &raio);	
	
printf("Diâmetro: %f\n", raio * 2);
printf("Perímetro: %.3f\n", raio * pi * 2);
printf("Área: %.3f\n", raio * raio * pi);



return 0;	
}
