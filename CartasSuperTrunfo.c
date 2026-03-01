#include <stdio.h>

/*
 * Programa simples para cadastrar e exibir duas cartas.
 * N�o utiliza estruturas de repeti��o ou decis�o, apenas
 * uma sequ�ncia de instru��es de leitura e escrita.
 */

/* Define uma estrutura para armazenar os atributos de uma carta */
typedef struct {
    char nome[100];   /* nome da carta */
    int ataque;       /* valor de ataque */
    int defesa;       /* valor de defesa */
} Carta;

int main(void)
{
    /* vari�veis que representam as duas cartas do usu�rio */
    Carta carta1;
    Carta carta2;

    /* leitura da primeira carta */
    printf("Cadastro da primeira carta:\n");
    printf("Nome: ");
    /* l� uma linha inteira at� o pr�ximo newline (n�o armazenando-o) */
    scanf(" %99[^\\n]", carta1.nome);
    printf("Ataque: ");
    scanf("%d", &carta1.ataque);
    printf("Defesa: ");
    scanf("%d", &carta1.defesa);
    /* consome o caractere newline que permaneceu ap�s os inteiros */
    getchar();

    /* leitura da segunda carta */
    printf("\nCadastro da segunda carta:\n");
    printf("Nome: ");
    scanf(" %99[^\\n]", carta2.nome);
    printf("Ataque: ");
    scanf("%d", &carta2.ataque);
    printf("Defesa: ");
    scanf("%d", &carta2.defesa);

    /* exibicao das cartas cadastradas */
    printf("\nCartas cadastradas:\n");

    printf("Carta 1\n");
    printf("Nome : %s\n", carta1.nome);
    printf("Ataque: %d\n", carta1.ataque);
    printf("Defesa: %d\n", carta1.defesa);

    printf("\nCarta 2\n");
    printf("Nome : %s\n", carta2.nome);
    printf("Ataque: %d\n", carta2.ataque);
    printf("Defesa: %d\n", carta2.defesa);

    return 0;
}
