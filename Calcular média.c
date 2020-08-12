#include <stdio.h>
#include <cs50.h>
const int X = 4;
int main(void)
{

float a = get_float("Nota 1 bimestre: ");
float b = get_float("Nota 2 bimestre: ");
float c = get_float("Nota 3 bimestre: ");
float d = get_float("Nota 4 bimestre: ");

printf("Sua média é:%.2f\n", ((a + b + c + d)/X));

}
