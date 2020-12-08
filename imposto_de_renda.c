/*Programa que calcula o imposto de renda no Brasil */

#include <stdlib.h>

int main(){
	float taxa;
	float num;
	float salario;
                                       
  
	printf("Salario: ");
	scanf("%f", &salario);

	if(salario <= 0.0f){
		printf("Invalido");
		return(0);}

		num = salario - 1900.00f;
	
		if(num < 0.0f){
			printf("Isento");
			return(0);
		}
	
		else if(num >= 0.01f && num < 900.00f){

			taxa = num * .075;
			printf("Salario bruto: %.2f \nSalario Liquido: %.2f \nValor retirado: %.2f\nTaxa anual:  %.2f\n", salario , salario - taxa, taxa, taxa*12.00f);}
		
		else if(num > 900.01f && num < 1850.00f){
			num = num - 900.00f;
			taxa = num * .15;
			printf("Salario bruto: %.2f \nSalario Liquido: %.2f \nValor retirado: %.2f\nTaxa anual:  %.2f\n", salario , salario - (67.50f+ taxa), 67.50f + taxa, (67.50f + taxa) * 12.00f);
	}	
		else if(num > 1850.01f && num < 2764.00f){
			num = num - 1850.00f;
			taxa = num * .225;
			printf("Salario bruto: %.2f \nSalario Liquido: %.2f \nValor retirado: %.2f\nTaxa anual:  %.2f\n", salario , salario - (210.00f + taxa), 210.00f + taxa, (210.00f + taxa) * 12.00f);
	}
		else if(num > 2764.00f){
			num = num - 2764.00f;
			taxa = num * .275;
			printf("Salario bruto: %.2f \nSalario Liquido: %.2f \nValor retirado: %.2f\nTaxa anual:  %.2f\n", salario , salario - (415.00f + taxa), 415.00f + taxa, (415.00f + taxa) * 12.00f);
	}
	
	return(0);	
}
