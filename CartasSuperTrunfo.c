#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(int argc, char const *argv[]) {
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

  printf ("Digite o PIB: \n");
  scanf ("%f", &pib);

  printf ("Digite o o número de pontos turísticos: \n");
  scanf ("%d", &pontosTuristicos);



  printf ("Carta 1 \n");

  printf ("Estado: %s \n", estado);
  printf ("Código: %s \n", codigo);
  printf ("Nome da cidade: %s \n", nome);
  printf ("População: %d \n", populacao);
  printf ("Área: %.2f ", area);
  printf ("Km2\n");
  printf ("PIB: %.2f ", pib);
  printf ("bilhões de reais\n");
  printf ("Número de pontos turísticos: %d \n", pontosTuristicos);

 













  // Área para entrada de dados
  

  // Área para exibição dos dados da cidade

return 0;
} 
