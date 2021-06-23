#include <stdio.h>
/*secao 3 exercicio 3 :)
    contar numeros impares de 100 ate 200
*/
int main(){
    for(int i = 100; i <= 200; i++){
        if(i % 2 != 0){
            printf("%d\n");
        }
    }
}