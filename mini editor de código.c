#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    FILE* fp;

    char desdfolder[1000];
    char destinationfolder[1000];

    char archiveformat[10];

    char information[100000];

    printf("What is the file name? ");
    fgets(desdfolder, 100, stdin);
    strtok(desdfolder, "\n");

    printf("What is the file format? (with the dot) ");
    fgets(archiveformat, 10, stdin);
    strtok(archiveformat, "\n");

    snprintf(destinationfolder, 100, "%s%s", desdfolder, archiveformat);

    fp = fopen(destinationfolder, "w+");
   	 if (!fp) {
        	printf("ERROR");
       		 return 1;
	}

    printf("Write your code:\n");
    fgets(information, 1000, stdin);
    fprintf(fp, "%s", information);

    fclose(fp);
}
