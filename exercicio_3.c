/*3) Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

int A;

printf("Digite um número para saber se é par ou impar\n");
scanf("%d", &A);

if ( A % 2 == 0) {
    printf("Esse número é par.\n");
} 

else{
    printf("Esse número é impar.\n");
}

return 0;
}