/*
exercicio 4 

faca um algoritimo que peca dois numeros e imprima a soma

"soma"
*/

#include <stdio.h>

int main(){
    //declarar os valores
    int x, y, soma;
    
    //recebendo os valores
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor do y: ");
    scanf("%d", &y);
    
    //processamento
    soma = x + y;
    
    //saida
    printf("O valor da soma e %d", soma);
    
}
