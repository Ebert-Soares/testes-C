#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
FILE *file = fopen("Telefone.csv", "a");	

	
char *nome = argv[1];
char *numero = argv[2];
	

printf("%s\n", nome);	
printf("%s\n", numero);		

fprintf(file, "%s,%s\n", nome, numero);

fclose(file);
return 0;
}
