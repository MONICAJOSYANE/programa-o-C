#include <stdio.h>

int main() {

int numero1, numero2;
int soma,subtracao, multiplicacao, divisao;

printf("digite o numero 1: \n");
scanf("%d", &numero1);

printf("digite o numero 2: \n");
scanf("%d", &numero2);

soma = numero1+ numero2;

subtracao = numero2 - numero1;

multiplicacao = numero1 * numero2;

divisao = numero2 % numero1;

printf("A soma é: %d\n", soma);

printf("A subtração é: %d\n", subtracao);

printf("A multiplicação é: %d\n", multiplicacao);

printf( "A divisão é: %d\n", divisao);


}

