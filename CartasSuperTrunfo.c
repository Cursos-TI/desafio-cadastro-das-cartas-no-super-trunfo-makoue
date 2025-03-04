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


    char estado1[30];
    char codigo1[3];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int numerodepontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;
    float inversodensidadepopulacional1;

    char estado2[30];
    char codigo2[3];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int numerodepontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;
    float inversodensidadepopulacional2;

    printf("\nOlá, bem vindo ao jogo super trunfo!!! \n");

    printf("\nPara a Carta 1, digite um nome de um estado: ");
    scanf("%s", estado1);

    printf("\nAgora, digite um código para este estado, em formato de letra e numero, por exemplo: A01, B02, ...: ");
    scanf("%s", codigo1);

    printf("\nLegal, agora digite um nome de uma cidade desse estado: ");
    scanf("%s", cidade1);

    printf("\nJóia, agora digite a quantidade populacional dessa cidade: ");
    scanf("%d", &populacao1);

    printf("\nEstamos quase lá, agora digite a área dessa cidade em Km2: ");
    scanf("%f", &area1);

    printf("\nFalta pouco, agora digite o PIB dessa cidade em bilhões de reais: ");
    scanf("%f", &PIB1);

    printf("\nPor último, digite o número de pontos turísticos dessa cidade: ");
    scanf("%d", &numerodepontosturisticos1);

    densidadepopulacional1 = (float)populacao1 / area1;

    inversodensidadepopulacional1 = area1 / (float)populacao1;

    pibpercapita1 = PIB1 / (float)populacao1;

    superpoder1 = populacao1 + area1 + PIB1 + numerodepontosturisticos1 + pibpercapita1 + inversodensidadepopulacional1;

    printf("\nAs informações da primeira carta são: \n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísitcos: %d\n", numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nPara a Carta 2, digite um nome de um estado: ");
    scanf("%s", estado2);

    printf("\nAgora, digite um código para este estado, em formato de letra e numero, por exemplo: A01, B02, ...: ");
    scanf("%s", codigo2);

    printf("\nLegal, agora digite um nome de uma cidade desse estado: ");
    scanf("%s", cidade2);

    printf("\nJóia, agora digite a quantidade populacional dessa cidade: ");
    scanf("%d", &populacao2);

    printf("\nEstamos quase lá, agora digite a área dessa cidade em Km2: ");
    scanf("%f", &area2);

    printf("\nFalta pouco, agora digite o PIB dessa cidade em bilhões de reais: ");
    scanf("%f", &PIB2);

    printf("\nPor último, digite o número de pontos turísticos dessa cidade: ");
    scanf("%d", &numerodepontosturisticos2);

    densidadepopulacional2 = (float)populacao2 / area2;

    inversodensidadepopulacional2 = area2 / (float)populacao2;

    pibpercapita2 = PIB2 / (float)populacao2;

    superpoder2 = populacao2 + area2 + PIB2 + numerodepontosturisticos2 + pibpercapita2 + inversodensidadepopulacional1;

    printf("\nAs informações da segunda carta são:\n");

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísitcos: %d\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\nVamos verificar qual carta venceu\n");
    
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu: %d\n", (populacao1) > (populacao2));
    printf("Área: Carta 1 venceu: %d\n", (area1) > (area2));
    printf("PIB: Carta 1 venceu: %d\n", (PIB1) > (PIB2));
    printf("Pontos Turísticos: Carta 1 venceu: %d\n", (numerodepontosturisticos1) > (numerodepontosturisticos2));
    printf("Densidade Populacional: Carta 1 venceu: %d\n", (densidadepopulacional1) < (densidadepopulacional2));
    printf("PIB per capita: Carta 1 venceu: %d\n", (pibpercapita1) > (pibpercapita2));
    printf("Super Poder: Carta 1 venceu: %d\n", (superpoder1) > (superpoder2));


    return 0;

}
