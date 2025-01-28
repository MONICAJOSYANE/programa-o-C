#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Mônica

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char país[50];
    char estado[50];
    char codigocarta[50];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("País: \n");
    scanf("%s", &país);

    printf("estado: \n");
    scanf("%s", &estado);

    printf("Primeira Cidade: \n");
    scanf("%s", &estado);

    printf("codigo da carta: \n");
    scanf("%s", &codigocarta);

    printf("Cidade 01: \n");
    scanf("%s", &cidade);
    
    printf("Cidade 02: \n");
    scanf("%s", &cidade);

    printf("Cidade 03: \n");
    scanf("%s", &cidade);

    printf("Cidade 04: \n");
    scanf("%s", &cidade);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
