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

    // Variáveis
    char estado, codigocarta, nomecidade[40];
    int populacao, numptosturisticos;
    float areakm, PIB;

    populacao = 1;
    numptosturisticos = 1;
    areakm = 1;
    PIB = 1;

    // Entrada de dados
    printf("Digite o estado: \n");
    scanf ("%s", &estado);
    printf("Digite o código da carta: \n");
    scanf ("%3s", &codigocarta);
    printf("Digite o nome da cidade: \n");
    scanf ("%s", &nomecidade);
    printf("Digite a população: \n");
    scanf ("%d", &populacao);
    printf("Digite a Área em Km2: \n");
    scanf ("%f", &areakm);
    printf("Digite o PIB: \n");
    scanf ("%f", &PIB);
    printf("Digite o número de pontos turísticos: \n");
    scanf ("%d", &numptosturisticos);

    // Exibição dos dados cadastrados
    printf("\n--- Dados Cadastrados ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área em Km2: %.2f\n", areakm);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", numptosturisticos);


    return 0;
}
