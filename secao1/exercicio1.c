#include <stdio.h>
/*
 std = standard
 io = input/output
 int = inteiro
 exercicio: algoritimo para somar dois numeros e multiplicar
 o resultado pelo primeiro numero
*/

int main(){
	//declarando variaveis
	int num1, num2, soma, multiplicacao;

	//Recebendo os valores das vairaveis"nuemros"
	printf("Informe o primeiro numero: ");
	scanf("%d" , &num1);

	printf("Informe o segundo numero: ");
	scanf("%d" , &num2);

	//Processamentos
	soma = num1 + num2;
	multiplicacao = soma * num1;

	//Saida
	printf("O resultado da multiplicacao e %d", multiplicacao);


}
