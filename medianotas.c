#include<stdio.h>

int main() {

   int nota1, nota2, nota3;
   float media;

   printf("***Programa calculo de media***\n");

   printf("digite sua primeira nota:\n");
   scanf("%d", &nota1);

   printf("digite sua segunda nota:\n");
   scanf("%d", &nota2);

   printf("digite sua terceira nota:\n");
   scanf("%d", &nota3);

   media= (float)(nota1 +nota2 +nota3)/ 3;

   printf("a media final é:%.2f", media);


   
    
    
    



    return 0;

}