/*Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.*/


#include <stdio.h>

int main()
{
    int x; 
    
    printf("digite um número inteiro");
    scanf("%d", &x);
    
    printf("esse é o resultado: %f\n", x);
    
}