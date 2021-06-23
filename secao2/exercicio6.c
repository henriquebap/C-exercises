#include <stdio.h>
/* secao 6 exercicio 6
elaore um algoritimo que leia as variaveis 'c' e 'n', respectivamente
codigo e numero de horas trabalhadas de um operiario. Calcule o Salario sabendo-se
que ele ganah 10 reais por hora. Quando o numero de horas exceder a 50 calcule 
o excesso de pagamento armazenando-o na variavel 'e'. Caso Contrario zerar tal
variavel. A hora excedente de trabalho vale R$ 20,00 . No final do processamento
imprimir o salario total e o excedente.
*/
 int main(){
     //declarando as variaveis 
      float e = 0, c, n = 0, s, sf, extra;//s = salario //sf = salariop final sem extra

        //recebendo os valores
    printf("Digite sue codigo: ");
    scanf("%f", &c);
    gets(stdin);
    printf("Digite a qunatidade de horas trabalhadas: ");
    scanf("%f", &n);

    //processamento 

    if(n > 50){
        e = n - 50;
        n = n - e;
        extra = e * 20;
        s = n * 10 + extra;
        printf("Seu Salario + Extras sera de:  %.2f", s);
    }else{
    sf = n * 10;
    printf("Seu salario e de %.2f",sf);
    }
 }