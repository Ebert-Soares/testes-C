#include <stdio.h>
 main()
 {
 float fahr, celsius;
 float menor, maior, linhas;
 
 
 
 menor = 0;
 maior = 300; 
 linhas = 1; 
 
 
 
 fahr = menor;
 while (fahr <= maior) {
 	celsius = (5.0/9.0) * (fahr-32.0);
 	printf("%3.0f %.1f\n", fahr, celsius);
	fahr = fahr + linhas;
 }
}
