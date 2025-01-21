#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Luiz

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigo_carta[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado: ");
    scanf("%c", &estado);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo_carta);
    
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area em KM2: ");
    scanf("%f", &area);

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n===== Dados da Carta Cadastrada =====\n");
    printf("Codigo da carta: %s\n",codigo_carta);
    printf("Nome da cidade: %s\n",cidade);
    printf("Populacao da cidade: %d\n", populacao);
    printf("Area por KM2: %.2f\n", area);
    printf("PIB da populacao: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos);

    return 0;
}
