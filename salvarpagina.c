#include <stdio.h>
#include <string.h>

int main(){
FILE *file = fopen("livro.csv", "a");	



char *nomelivro;
nomelivro = malloc(100 * sizeof(char));

char *numeropaginas;
numeropaginas = malloc(30 * sizeof(char));
	
printf("Nome do livro:\n");
scanf("%[^\n]s", nomelivro);


printf("Numero de paginas:\n");
scanf("%s", numeropaginas);


printf("%s\n", nomelivro);	
printf("%s\n", numeropaginas);		

fprintf(file, "%s, %s\n", nomelivro, numeropaginas);

fclose(file);
return 0;
}
