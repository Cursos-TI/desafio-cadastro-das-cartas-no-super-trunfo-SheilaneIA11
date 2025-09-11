#include <stdio.h>

// Desafio Super Trunfo - Países.
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Desafio Aventureiro - Calculando Densidade Populacional e PIB per Capita.
// Desafio Mestre - Batalha de Cartas no Super Trunfo.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Definição das variáveis para armazenar as propriedades das cidades.
    char estado1;
    char codigocarta1[4];
    char nomecidade1[50];
    unsigned long int populacao1; // Tipo alterado para unsigned long int
    float area1;
    float pib1;
    int pontosturisticos1;

    // Novas variáveis para os calculos da carta 1
    float densidade1;
    float pib_per_capita1;
    float super_poder1; // Nova variável para o Super Poder da carta 1

    // Variáveis para a Carta 2
    char estado2;
    char codigocarta2[4];
    char nomecidade2[50];
    unsigned long int populacao2; //Tipo alterado para unsigned long int
    float area2;
    float pib2;
    int pontosturisticos2;

    // Novas variáveis para os calculos da carta 2
    float densidade2;
    float pib_per_capita2;
    float super_poder2; // Nova variável para o Super Poder da carta 2
    
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
    scanf(" %lu", &populacao1); // Use %lu para unsigned long int

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &pontosturisticos1);
 
    // Calculo da Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pib_per_capita1 + (1.0 / densidade1);

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite seu Estado (UMA LETRA): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf(" %lu", &populacao2); // Use %lu para unsigned long int

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &pontosturisticos2);

    // Calculo da Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibição dos dados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Número de habitantes: %lu\n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1); // Usei %.2f para formatar com 2 casas decimais.
    printf("PIB da cidade: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    // Exibindo os novos dados carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Número de habitantes: %lu\n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

     // Exibindo os novos dados carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    //Comparação das Cartas
   printf("\n--- Comparacao de Cartas (1 = Carta 1 venceu, 0 = Carta 2 venceu/Empatou) ---\n");

    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);   

    return 0;
}