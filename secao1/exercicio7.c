/* Exercicio 07

Tendo como dados de entrada a altura de uma pessoa, construa um algoritimo que calcule seu peso ideal, usando a seguinte formula: 72.7 * altura - 58
*/

#include <stdio.h>

int main() {
    // declarando as vairiaveis
    float altura, conta;
    
    //recebendo os valroes
    printf("Para descobrir seu peso ideal coloque a sua altura: ");
    scanf("%f", &altura);
    
    //processamento
    conta = (72.7 * altura) - 58;
    
    //saida
    printf("Seu peso ideal e %2.f", conta);
    
    
}
