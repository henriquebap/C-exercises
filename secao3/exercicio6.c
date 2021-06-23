#include<stdio.h>
/* secao 3 exercicio 6 

desenvolva um gerador de tabuada, capaz de gerar a tabuada
de qualquer numero inteiro entre 1 a 10. O usuario deve informar
de qual numero ele deseja ver a tabuada. A saida deve
ser conforme o exemplo a baixo

Tabuada de 5:
5 x 1 = 5
5 x 2 = 10
*/

int main(){

    int numero;

    printf("Digite qual a tabuada voce quer ver: ");
    scanf("%d", &numero);

    while (numero < 1){
        printf("O numero precisa ser maior ou igual a 1\n");
        printf("Informe novamente o numero: ");
        scanf("%d", &numero);
    }
    for(int i = 1; i <=10; i++){
        printf(" %d X %d = %d\n", numero, i, (numero * i));
    }
}