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

    char estado[10] = "Amazonas";
    char codigo[10] = "A01";
    char cidade[10] = "Manaus";
    int populacao = 2000000;
    float area = 11401;
    float PIB = 10328;
    int numerodepontosturisticos = 80;

    char estado[10] = 'Pará';
    char codigo[10] = "B02";
    char cidade[10] = "Belém";
    int populacao = 1300000;
    float area = 1059;
    float PIB = 33;
    int numerodepontosturisticos = 50;

    printf("Olá, bem vindo ao jogo super trunfo \n");

    printf("Carta 1:\n");
    printf("Estado: %d\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos);






}
