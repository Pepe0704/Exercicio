/*Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.*/

#include <stdio.h>

int main()
{
char x, y, z;

printf("Digite três Caracteres \n");
scanf("%c %c %c", &x, &y, &z);

printf("Você digitou isso \"%c\", \"%c\", \"%c\"\n", x, y, z);
  
  return 0;
}