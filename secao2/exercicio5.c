#include <stdio.h>
/* secao 6 exercicio5
    joao da silva , pescador, comprou um microcomputador para controlar
    o rendimento diario de seu trabalho. Toda Vez que ele traz um peso de peixes
    maior que o estabelecido pelo regulamento de pesca do estdadosao paulo
    50 QUILOS, deve pagar uma multa dew 4 reais por quilo excedente.
    Joao precisa de um algoritimo que leia a variavel 'p' (peso de peixes)
    e verifique se ha excesso. Se houver, gravar na variavel 'e'(excesso)
    tais variaveis com o conteudo 'zero'
*/

int main(){
    //declarando as variaveis 
    float e = 0, m = 0, p;

    //receber os valores
    printf("Digite a qunatidade de KG: ");
    scanf("%f", &p);

    //processamento

    if (p > 50){
        e = p - 50;
        m = e * 4;
        printf("Excesso de Kg sao %.2f \n",e);
        gets(stdin);
        printf("Sua multa sera de R$ %.2f \n",m);
    }else
        printf("Joao voce esta dentro a margem estabelecida \n");
}