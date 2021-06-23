 #include <stdio.h>
 /* secao 6 exercicio 7 
 Desenvolva um algoritimo que:
 a - leia 4 numeros 
 b - calcule o quadrado de cada um
 c - se o valor resultante do quadrado do terceiro for >=1000, imprima 
 e finalize
 d - caso contrario, imprima os valores lidos e seus respectivos quadrados.
 */
int main(){
    //declarando as variaveis 
    int n1, n2, n3, n4, q1 ,q2 ,q3 ,q4;

    //recebendo os valores
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    gets(stdin);
    printf("Digite segundo numero: ");
    scanf("%d", &n2);
    gets(stdin);
    printf("Digite o Terceiro numero: ");
    scanf("%d", &n3);
    gets(stdin);
    printf("Digite o Quarto numero: ");
    scanf("%d", &n4);

    //processamento 

    q1 = (n1 * n1);
    q2 = (n2 * n2);
    q3 = (n3 * n3);
    q4 = (n4 * n4);

    if(q3 >= 1000){
        printf("A Raiz do Terceiro Numero: %d, E maior do que 1000: %d \n", n3 ,q3);
    }else{
        printf("Numero 1: %d, Quadrado: %d \n", n1, q1);
        printf("Numero 2: %d, Quadrado: %d \n", n2, q2);
        printf("Numero 3: %d, Quadrado: %d \n", n3, q3);
        printf("Numero 4: %d, Quadrado: %d \n", n4, q4);
    }
}