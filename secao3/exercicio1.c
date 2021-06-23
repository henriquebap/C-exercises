#include<stdio.h>

/*secao 3 exercicio 1 
     faca um algoritmo que determine o maior
entre N numeros. a cinducai de para e a entrada
de um valor 0, ou seja , o algoritmo deve ficar
calculando o maior ate que a entrada seja igual
a 0 (Zero);
*/

int main(){
    //declaracao de variaveis
    int n, maior = 0;

    //recebendo os dados
    printf("Digite um numero e use 0 para parar\n");
    printf("Digite seu numero: ");
    scanf("%d", &n);

    //processamento
    while (n != 0 ){
        if( n > maior){
            maior = n;
        }
         //recebendo os dados
    printf("Digite seu numero: ");
    scanf("%d", &n);
    }
    printf("O maior numero e %d", maior);

}