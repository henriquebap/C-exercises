#include <stdio.h>
/* secao 6 exercicio 1 

ler uma variavel numerica n e imprimi-la somente 
se a mesma for maior que 100,
caso contrairo imprimi-la com valor zero.
*/
int main(){
//delcarando variaveis
    int n;

    //entrada dos valores
    printf("Escreva um numero: ");
    scanf("%d", &n);

    //processamento

    if(n > 100){
        printf("%d", n);
    }else{
        n = 0;
        printf("%d", n);
    }

}