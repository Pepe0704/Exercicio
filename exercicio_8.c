/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
*/
#include <stdio.h>

int main()
{
   int idade;
   
   printf("Digite a sua idade:\n");
   scanf("%d", &idade);
   
   if (idade >= 5 && idade <= 7){
       printf("Essa idade pertence a categoria: Infantil-A\n");
   }
   else if (idade >= 8 && idade <= 10){
       printf("Essa idade pertence a categoria: Infantil-B\n");
   }
    else if (idade >= 11 && idade <= 13){
       printf("Essa idade pertence a categoria: Juvenil-A\n");
}
    else if (idade >= 14 && idade <= 17){
       printf("Essa idade pertence a categoria: Juvenil-B\n");
}
    else if (idade > 18){
       printf("Essa idade pertence a categoria: Sênior\n");
    }
    else {
        printf("Não aceitamos crianças menores que 5 anos :/");
    }
    
    return 0;
}