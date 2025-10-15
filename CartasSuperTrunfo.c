#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[30], estado2[30];
  char codigo1[10], codigo2[10];
  char cidade1[30], cidade2[30];
  int populacao1, populacao2, pontos1, pontos2;
  float area1, area2, pib1, pib2;

  // Área para entrada de dados
  printf("=== Ben-vindo no Cadastro das Cartas Super Triunfo ===\n");

  //cadastro da primeira carta
  printf("Carta 1 \n");
  printf("Digite o Estado: ");
  scanf("%s", estado1);
  printf("Digite o Codigo: ");
  scanf("%s", codigo1);
  printf("Digite o Nome da Cidade: ");
  scanf("%s", cidade1);
  printf("Digite o Numero da População: ");
  scanf("%d", &populacao1);
  printf("Digite a Area: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  //Cadastro da segunda carta
  printf("\n Carta 2 \n");
  printf("Digite o Estado: ");
  scanf("%s", estado2);
  printf("Digite o Codigo: ");
  scanf("%s", codigo2);
  printf("Digite o Nome da Cidade: ");
  scanf("%s", cidade2);
  printf("Digite o Numero da População: ");
  scanf("%d", &populacao2);
  printf("Digite a Area: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
  printf("/n === Cartas Cadastradas ===\n");

  printf("\n Carta 1:\n");
  printf("Estado: %s \n", estado1);
  printf("Codigo: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("População: %d \n", populacao1);
  printf("Area: %.2f \n", area1);
  printf("PIB: %.2f \n", pib1);
  printf("Numero de Pontos Turisticos: %d \n", pontos1);

  printf("\n Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Area: %.2f \n", area2);
  printf("PIB: %.2f \n", pib2);
  printf("Numero de Pontos Turisticos: %d \n", pontos2);

return 0;
} 
