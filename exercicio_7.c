/*7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.
*/



#include <stdio.h>

int main()
{
    float valor_produto, valor_final, imposto;
    int estado;
    
    printf("Digite o valor do produto:\n");
    scanf("%f", &valor_produto);
    
    printf("Digite o Estado de destino(1-MG, 2-SP, 3-RJ, 4-Ms): \n");
    scanf("%d", &estado);
    
    
    switch(estado){
        
        case 1:
        imposto = 0.07;
        break;
        
        case 2: 
        imposto = 0.12;
        
        break;
        
        case 3:
        imposto = 0.15;
        break;
        
        case 4: 
        imposto = 0.08;
        break;
    default: 
    printf("Erro: Estado digitado inválido.\n");
    
    return 1;
    }
    
    valor_final = valor_produto + (valor_produto * imposto);
    
    printf("O preço final do produto é: R$ %.2f\n", valor_final);
    return 0;
}