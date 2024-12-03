/*2) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

int A, B;

printf("Digite dois número para saber qual é o maior\n");
scanf("%d %d", &A, &B);

if ( A > B) {
    printf("O primeiro numero é o maior.\n");
} 

else if (A < B) {
    printf("O segundo numero é o maior.\n");
}

else{
    printf("Os dois números são iguais.\n");
}

return 0;
}