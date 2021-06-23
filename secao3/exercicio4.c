#include <stdio.h>
/*secao 3 excercicio 4
    algoritimo que leia 10 valores inteiros e positivos
    encotre o menor, maior e a media deles
*/
int main(){
    int valor, maior = -999, menor = 999, soma = 0;
    float media;

    //entradas 
    for(int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &valor);
    
    //processamento
    if(valor > 0){
        if(valor > maior){
            maior = valor;
        }
        if(valor < menor ){
            menor = valor;
        }
            soma = soma + valor;
        }else{
            i--;
        }
    }
    media = soma / 10;
    printf("O maior numero e %d\n", maior);
    printf("O menor numero e %d\n", menor);
    printf("A media dos numeros e %2.f", media);
}