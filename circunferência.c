//Programa que calcula di�metro, �rea e per�metro de uma circunfer�ncia

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
int main(void){
	
float raio;
	
	
printf("Raio da circunfer�ncia: ");
scanf("%f", &raio);	
	
printf("Di�metro: %f\n", raio * 2);
printf("Per�metro: %.3f\n", raio * pi * 2);
printf("�rea: %.3f\n", raio * raio * pi);



return 0;	
}
