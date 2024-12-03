/*4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/



#include <stdio.h>
#include <stdlib.h>

int main()
{

float salario, prestacao;

printf("Digite o valor do seu sálario\n");
scanf("%f", &salario);


printf("Digite o valor da prestacao\n");
scanf("%f", &prestacao);

if (prestacao > 0.20 * salario) {
    printf("Emprestimo não concedido.\n");
} 

else{
    printf("Emprestimo concedido.\n");
}

return 0;
}