#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;

    char estado[20];
    char codigo[3];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int numerodepontosturisticos;

    printf("Olá, bem vindo ao jogo super trunfo!!! \n");

    printf("\nDigite um nome de um estado: ");
    scanf("%s", &estado);

    printf("\nDigite um codigo para este estado, em formato letra e numero, ex: A01, B02: ");
    scanf("%s", &codigo);

    printf("\nDigite um nome de uma cidade desse estado: ");
    scanf("%s", &cidade);

    printf("\nDigite a quantidade populacional dessa cidade: ");
    scanf("%d", &populacao);

    printf("\nDigite a área dessa cidade: ");
    scanf("%f", &area);

    printf("\nDigite o PIB dessa cidade: ");
    scanf("%f", &PIB);

    printf("\nDigite o número de pontos turísticos dessa cidade: ");
    scanf("%d", &numerodepontosturisticos);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísitcos: %d\n", numerodepontosturisticos);

    printf("\nDigite um nome de um estado: ");
    scanf("%s", &estado);

    printf("\nDigite um codigo para este estado, em formato letra e numero, ex: A01, B02: ");
    scanf("%s", &codigo);

    printf("\nDigite um nome de uma cidade desse estado: ");
    scanf("%s", &cidade);

    printf("\nDigite a quantidade populacional dessa cidade: ");
    scanf("%d", &populacao);

    printf("\nDigite a área dessa cidade: ");
    scanf("%f", &area);

    printf("\nDigite o PIB dessa cidade: ");
    scanf("%f", &PIB);

    printf("\nDigite o número de pontos turísticos dessa cidade: ");
    scanf("%d", &numerodepontosturisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísitcos: %d\n", numerodepontosturisticos);



    return 0;

}
