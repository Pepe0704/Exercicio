/*Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.*/


#include <stdio.h>

int main()
{
    int x;
    char y;
    float z;
    
    printf("Digite um númmero inteiro:\n");
    scanf("%d", &x);
    
       getchar();
    
    printf("Digite uma caracter:\n");
    scanf("%c", &y);
    
    printf("Digite um número flutuante: ");
    scanf("%f", &z);
    
    printf("Esse é o Resultado:\t%d\t%c\t%f\n", x, y, z);
}