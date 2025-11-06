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
  float area, pib, densidade, pibpc;
  
  // Área para perguntas ao usuário sobre as informações da cidade e armazenamento das informações

  
    // Área para a Carta 1


  printf ("Carta 1\n");

  printf ("Digite o Estado: ");
  gets (estado);
  fflush (stdin);  
    
  printf ("Digite Código da Carta: ");
  gets (codigo);
  fflush (stdin);  

  printf ("Digite o nome da Cidade: ");
  gets (nome);
  fflush (stdin);  

  printf ("Digite a população: ");
  scanf ("%d", &populacao);
  
  printf ("Digite a área em Km2: ");
  scanf ("%f", &area);

  printf ("Digite o PIB: ");
  scanf ("%f", &pib);
  
  printf ("Digite o o número de pontos turísticos: ");
  scanf ("%d", &pontosTuristicos);

 

  // Área para exibição dos dados da cidade



  printf ("Carta 1 \n");

  printf ("Estado: "); puts (estado);
  printf ("Código: "); puts (codigo);
  printf ("Nome da cidade: "); puts (nome);
  printf ("Populacão: %d\n", populacao);
  printf ("Área: %.2f ", area);
  printf ("Km2\n");
  printf ("PIB: %.2f ", pib);
  printf ("bilhões de reais\n");
  printf ("Número de pontos turísticos: %d \n", pontosTuristicos);

  densidade = populacao/area;
	
	printf ("A densidade populacional do estado é: %.2f ", densidade);
	printf ("hab/Km2\n");
	
	pibpc = pib/populacao;
	printf ("O PIB per capita é de: %.2f ", pibpc);
	printf ("R$/habitante\n");
	
  
  



    // Área para a Carta 2

        // Carta 2

  printf ("Carta 2\n");
   

  printf ("Digite o Estado: ");
  gets (estado);
  fflush (stdin);  
    
  printf ("Digite Código da Carta: ");
  gets (codigo);
  fflush (stdin);  

  printf ("Digite o nome da Cidade: ");
  gets (nome);
  fflush (stdin);  

  printf ("Digite a população: ");
  scanf ("%d", &populacao);
  

  printf ("Digite a área em Km2: ");
  scanf ("%f", &area);


  printf ("Digite o PIB: ");
  scanf ("%f", &pib);
  

  printf ("Digite o o número de pontos turísticos: ");
  scanf ("%d", &pontosTuristicos);


  
  printf ("Carta 2 \n");

  printf ("Estado: "); puts (estado);
  printf ("Código: "); puts (codigo);
  printf ("Nome da cidade: "); puts (nome);
 
  printf ("Populacão: %d\n", populacao);
  printf ("Área: %.2f ", area);
  printf ("Km2\n");
  printf ("PIB: %.2f ", pib);
  printf ("bilhões de reais\n");
  printf ("Número de pontos turísticos: %d \n", pontosTuristicos);

  densidade = populacao/area;
	
	printf ("A densidade populacional do estado é: %.2f ", densidade);
	printf ("hab/Km2\n");
	
	pibpc = pib/populacao;
	printf ("O PIB per capita é de: %.2f ", pibpc);
	printf ("R$/habitante\n");
	
  
  

  


  

 
return 0;
} 
