/*
exercicio 5 
faca um algoritimo que converta metros para centimetro 
*/

#include <stdio.h>

int main(){
    //declarando variaveis
    int metros, multiplicacao;
    //float divisao;
    
    //recebendo os valores
    
    printf("Qual a qunatidade de metros: ");
    scanf("%d", &metros);
    
    //processamento
    multiplicacao = (metros*100 );
    
    //saida 
    printf("O valor de %d metros em centimetros e %d", metros, multiplicacao);
}
