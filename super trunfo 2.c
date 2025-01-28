#include <stdio.h>

    int main() {
         char pais[50];
    char estado[50];
    char codigocarta[50];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
   
    printf("País: \n");
    scanf( "%s", &pais);

    printf("estado: \n");
    scanf( "%s", &estado);

    printf("codigo da carta: \n");
    scanf( "%s", &codigocarta);

    printf("Cidade 01: \n");
    scanf( "%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", area);

    printf("PIB: \n" );
    scanf("%f", pib);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", pontosturisticos);    
    
    printf("Cidade 02: \n");
    scanf("%s", &cidade);

    printf("Cidade 03: \n");
    scanf("%s", &cidade);

    printf("Cidade 04: \n");
    scanf("%s", &cidade);

    printf("carta 01:\n", cidade)
    
    }