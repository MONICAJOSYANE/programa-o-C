#include<stdio.h>
int main(){

//oporeadores aritmeticos
int a=10, b=5;                                                                                                                                                                                                                                                                                                                                                                                                         
int soma= a+b;
int subtracao= a-b;
int multiplicacao= a*b;
int divisao= a/b;

//operadores de atribuicao

a+= 2; // a será 12
b*=3;  // b será 15
a-=5; // a será 5

//operadores de incremento e decremento
a++; // a será 13
b--; // b será 14

// exibição dos resultados
printf("A soma é: %d\n", soma);

printf("A subtracao é: %d\n", subtracao);

printf("A multiplicação é: %d\n", multiplicacao);

printf( "A divisão é: %d \n", divisao);

printf("Novo valor de a (após += 2 e ++): %d\n", a);

printf("Novo valor de b (após *= 3 e --): %d\n", b);


return 0;

}


