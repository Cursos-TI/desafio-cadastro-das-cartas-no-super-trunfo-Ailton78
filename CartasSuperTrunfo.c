#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char codigo[4];
    char nome[20];
    int populacao;
    double areaKmQuadrado;
    double pib;
    int pontosTuristicos;
  
    printf("**** Desafio Super Trunfo ****\n");
    
  //recebe os dados inserido pelo usuario
    printf("Entre com os dados de cadastro de carta.\n");
    printf("Codigo: ");
    gets(codigo);
    printf("Nome: ");
    gets(nome);
    printf("Populaçao: ");
    scanf("%d", &populacao);
    printf("Aréa em Km quadrado: ");
    scanf("%f", &areaKmQuadrado);
    printf("Pib: ");
    scanf("%f", &pib);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibe os dados da carta
    printf("\n\n--------- CARTA --------------\n");
    printf("Código: %s Nome: %s \n", codigo, nome);
    printf("População: %d\n", populacao);
    printf("Aréa: %.2f\n", areaKmQuadrado);
    printf("Pib: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos);


    
   


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
