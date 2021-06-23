#include <stdio.h>
/* secao2 exercicio2 
elabore  um algoritimo que leia um numero. se positivo armazene-o
em 'a', se for negativo, em 'b', no final mostrar o resultado.
*/
int main(){

    //declaracao
    int a, b, numero;

    //entrada das variaveis
    printf("Digite um numero real: ");
    scanf("%d", &numero);

    //processamento
    if (numero > 0){
        a = numero;
    printf("O Numero e positivo: ");
    }else{
        b = numero;
    }
    printf("o numero e negativo %d", numero);
}