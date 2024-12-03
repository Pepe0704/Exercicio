/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/




#include <stdio.h>

int main()
{
  float altura, peso_ideal;
  char sexo;
  
  printf("Digite M para Masculino e F para feminino:\n");
  scanf(" %c", &sexo);
  
  printf("Digite a sua altura: \n");
  scanf("%f", &altura);
  
  if (sexo == 'M' || sexo == 'm') {
      
      peso_ideal = (72.7 * altura) - 58;
      
  } 
  
  else if (sexo == 'F' || sexo == 'f'){
  
    peso_ideal = (62.1 * altura) - 44.7;
}

else{ printf("sexo invalido\n");
     return 1;
      
  }
  
  printf("O seu peso ideal é: %.2f kg\n" , peso_ideal);
  
  return 0;
}