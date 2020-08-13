//programa que converte a data para o padrão americano


#include <stdio.h>
#include <stdlib.h>
int main(void){

int dia;
int mes;
int ano;

printf("Entre com o dia: ");
	scanf("%i", &dia );
printf("Entre com o mes: ");
	scanf("%i", &mes );
printf("Entre com o ano: ");
	scanf("%i", &ano );


printf("%i/%i/%i", ano, mes, dia );
return 0;		
}
