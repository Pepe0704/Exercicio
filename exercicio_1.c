/*1) Faça um programa que leia dois números e mostre qual deles é o maior.*/



#include <stdio.h>
#include <stdlib.h>

int main()
{

int A, B;

printf("Digite dois número para saber qual é o maior\n");
scanf("%d %d", &A, &B);

if ( A > B) {
    printf("O primeiro numero é o maior.");
} else{
    printf("O segundo numero é o maior.");
}

return 0;
}