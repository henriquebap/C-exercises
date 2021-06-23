#include <stdio.h>
#include <string.h>
/* exercicio 5 
faca um programa que leia um nome de usuario e a sua senha
e nao aceite a senha igual o nome do usuario, mostrando uma 
mensagem de erro e voltando a pedir informacoes.
*/

int main(){
    //declarando variaveis
    char usuario[100], senha[100];

    //recebendos os valores
    printf("Digite seu Usuario: ");
    gets(usuario);
    printf("Digite sua senha: ");
    gets(senha);

    //processamento
    while(!strcmp(senha, usuario)){
        printf("O Usuario e a Senha devem ser diferentes.\n");
        printf("Digite seu Usuario: ");
        gets(usuario);
        printf("Digite sua senha: ");
        gets(senha);
    }
    printf("Registro realizado com sucesso");
}