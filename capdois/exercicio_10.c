/*Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).*/


#include <stdio.h>

int main()
{
   int dia;
   int mes;
   int ano;
   
   printf("Digite o dia de hoje\n");
   scanf("%d", &dia);
   
   printf("Digite o mes em que vc esta\n");
   scanf("%d", &mes);
   
   printf("Digite o ano em que vc esta\n");
   scanf("%d", &ano);
   
   
   printf("esse é o dia, mes e ano\n %d\n %d\n %d", dia, mes, ano);
   
}