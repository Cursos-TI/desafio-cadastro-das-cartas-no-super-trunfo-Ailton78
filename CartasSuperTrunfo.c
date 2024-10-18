#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char estado;
    char codigo[4];
    char nome[20];
    int populacao;
    float areaKmQuadrado;
    float pib;
    int pontosTuristicos;
  
    printf("**** Desafio Super Trunfo ****\n");

    // Recebe os dados inseridos pelo usuário
    printf("Entre com os dados de cadastro de carta.\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    getchar();   // Corrigido aqui
    printf("Codigo: ");
    gets(codigo);
    printf("Nome: ");
    gets(nome);
    printf("Populaçao: ");
    scanf("%d", &populacao);
    printf("Aréa em km²: ");
    scanf("%f", &areaKmQuadrado);
    printf("Pib: ");
    scanf("%f", &pib);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibe os dados da carta
    printf("\n\n--------- CARTA --------------\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome: %s \n",nome);
    printf("População: %d\n", populacao);
    printf("Aréa: %.2f km²\n", areaKmQuadrado);
    printf("Pib: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos);
    return 0;



    return 0;
}
