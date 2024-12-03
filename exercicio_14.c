/*14) Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.*/


#include <stdio.h>

int main()
{
    int x;
    float calculo;
    
    printf("Digite um número para verificar se ele é dividido por 3 ou 5\n");
    scanf("%d", &x);

if((x % 3 == 0) && (x % 5 != 0 )){    
    printf("Esse numero é divisivel apenas por 3\n");
} 

else if ((x % 5 == 0) && (x % 3 != 0 )){
    printf("Esse numero é divisivel apenas por 5\n");

} else{
    printf("Esse número não é divisível por 3 ou 5, ou é divisível por ambos.\n");
}
}