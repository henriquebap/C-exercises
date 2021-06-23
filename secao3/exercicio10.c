#include<stdio.h>
/*
mostrar os valores ao contrario 
*/

int main(){
    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Informe o valor do vetor: ");
        scanf("%d", vetor[i]);
    }
    for(int i = 9; i >= 0; i--){
        printf("%d\n", vetor[i]);
    }
}