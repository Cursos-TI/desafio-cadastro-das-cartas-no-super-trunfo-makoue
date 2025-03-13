#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao;

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

    densidadepopulacional1 = populacao1 / area1;

    pibpercapita1 = PIB1 / populacao1;

    superpoder1 = (populacao1 + area1 + PIB1 + numerodepontosturisticos1 + pibpercapita1) + (area1 / populacao1);

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

    densidadepopulacional2 = populacao2 / area2;

    pibpercapita2 = PIB2 / populacao2;

    superpoder2 = (populacao2 + area2 + PIB2 + numerodepontosturisticos2 + pibpercapita2) + (area2 / populacao2);

    printf("*** Vamos comparar os atributos das cartas ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opção (Atributo): \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nComparação de Cartas (Atributo: População):\n");
        printf("Carta1: %s: %d\n", estado1, populacao1);
        printf("Carta2: %s: %d\n", estado2, populacao2);
        if (populacao1 > populacao2){
        printf("Resultado: A carta 1 - %s Venceu!!!\n", estado1);
        } else if (populacao1 < populacao2){
        printf("Resultado: A carta 2 - %s Venceu!!!\n", estado2);
        } else{
        printf("Resultado: Empate!\n");
        }
        break;
    case 2:
        printf("\nComparação de Cartas (Atributo: Área):\n");
        printf("Carta1: %s: %.2f\n", estado1, area1);
        printf("Carta2: %s: %.2f\n", estado2, area2);
        if (area1 > area2){
            printf("Resultado: A carta 1 - %s Venceu!!!\n", estado1);
        } else if (area1 < area2){
            printf("Resultado: A carta 2 - %s Venceu!!!\n", estado2);
        } else{
            printf("Resultado: Empate!\n");
        }
        break;
    case 3:
        printf("\nComparação de Cartas (Atributo: PIB):\n");
        printf("Carta1: %s: %.2f\n", estado1, PIB1);
        printf("Carta2: %s: %.2f\n", estado2, PIB2);
        if (PIB1 > PIB2){
            printf("Resultado: A carta 1 - %s Venceu!!!\n", estado1);
        } else if (PIB1 < PIB2){
            printf("Resultado: A carta 2 - %s Venceu!!!\n", estado2);
        } else{
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("\nComparação de Cartas (Atributo: Número de Pontos Turísticos):\n");
        printf("Carta1: %s: %d\n", estado1, numerodepontosturisticos1);
        printf("Carta2: %s: %d\n", estado2, numerodepontosturisticos2);
        if (numerodepontosturisticos1 > numerodepontosturisticos2){
            printf("Resultado: A carta 1 - %s Venceu!!!\n", estado1);
        } else if (numerodepontosturisticos1 < numerodepontosturisticos2){
            printf("Resultado: A carta 2 - %s Venceu!!!\n", estado2);
        } else{
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n");
        printf("Carta1: %s: %.2f\n", estado1, densidadepopulacional1);
        printf("Carta2: %s: %.2f\n", estado2, densidadepopulacional2);
        if (densidadepopulacional1 < densidadepopulacional2){
            printf("Resultado: A carta 1 - %s Venceu!!!\n", estado1);
        } else if (densidadepopulacional1 > densidadepopulacional2){
            printf("Resultado: A carta 2 - %s Venceu!!!\n", estado2);
        } else{
            printf("Empate!\n");
        }
        break;
    case 6:
        printf("\nComparação de Cartas (Atributo: PIB per capita):\n");
        printf("Carta1: %s: %.2f\n", estado1, pibpercapita1);
        printf("Carta2: %s: %.2f\n", estado2, pibpercapita2);
        if (pibpercapita1 > pibpercapita2){
            printf("Resultado: A carta 1 - %s Venceu!!!\n", estado1);
        } else if (pibpercapita1 < pibpercapita2){
            printf("Resultado: A carta 2 - %s Venceu!!!\n", estado2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 7:
        printf("\nComparação de Cartas (Atributo: Super Poder):\n");
        printf("Carta1: %s: %f\n", estado1, superpoder1);
        printf("Carta2: %s: %f\n", estado2, superpoder2);
        if (superpoder1 > superpoder2){
            printf("Resultado: A carta 1 - %s Venceu!!!\n", estado1);
        } else if (superpoder1 < superpoder2) {
            printf("Resultado: A carta 2 - %s Venceu!!!\n", estado2);
        } else{
            printf("Empate!\n");
        }
        break;

    }



    return 0;

}
