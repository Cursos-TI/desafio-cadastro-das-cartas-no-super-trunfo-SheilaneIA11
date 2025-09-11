#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Nível Aventureiro - Calculando Densidade Populacional e PIB per Capita


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Definição das variáveis para armazenar as propriedades das cidades.
    char estado1;
    char codigocarta1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Novas variáveis para os calculos 
    float densidade1;
    float pib_per_capita1;

    //Variáveis para a Carta 2
    char estado2;
    char codigocarta2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Novas variáveis para os calculos
    float densidade2;
    float pib_per_capita2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite seu Estado (UMA LETRA): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &pontosturisticos1);

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite seu Estado (UMA LETRA): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &pontosturisticos2);

    // Exibição dos dados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Número de habitantes: %d\n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1); // Usei %.2f para formatar com 2 casas decimais.
    printf("PIB da cidade: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Número de habitantes: %d\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}