#include<stdio.h>
/*
faca um algoritimo que carregue um vetor de 5 elementos
inteiros e em seguida armazene em um vetor apenas os numeros
pares maioresque 0. No final deve mostrar os elementos do vetor
na tela.
entao fazer um algortimo que recebe 5 elementos e mostrar so
os pares :)
*/

int main(){
    int vetor[5], pares[5], cont_p = 0;
    //0, 1, 2, 3, 4
    for(int i =0; i < 5; i++){
        printf("Informe um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            if(vetor[i] > 0){
                pares[cont_p] = vetor[i];
                cont_p = cont_p + 1;
            }
        }
    }
    for (int i = 0; i < cont_p; i++){
        printf("%d\n", pares[i]);
    }
}