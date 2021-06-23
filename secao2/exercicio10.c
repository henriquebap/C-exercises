#include <stdio.h>
/* secao6 exercicio10
    elabore um algoritimo que dada a idade de um nadador classifique-o
em uma das seguintes categorias
infantil - a = 5 a 7 anos
infantil - b = 8 a 11 anos
juvenil - a = 12 a 13 anos
juvenil - b = 14 a 17 anos
adultos = Maiores de 18 anos
*/

int main(){
    //declarar as variaveis 
    int  idade;

    //receber valores
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //processamento

    if(idade >= 5 && idade <= 7){
        printf("Setor Infantil A");
        gets(stdin);
    }else if (idade >= 8 && idade <=11 ){
        printf("Setor Infantil B");
        gets(stdin);
    }else if(idade >= 12 && idade <=13){
        printf("Setor Juvenil A");
        gets(stdin);
    }else if(idade >= 14 && idade <=17){
        printf("Setor Juvenil B");
        gets(stdin);
    }else if(idade >= 18){
        printf("Setor Adulto");
        gets(stdin);
    }else if (idade >= 60){
        printf("Setor dos veio hein 🧐😆");
    }
}