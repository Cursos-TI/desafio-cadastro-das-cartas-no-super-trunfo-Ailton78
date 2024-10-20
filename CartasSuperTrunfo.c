#include <stdio.h>
#include <locale.h>
#include <string.h>



 
 struct Carta
 {  
    char estado;
    char codigo[4];
    char nome[20];
    unsigned int populacao;
    float areaKmQuadrado;
    float pib;
    unsigned int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    long double superPoder;
 };

// função que imprime os dados de uma carta.
void imprimeCarta(struct Carta carta) {
    printf("\n\n--------- CARTA --------------\n");
    printf("Estado: %c \n", carta.estado);
    printf("Código: %s \n", carta.codigo);
    printf("Nome: %s \n",carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Aréa: %.2f km²\n", carta.areaKmQuadrado);
    printf("Pib: %.2f\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta.pibPerCapita);
    printf("Super Poder: %.2f \n\n", carta.superPoder);
}

// função que cadastra carta
struct  Carta cadastrarCarta( int i)
{
    struct Carta carta;
        printf("Entre com os dados da %d cadastro de carta.\n", i + 1);

        printf("Estado: ");
        scanf(" %c", &carta.estado);
        getchar();   // Limpa o buffer

        printf("Codigo: ");
        gets(&carta.codigo);

        printf("Nome: ");
        gets(&carta.nome);

        printf("Populaçao: ");
        scanf("%d", &carta.populacao);

        printf("Aréa em km²: ");
        scanf("%f", &carta.areaKmQuadrado);

        printf("Pib: ");
        scanf("%f", &carta.pib);

        printf("Quantidade de pontos turisticos: ");
        scanf("%d", &carta.pontosTuristicos);

        carta.densidadePopulacional = (float) carta.populacao / carta.areaKmQuadrado;
        carta.pibPerCapita =carta.pib / (float) carta.populacao;

        carta.superPoder = (float) carta.populacao + carta.areaKmQuadrado + 
                            carta.pib + (float) carta.pontosTuristicos + 
                            carta.densidadePopulacional + carta.pibPerCapita; 

        printf("\n\n----- Carta cadastrada.! -------");
        return carta;
};

// função que comprar os valores entre cartas
void comparacao( struct Carta carta1, struct Carta carta2 )
{
    if(carta1.densidadePopulacional < carta2.densidadePopulacional){
        printf("Densidade Populacional: \n");
        printf("Cidade %s venceu.\n", carta1.nome);
    } else{
         printf("Densidade Populacional: \n");
        printf("Cidade %s venceu.\n", carta2.nome);
    }

    if(carta1.populacao > carta2.populacao){
        printf("Populaçao: \n");
        printf("Cidade %s venceu.\n", carta1.nome);
    } else{
        printf("Populaçao: \n");
        printf("Cidade %s venceu.\n", carta2.nome);
    }

    if(carta1.areaKmQuadrado > carta2.areaKmQuadrado){
        printf("Aréa em km²: \n");
        printf("Cidade %s venceu.\n", carta1.nome);
    } else{
        printf("Aréa em km²: \n");
        printf("Cidade %s venceu.\n", carta2.nome);
    }
    if(carta1.pib > carta2.pib){
        printf("Pib: \n");
        printf("Cidade %s venceu.\n", carta1.nome);
    } else{
        printf("Pib: \n");
        printf("Cidade %s venceu.\n", carta2.nome);
    }
    if(carta1.pontosTuristicos > carta2.pontosTuristicos){
        printf("Pontos Turisticos: \n");
        printf("Cidade %s venceu.\n", carta1.nome);
    } else{
        printf("Pontos Turisticos: \n");
        printf("Cidade %s venceu.\n", carta2.nome);
    }
    if(carta1.pibPerCapita > carta2.pibPerCapita){
        printf("Pib Per Capita: \n");
        printf("Cidade %s venceu.\n", carta1.nome);
    } else{
        printf("Pib Per Capita: \n");
        printf("Cidade %s venceu.\n", carta2.nome);
    }
    if(carta1.superPoder > carta2.superPoder){
        printf("Super Poder: \n");
        printf("Cidade %s venceu.\n", carta1.nome);
    } else{
        printf("Super Poder: \n");
        printf("Cidade %s venceu.\n", carta2.nome);
    }
    
};

 
    

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct Carta cartas[8]; // Array de structs do tipo Carta
    
    for (int i = 0; i < 2; i++) {
        cartas[i] = cadastrarCarta(i);
        imprimeCarta(cartas[i]); // imprime a carta logo após o cadastro
    }
    
    comparacao(cartas[0], cartas[1]); // executa a comparação entre cartas e imprime o resultado

  

    return 0;
}