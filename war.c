#include <stdio.h>
#include <string.h>

// Definição da struct Territorio para agrupar dados relacionados a um território.
typedef struct {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército responsável
    int tropas;      // Quantidade de tropas no território
} Territorio;

int main(void) {
    Territorio territorios[5];  // Vetor para armazenar 5 territórios
    int i;

    printf("Cadastro de 5 territorios\n");
    printf("---------------------------\n");

    // Laço para entrada dos dados dos 5 territórios.
    for (i = 0; i < 5; i++) {
        printf("\nTerritorio %d\n", i + 1);
        printf("Nome (sem espacos): ");
        scanf("%29s", territorios[i].nome);

        printf("Cor do exercito (sem espacos): ");
        scanf("%9s", territorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    printf("\nDados dos territorios cadastrados:\n");
    printf("---------------------------\n");

    // Laço para exibição dos dados de cada território.
    for (i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("  Nome: %s\n", territorios[i].nome);
        printf("  Cor do exército: %s\n", territorios[i].cor);
        printf("  Tropas: %d\n", territorios[i].tropas);
        printf("---------------------------\n");
    }

    return 0;
}
