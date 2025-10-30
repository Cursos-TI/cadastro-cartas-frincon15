#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Descrição do desafio 
  printf ("Desafio Super Trunfo - Países\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado [50];
  char codigo [50];
  char nome [50];
  int populacao, pontosTuristicos;
  float area, pib;
  
  // Área para perguntas ao usuário sobre as informações da cidade e armazenamento das informações
  // Área para os dados da Carta 1

  printf ("Carta 1\n");
  printf ("Digite o Estado: \n");
  scanf ("%s", &estado);

  printf ("Digite Código da Carta: \n");
  scanf ("%s", &codigo);

  printf ("Digite o nome da Cidade: \n");
  scanf ("%s", &nome);

  printf ("Digite a população: \n");
  scanf ("%d", &populacao);

  printf ("Digite a área em Km2: \n");
  scanf ("%f", &area);

  printf ("Carta 1 \n");

  printf ("O Estado é: %s \n", estado);













  // Área para entrada de dados
  

  // Área para exibição dos dados da cidade

return 0;
} 
