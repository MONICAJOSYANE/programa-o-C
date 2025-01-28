#include <stdio.h>

int main(){

int numero1= 1, resultado;

//numero1 acrescido de 1
//numero1 += 1
printf("antes incremento: %d \n", numero1);
numero1 ++;
printf("apos incremento: %d \n", numero1);
//pos-incremento: 
//resultado=numero1
//numero++;
resultado = numero1++;
printf("apos pos incremento - numero1 : %d - resultado: %d\n", numero1,resultado);

resultado = ++numero1;
printf("apos pre incremento - numero1 : %d - resultado: %d\n", numero1,resultado);
//numero 1 reduzido de 1
//numero1 -= 1
numero1 --;
printf("apos decremento: %d \n", numero1);

resultado= numero1--;
printf("apos pos decremento - numero1 : %d - resultado: %d\n", numero1,resultado);

resultado= --numero1;
printf("apos pre decremento - numero1 : %d - resultado: %d\n", numero1,resultado);

}




