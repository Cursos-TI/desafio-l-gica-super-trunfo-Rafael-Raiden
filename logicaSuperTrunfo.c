#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar informações das cidades
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
} 

Cidade;

int main() {
    Cidade cidade1, cidade2;

    // Cadastro das Cartas:
    printf("Cadastro da cidade 1:\n");
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade1.nome);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a area da cidade (em km^2): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &cidade1.pib);

    printf("\nCadastro da cidade 2:\n");
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2.nome);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a area da cidade (em km^2): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Comparação de Cartas:
    printf("\nComparação das cidades:\n");

    if (cidade1.populacao > cidade2.populacao) {
        printf("%s tem maior população que %s.\n", cidade1.nome, cidade2.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("%s tem maior população que %s.\n", cidade2.nome, cidade1.nome);
    } else {
        printf("Ambas as cidades têm a mesma população.\n");
    }

    if (cidade1.area > cidade2.area) {
        printf("%s tem maior área que %s.\n", cidade1.nome, cidade2.nome);
    } else if (cidade1.area < cidade2.area) {
        printf("%s tem maior área que %s.\n", cidade2.nome, cidade1.nome);
    } else {
        printf("Ambas as cidades têm a mesma área.\n");
    }

    if (cidade1.pib > cidade2.pib) {
        printf("%s tem maior PIB que %s.\n", cidade1.nome, cidade2.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("%s tem maior PIB que %s.\n", cidade2.nome, cidade1.nome);
    } else {
        printf("Ambas as cidades têm o mesmo PIB.\n");
    }

    // Exibição dos Resultados:
    printf("\nResumo final:\n");
    int pontosCidade1 = 0, pontosCidade2 = 0;

    if (cidade1.populacao > cidade2.populacao) pontosCidade1++;
    else if (cidade1.populacao < cidade2.populacao) pontosCidade2++;

    if (cidade1.area > cidade2.area) pontosCidade1++;
    else if (cidade1.area < cidade2.area) pontosCidade2++;

    if (cidade1.pib > cidade2.pib) pontosCidade1++;
    else if (cidade1.pib < cidade2.pib) pontosCidade2++;

    if (pontosCidade1 > pontosCidade2) {
        printf("A cidade vencedora é: %s\n", cidade1.nome);
    } else if (pontosCidade2 > pontosCidade1) {
        printf("A cidade vencedora é: %s\n", cidade2.nome);
    } else {
        printf("Empate entre as duas cidades!\n");
    }

    return 0;
}
