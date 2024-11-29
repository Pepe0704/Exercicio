/*Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.*/


#include <stdio.h>

int main()
{
char x;

printf("Digite alguma coisa\n");
scanf("%c", &x);

printf("Você digitou isso \"%c\"\n", x);
  
  return 0;
}