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
    unsigned long int populacao;      /* populacao em numero inteiro (unsigned long int) */
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
    scanf("%lu", &carta1.populacao);
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
    scanf("%lu", &carta2.populacao);
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
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", dens1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", dens2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    /* Cálculo do Super Poder: soma de atributos numéricos com conversões apropriadas */
    float super1 = (float)carta1.populacao + carta1.area + (carta1.pib * 1e9f) + (float)carta1.pontosTuristicos + pibpc1 + (1.0f / dens1);
    float super2 = (float)carta2.populacao + carta2.area + (carta2.pib * 1e9f) + (float)carta2.pontosTuristicos + pibpc2 + (1.0f / dens2);

    /* Comparações: 1 significa Carta 1 venceu, 0 significa Carta 2 venceu */
    int popWin = (carta1.populacao > carta2.populacao) ? 1 : 0;
    int areaWin = (carta1.area > carta2.area) ? 1 : 0;
    int pibWin = (carta1.pib > carta2.pib) ? 1 : 0;
    int pontosWin = (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 0;
    int densWin = (dens1 < dens2) ? 1 : 0; /* menor densidade vence */
    int pibpcWin = (pibpc1 > pibpc2) ? 1 : 0;
    int superWin = (super1 > super2) ? 1 : 0;

    /* Exibição das comparações conforme solicitado */
    printf("\nComparacao de Cartas:\n\n");
    printf("Populacao: Carta %d venceu (%d)\n", popWin ? 1 : 2, popWin);
    printf("Area: Carta %d venceu (%d)\n", areaWin ? 1 : 2, areaWin);
    printf("PIB: Carta %d venceu (%d)\n", pibWin ? 1 : 2, pibWin);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", pontosWin ? 1 : 2, pontosWin);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densWin ? 1 : 2, densWin);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpcWin ? 1 : 2, pibpcWin);
    printf("Super Poder: Carta %d venceu (%d)\n", superWin ? 1 : 2, superWin);

    return 0;
}
