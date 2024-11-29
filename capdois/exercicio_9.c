/*Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.*/


#include <stdio.h>

int main()
{
    float x, y;
    
    printf("digite dois numeros ");
    scanf("%f %f",&x, &y );
    
    
    
    printf("esse é o resultado: %2f %2f\n", y, x);
     
}