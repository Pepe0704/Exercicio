/*Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.*/

#include <stdio.h>

int main()
{
    double x; 
    
    printf("digite um número inteiro");
    scanf("%lf", &x);
    
    printf("esse é o resultado: %e\n", x);
    
}