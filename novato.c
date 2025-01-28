#include <stdio.h>

int main (){

    char opcao;
    int idade;
    float altura;

    //sintaxe scanf
    
    printf("Qual é a sua idade?\n");
    scanf("%d", &idade);
    printf("idade: %d\n", idade);
    printf("Qual é a sua altura?\n");
    scanf("%f", &altura);
    printf("Entre com a opcao\n");
    scanf(" %c", &opcao);
    printf("A opção é: %c", opcao);
    
}