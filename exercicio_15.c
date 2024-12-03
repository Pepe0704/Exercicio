/*15) Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são calculadas como

em que ∆ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima:
• Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se ∆ > 0, existem duas raízes reais. Imprima as raízes.*/


#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c, delta, x1, x2;
    
    printf("Digite três números coeficientes:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    if( a == 0){
        printf("Não é uma equação de segundo grau\n");
    }else{
        delta = b * b - 4 * a * c;
    if(delta < 0){
        printf("Não existe raiz\n");
    }
    else if(delta == 0) {
        x1 = -b / (2*a);
        printf("Raiz única: x = %.2f\n", x1);
    }
    else{
        x1 = (-b + sqrt(delta)) / (2*a);
         x2 = (-b - sqrt(delta)) / (2*a);
         printf("As raízes reais são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
    }
    return 0;
}