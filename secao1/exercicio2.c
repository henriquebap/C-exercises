/* exercicio2 
faca um algoritimo para calcular o estoque medio de uma peca sendo que 
estoque_medio = qunatidade_min = quantidade_max / 2

calcular estoque medio
*/
#include <stdio.h>

int main() {
    //delcarando as variaves
    int quantidade_min, quantidade_max;
    float estoque_medio;
    //recebendo os valores
    printf("Digite o Valor minimo: ");
    scanf("%d", &quantidade_min);
    
    printf("Digite o valor maximo: ");
    scanf("%d", &quantidade_max);
    
    //processamento
   estoque_medio = (quantidade_min = quantidade_max) /2;
    
    //saida 
    printf("O valor estoque medio e %.2f", estoque_medio);
    
}