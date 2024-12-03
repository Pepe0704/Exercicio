/*13) Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.*/


#include <stdio.h>

int main()
{
    float x, y, resultado;
    int opcao;
    
    printf("Escolha qual operação deseja, digitando do 1 ao 4\n");
    printf("Opção 1: Soma\n");
    printf("Opção 2: Subtração\n");
    printf("Opção 3: Divisão\n");
    printf("Opção 4: multiplicação\n");
    scanf("%d", &opcao);

         if(opcao < 1 || opcao > 4){
        printf("Opção invalida, digite um numero de 1 a 4 de acordo com a operação desejada\n");
        return 1;
         }
    
    printf("Digite dois números\n");
    scanf("%f %f", &x, &y);
    
    if(opcao == 1){
        resultado = x + y;
        printf("O resultado da soma é %.2f\n", resultado);
    }
    else if(opcao == 2){
        resultado = x - y;
        printf("O resultado da Subtração é %.2f\n", resultado);
    }
      else if(opcao == 3){
          
          if(y == 0){
              printf("Erro: Divisão por zero não é permitida");
          }else{
           resultado = x / y;
        printf("O resultado da Divisão é %.2f\n", resultado);
      }
      }
      else if (opcao == 4){
        resultado = x * y;
        printf("O resultado da multiplicação é %.2f\n", resultado);
      }
    
}