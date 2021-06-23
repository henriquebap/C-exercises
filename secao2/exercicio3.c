#include <stdio.h>
#include <ctype.h>
/* exercicio4
tendo como dados de entrada a altura e o sexo de uma pessoa,
construa um algoritimo que calcule seu peso ideal, utilizando
as seguintes formulas:
para mulheres 62.1* altura -44.7
para homens 72.7 * altura -58
*/
int main(){
    //delcarando as variaveis
    float altura, conta;
    char sexo;

    //recebendo os valores
    printf("Qual e sua altura?: ");
    scanf("%f", &altura );
    gets(stdin); //correcao de bug
    printf("Voce e Homem ou Mulher? 'm/h': ");
    scanf("%c", &sexo);

    //processamento

    if (tolower(sexo) == 'm'){
        conta = (62.1 * altura) -44.7;
    printf("seu peso ideal e %2.f",conta);
    }if (tolower(sexo) == 'h'){
        conta = (72.7 * altura) - 58;
        printf("Seu peso ideal e %2.f", conta);
    }
    if(tolower(sexo) != 'm' && tolower(sexo) !='h'){
        printf("sexo nao reconhecido. \n");
    }
}