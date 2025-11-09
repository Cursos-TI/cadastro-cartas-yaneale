#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[30], estado2[30];
  char codigo1[10], codigo2[10];
  char cidade1[30], cidade2[30];
  unsigned long int populacao1, populacao2;
  int  pontos1, pontos2;
  float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;

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
  scanf("%lu", &populacao1);
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
  scanf("%lu", &populacao2);
  printf("Digite a Area: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  //Calcular a densidade da população
  densidade1 = (float) populacao1 / area1;
  densidade2 = (float) populacao2 / area2;

  //Calcular o PIB per capita
  percapita1 = (float) pib1 / populacao1;
  percapita2 = (float) pib2 / populacao2;

  // Área para exibição dos dados da cidade
  printf("\n === Cartas Cadastradas ===\n");

  printf("\n Carta 1:\n");
  printf("Estado: %s \n", estado1);
  printf("Codigo: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("População: %lu \n", populacao1);
  printf("Area: %.2f \n", area1);
  printf("PIB: %.2f \n", pib1);
  printf("Numero de Pontos Turisticos: %d \n", pontos1);
  printf("Densidade Populacional: %.2f hab/km2 \n", densidade1);
  printf("PIB per Capita: %.2f reais \n", percapita1);

  printf("\n Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("População: %lu \n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d \n", pontos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", percapita2);

  //Calculo do Super Poder
  printf("\n === Cálculo do Super Poder ===\n");
  float superPoder1 = (float) populacao1 + area1 + pib1 + pontos1 + percapita1 + (1.0 / densidade1);
  float superPoder2 = (float) populacao2 + area2 + pib2 + pontos2 + percapita2 + (1.0 / densidade2);
  printf("Super Poder da Carta 1: %.2f \n", superPoder1);
  printf("Super Poder da Carta 2: %.2f \n", superPoder2);

  //COMPARAÇÃO DOS SUPER PODERES
  printf("\n === Comparação dos Super Poderes ===\n");

  printf("População: %d\n", populacao1 > populacao2);
  printf("Area: %.d\n", area1 > area2);
  printf("PIB: %.d\n", pib1 > pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos1 > pontos2);
  printf("Densidade Populacional: %.d\n", densidade1 < densidade2);
  printf("PIB per Capita: %.d\n", percapita1 > percapita2);
  printf("Super Poder: %.d\n", superPoder1 > superPoder2);

return 0;

} 
