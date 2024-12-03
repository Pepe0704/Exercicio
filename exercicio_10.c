/*10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:*/



#include <stdio.h>
#include <math.h>

int main()
{
    
    int num1, num2, num3, opcao;
    float media;
    
    printf("Digite 3 números positivo inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
   
        
  if (num1 <= 0 ||num2 <= 0 || num2 <= 0){
      printf("Erro: Digite apenas numeros inteiros positivos. \n");
      return 1;
  }
  
 printf("Escolha o tipo de média a ser calculada:\n");
 printf(" Opção1 - Geometrica\n.");
 printf(" Opção2 - Ponderada.\n "); 
 printf(" Opção3 - harmônica.\n ");
 printf("Opção4 - Aritmetica\n");
 
scanf("%d", &opcao);

if(opcao == 1 ){
     media = num1 * num2 * num3; /*media Geometrica*/
     printf(" A media geometrica é %.2f\n", media);
}
else if (opcao == 2 ){
     media = num1 + (2 * num2) + (3 * num3) / 6; /*media Ponderada*/
     printf(" A media Ponderada é %.2f\n", media);
}
else if (opcao == 3 ){
     media = 1.0 / ((1.0 / num1) + (1.0 / num2) + (1.0 / num3)); /*media harmonica*/
     printf(" A media harmonica é %.2f\n", media);
}
else if (opcao == 4 ){
     media = num1 * num2 * num3 / 3; /*media Aritmetica*/
     printf(" A media Aritmetica é %.2f\n", media);
}  

else{
    printf("Ops: opção invalida.");
}
return 0;
}

     
     
     