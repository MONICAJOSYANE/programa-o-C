#include<stdio.h>

int main(){

float x= 5.5;
float y= 2.2;
float soma= x+y;
float diferenca= y-x;
float produto= x*y;
float quociente= x/y;
int a=10;
float b=3.5;
int c=3;
float quociente2 = (float) a/c; // a é explicitamente convertido para float - casting
float resultado = a+b; // a é convertido implicitamente para float



printf("Soma:%.2f\n", soma); 
printf("diferença: %.2f\n", diferenca);
printf ("produto: %.2f\n", produto);
printf("quociente: %.2f\n", quociente);
printf("resultado: %.2f\n", resultado);
printf("quociente 2: %.2f\n", quociente2);



}