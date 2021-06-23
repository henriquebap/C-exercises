#include<stdio.h>
/* algoritimo que leia dois vetores de 10 posicoes e
faca a soma dos elementos de mesmo indice, colocando
o resultado em um terceiro vetor. Mostre o vetor resultante
*/
int main(){
    int vetor1[10], vetor2[10], soma[10];
    for(int i = 0; i < 10; i++){
        printf("Escreva um numero : ");
        scanf("%d", &vetor1[i]);
        printf("Escreva agora para o segundo vetor: ");
        scanf("%d", &vetor2[i]);
        printf("\n");
        soma[i] = vetor1[i] + vetor2[i];
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", soma[i]);
    }
}