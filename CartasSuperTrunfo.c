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


    char estado[30];
    char codigo[3];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int numerodepontosturisticos;
    float densidadepopulacional;
    float pibpercapita;

    printf("\nOlá, bem vindo ao jogo super trunfo!!! \n");

    printf("\nPara a Carta 1, digite um nome de um estado: ");
    scanf("%s", estado);

    printf("\nAgora, digite um código para este estado, em formato de letra e numero, por exemplo: A01, B02, ...: ");
    scanf("%s", codigo);

    printf("\nLegal, agora digite um nome de uma cidade desse estado: ");
    scanf("%s", cidade);

    printf("\nJóia, agora digite a quantidade populacional dessa cidade: ");
    scanf("%d", &populacao);

    printf("\nEstamos quase lá, agora digite a área dessa cidade em Km2: ");
    scanf("%f", &area);

    printf("\nFalta pouco, agora digite o PIB dessa cidade em milhões de reais: ");
    scanf("%f", &PIB);

    printf("\nPor último, digite o número de pontos turísticos dessa cidade: ");
    scanf("%d", &numerodepontosturisticos);

    densidadepopulacional = populacao / area;

    pibpercapita = PIB / populacao;

    printf("\nAs informações da primeira carta são: \n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísitcos: %d\n", numerodepontosturisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pibpercapita);

    while (getchar() != '\n');

    printf("\nPara a Carta 2, digite um nome de um estado: ");
    scanf("%s", estado);

    printf("\nAgora, digite um código para este estado, em formato de letra e numero, por exemplo: A01, B02, ...: ");
    scanf("%s", codigo);

    printf("\nLegal, agora digite um nome de uma cidade desse estado: ");
    scanf("%s", cidade);

    printf("\nJóia, agora digite a quantidade populacional dessa cidade: ");
    scanf("%d", &populacao);

    printf("\nEstamos quase lá, agora digite a área dessa cidade em Km2: ");
    scanf("%f", &area);

    printf("\nFalta pouco, agora digite o PIB dessa cidade em milhões de reais: ");
    scanf("%f", &PIB);

    printf("\nPor último, digite o número de pontos turísticos dessa cidade: ");
    scanf("%d", &numerodepontosturisticos);

    densidadepopulacional = populacao / area;

    pibpercapita = PIB / populacao;

    printf("\nAs informações da segunda carta são:\n");

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísitcos: %d\n", numerodepontosturisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pibpercapita);



    return 0;

}
