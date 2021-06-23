#include <stdio.h>
/* secao 6 exercicio 9
A secretaria de meio ambiente que controla o
 indice de poluicao 
mantem 3 grupos de industrias que 
sao altamente poluentes do
meio ambiente. O indice de poluicao 
aceitavel varia de
0,05 ate 0,25.
Se o indice sobre para 0,3 as industrias
do 1 grupo sao intimadasa suspenderem 
suas atividades, se o indice crescer para 0,4
as industrias do 1 e do 2 grupo sao intimadas
a suspenderem, se o indice atingir 0,5 todos
os grupos devem ser notificados
FACA UM ALGORITIMO QUE LEIA O INDICE DE 
POLUICAO MEDIDO E EMITA A NOTIFICACAO
ADEQUADA AOS DIFERENTES
GRUPOS DE EMPRESAS.
*/

int main(){
    //declarando as variaveis 
    float indice;

    //recebendo dados 
    printf("Escreva o indice de poluicao: ");
    scanf("%f", &indice);

    //processamento
    if(indice >= 0.3 && indice < 0.4){
        printf ("Atencao: Grupo 1 suspender atividades");
    }else if(indice >= 0.4 && indice < 0.5){
        printf("Atencao: Grupo 1 e Grupo 2 suspender atividades");
    }else if (indice >= 0.5){
        printf("Atencao: Todos os Grupos devem suspender atividades");
    }else{
     printf("O nivel de poluicao esta dentro das normas");   
    }
}