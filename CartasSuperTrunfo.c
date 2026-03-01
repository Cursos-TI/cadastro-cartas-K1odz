#include <stdio.h>

/*
 * Programa aprimorado para cadastrar e exibir duas cartas urbanas.
 * Le dados de cada cidade e calcula densidade populacional e PIB per capita.
 * Nao utiliza estruturas de repeticao ou decisao, apenas uma sequencia
 * de instrucoes de leitura, calculo e escrita.
 */

/* Estrutura para armazenar informacoes de uma carta/cidade */
typedef struct {
    char estado[3];           /* sigla do estado (2 letras) */
    char codigo[5];           /* codigo da carta (ex: A01) */
    char nomeCidade[100];     /* nome da cidade */
    long long populacao;      /* populacao em numero inteiro */
    float area;               /* area em km2 */
    float pib;                /* PIB em bilhoes de reais */
    int pontosTuristicos;     /* numero de pontos turisticos */
} Carta;

int main(void)
{
    Carta carta1;
    Carta carta2;

    /* leitura da primeira carta */
    printf("Cadastro da primeira carta:\n");
    printf("Estado: ");
    scanf(" %2[^\n]", carta1.estado);
    printf("Codigo: ");
    scanf(" %4[^\n]", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", carta1.nomeCidade);
    printf("Populacao: ");
    scanf("%lld", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    /* consome o newline antes de nova leitura se houver */
    getchar();

    /* leitura da segunda carta */
    printf("\nCadastro da segunda carta:\n");
    printf("Estado: ");
    scanf(" %2[^\n]", carta2.estado);
    printf("Codigo: ");
    scanf(" %4[^\n]", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%lld", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    /* calculos adicionais */
    float dens1 = (float)carta1.populacao / carta1.area;
    float pibpc1 = (carta1.pib * 1e9f) / (float)carta1.populacao;

    float dens2 = (float)carta2.populacao / carta2.area;
    float pibpc2 = (carta2.pib * 1e9f) / (float)carta2.populacao;

    /* exibicao das informacoes com resultados formatados */
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %lld\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", dens1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %lld\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", dens2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    return 0;
}
