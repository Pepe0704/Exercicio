/*9) Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.*/



#include <stdio.h>

int main()
{
   float peso, altura;
   
   printf("Digite a sua altura:\n");
   scanf("%f", &altura);
   
    printf("Digite o seu peso:\n");
   scanf("%f", &peso);
 
 if (altura < 1.20){
     if (peso <= 60){
         printf("Classificação: A\n");
     } else if (peso <= 90){
       printf("Classificação: D\n");
     }
       else 
       printf("Classificação: G\n");
 }
  if (altura >= 1.20 && altura <= 1.70){
     if (peso <= 60){
         printf("Classificação: A\n");
     } else if (peso <= 90){
       printf("Classificação: D\n");
     }
       else 
       printf("Classificação: G\n");
 }
  else {
     if (peso <= 60){
         printf("Classificação: A\n");
     } else if (peso <= 90){
       printf("Classificação: D\n");
     }
       else 
       printf("Classificação: G\n");
 }
    return 0;
}