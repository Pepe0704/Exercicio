/*5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/

#include <stdio.h>
#include <math.h>

int main()
{

float num, quadrado, raiz;

printf("Digite um número:\n");
scanf("%f", &num);

if (num > 0){
   quadrado = (num * num);
    printf("O valor do numero digitado ao quadrado é %.2f\n", quadrado);
    raiz = ( sqrt(num));
    printf("O valor da raiz do numero digitado é %.2f\n", raiz);
} else {
    printf("Esse número não é positivo");
}
return 0;
}