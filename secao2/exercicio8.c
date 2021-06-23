#include <stdio.h>
/* secao6 exercicio 8
    faca um algoritimo que leia um numero inteiro e mostre uma
    mensagem indicando se este numero e par ou impar, e se e
    positivo ou negativo
*/

int main (){
    //receber valores
    int numero;

    //entradas
    printf("Escreva um numero: ");
    scanf("%d", &numero);

    //processamento
    if(numero % 2 == 0){
        if(numero > 0){
            printf("O Numero %d e par e positivo",numero);
        }else{
            printf("O numero %d e par e negativo",numero);
        }
    }else {
        if(numero > 0){
            printf("O Numero %d e impar e positivo",numero);
        }else{
            printf("O Numero %d e impar e negativo.",numero);
        }
    }

}
