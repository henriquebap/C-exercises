#include<stdio.h>
/* mostar os vetores apenas maior doq 50 e se for menor 
uma mensagem de erro
*///0, 1 , 2 , 3 4,  5, 6, 7, 8, 9

int main(){
    int vetor[10];
    char tem_maior_50 = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe o valor para o vetor %d/10: ", (i+1));
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 10; i++){
        if(vetor[i] > 50){
            printf("O numero %d esta na posicao %d e eh maior doq 50\n", vetor[i], i);        
        }
    }
    if(tem_maior_50 < 1 ){
        printf("Nao existe nenhum numero maior que 50.");
    }
}
