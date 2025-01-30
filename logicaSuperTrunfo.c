#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar informações das cidades

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void comparar_cidades(Cidade cidade1, Cidade cidade2, int opcao1, int opcao2) {
    float valor1_cidade1 = 0, valor1_cidade2 = 0;
    float valor2_cidade1 = 0, valor2_cidade2 = 0;

    switch (opcao1) {
        case 1: valor1_cidade1 = cidade1.populacao; valor1_cidade2 = cidade2.populacao; break;
        case 2: valor1_cidade1 = cidade1.area; valor1_cidade2 = cidade2.area; break;
        case 3: valor1_cidade1 = cidade1.pib; valor1_cidade2 = cidade2.pib; break;
        case 4: valor1_cidade1 = cidade1.pontos_turisticos; valor1_cidade2 = cidade2.pontos_turisticos; break;
        default: printf("Opção inválida para o primeiro atributo.\n"); return;
    }
    
    switch (opcao2) {
        case 1: valor2_cidade1 = cidade1.populacao; valor2_cidade2 = cidade2.populacao; break;
        case 2: valor2_cidade1 = cidade1.area; valor2_cidade2 = cidade2.area; break;
        case 3: valor2_cidade1 = cidade1.pib; valor2_cidade2 = cidade2.pib; break;
        case 4: valor2_cidade1 = cidade1.pontos_turisticos; valor2_cidade2 = cidade2.pontos_turisticos; break;
        default: printf("Opção inválida para o segundo atributo.\n"); return;
    }

    float soma_cidade1 = valor1_cidade1 + valor2_cidade1;
    float soma_cidade2 = valor1_cidade2 + valor2_cidade2;

    printf("\nResultado da comparação:\n");
    printf("%s: %.2f\n", cidade1.nome, soma_cidade1);
    printf("%s: %.2f\n", cidade2.nome, soma_cidade2);

    printf("\nVencedor: %s\n", (soma_cidade1 > soma_cidade2) ? cidade1.nome : (soma_cidade1 < soma_cidade2) ? cidade2.nome : "Empate");
}

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
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade1.pontos_turisticos);

    printf("\nCadastro da cidade 2:\n");
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2.nome);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a area da cidade (em km^2): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &cidade2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade2.pontos_turisticos);

        // Menu interativo para escolha da opcão:

    int opcao1, opcao2;
    do {
        printf("\nEscolha dois atributos para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - Sair\n");
        printf("Digite a primeira opção: ");
        scanf("%d", &opcao1);
        if (opcao1 == 5) break;

        printf("Digite a segunda opção: ");
        scanf("%d", &opcao2);
        if (opcao2 == 5) break;
    // Exibição dos Resultados:
        if (opcao1 >= 1 && opcao1 <= 4 && opcao2 >= 1 && opcao2 <= 4)
            comparar_cidades(cidade1, cidade2, opcao1, opcao2);
        else
            printf("Opções inválidas!\n");
    } while (opcao1 != 5 && opcao2 != 5);
    
    printf("\nEncerrando o programa.\n");
    return 0;
}
