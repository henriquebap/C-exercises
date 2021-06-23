/*
exercicio 6
faca um algoritimo que pergunte quanto vc ganha por hora e o numero de horas trabalhadas no mes.
calcule e mostre o total de seu salario no referido mes.
*/

#include <stdio.h>

int main(){
    //declarando variaveis
    //s_hora = salario por hora
    //t_hora = horas trabalhadas a.m
    int s_hora, t_hora, conta;
    
    //recebendo os valores
    
    printf("Quanto voce recebe por horas trabalhadas?: ");
    scanf("%d", &s_hora);
    
    printf("Quantas horas voce trabalha por mes?: ");
    scanf("%d", &t_hora);
    
    //processamento
    conta = (s_hora * t_hora);
    
    //saida 
    printf("a cada %d horas trabalhadas voce recebe %d por mes",t_hora, conta);
}
