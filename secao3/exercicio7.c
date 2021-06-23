#include<stdio.h>
/* secao 3 exercicio 7 
 tem varios mouses e tem q saber qual e bom e qual ta ruim e faz a 
 porcentagem disso e mostra a quantidade
 bele
*/
int main(){
    //declarando as variavies
    int contador_total = 0, contador_sit_1 = 0,
    contador_sit_2 = 0, contador_sit_3 = 0,
    contador_sit_4 = 0, indentificacao, defeito;
    //utilizei contador para armazenar os valores
    //e contador sit para registrar p cada situcacao do mouse
    //indentificacao e tipo o CPF do mouse registrado

    //recebendo valores
    printf("Para finalizar a acao digite 0\n");
    printf("Informe a indentificacao do mouse: ");
    scanf("%d", &indentificacao);

    while(indentificacao !=0){
        printf("Coloque o numero da situcao atual do mouse e sua necessidade\n");
        printf("1 - Necessita de esfera.\n");
        printf("2 - Necessida de limpeza e um pretin\n");
        printf("3 - Necessita de troca do cabo ou conector.\n");
        printf("4 - O bixin morreu ja (Inutilizavel)\n");
        printf("Informe o tipo de defeito identificado: ");
        scanf("%d", &defeito);

        //processamento
        if(defeito == 1){
            contador_sit_1 = contador_sit_1 + 1;
        }
        if(defeito == 2){
            contador_sit_2 = contador_sit_2 + 1;
        }
        if(defeito == 3){
            contador_sit_3 = contador_sit_3 + 1;
        }
        if(defeito == 4){
            contador_sit_4 = contador_sit_4 + 1;
        }
        contador_total = contador_total + 1;
        // Entradas :)
         printf("Para finalizar a acao digite 0\n");
    printf("Informe a indentificacao do mouse: ");
    scanf("%d", &indentificacao);
    }
    float p1, p2, p3, p4;//(Float)cast 
    p1 = ((float)contador_sit_1 / (float)contador_total * 100.0);
    p2 = ((float)contador_sit_2 / (float)contador_total * 100.0);
    p3 = ((float)contador_sit_3 / (float)contador_total * 100.0);
    p4 = ((float)contador_sit_4 / (float)contador_total * 100.0);
    //formula para realizar a media do mouse + condicao e fazer a media sobre o total de mouses


printf("Quantidade de Mouses %d\n\n", contador_total);
printf("Situacao\t Qunatidade \tPercentual\n");
printf("1-Necessidade de esfera\t\t\t\t\t\t\t\t%d \t\t%.2f%%\n",contador_sit_1, p1);
printf("2-Necessidade de limpeza e um pretin \t\t\t\t%d \t\t%.2f%%\n", contador_sit_2, p2);
printf("3-Necessita de troca do cabo ou conector \t\t\t%d \t\t%.2f%%\n",contador_sit_3, p3);
printf("4-O Bixin morreu ja(Inutilizavel) \t\t\t\t\t%d \t\t%.2f%%\n",contador_sit_4, p4);
printf("total de mouse sao: %d",contador_total);
}
