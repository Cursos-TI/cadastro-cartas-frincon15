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
  unsigned long int populacao, populacao1;
  int pontosTuristicos, pontosTuristicos1;
  float area, area1, pib, pib1, densidade, densidade1, pibpc, pibpc1, superPoderA, superPoderB;
  
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
  scanf ("%u", &populacao);
  
  printf ("Digite a área em Km2: ");
  scanf ("%f", &area);

  printf ("Digite o PIB: ");
  scanf ("%f", &pib);
  
  printf ("Digite o o número de pontos turísticos: ");
  scanf ("%d", &pontosTuristicos);

	
	

 
  printf ("Carta 1 \n");

  printf ("Estado: "); puts (estado);
  printf ("Código: "); puts (codigo);
  printf ("Nome da cidade: "); puts (nome);
  printf ("Populacão: %u\n", populacao);
  printf ("Área: %.2f ", area);
  printf ("Km2\n");
  printf ("PIB: %.2f ", pib);
  printf ("bilhões de reais\n");
  printf ("Número de pontos turísticos: %d \n", pontosTuristicos);
  
  	densidade = populacao/area;
	
	printf ("A densidade populacional da %s é: %.2f ", codigo, densidade);
	printf ("hab/Km2\n");
	
	pibpc = pib/populacao;
	printf ("O PIB per capita é de: %.2f ", pibpc);
	printf ("R$/habitante\n");
	
	superPoderA = populacao + area + pib + pontosTuristicos + 1/densidade + pibpc;
	printf ("O valor do Super Poder da %s é: %.2f\n\n\n", codigo, superPoderA);
	
	
	
	
	
	
  	
  
  



    // Área para a Carta 2

        // Carta 2
        
        
        char estado1 [50] = "Bom";
   		char codigo1 [50];
  		char nome1 [50];
  		

  printf ("Carta 2\n");
   

  printf ("Digite o Estado: ");
  gets (estado1);
  fflush (stdin);  
    
  printf ("Digite Código da Carta: ");
  gets (codigo1);
  fflush (stdin);  

  printf ("Digite o nome da Cidade: ");
  gets (nome1);
  fflush (stdin);  

  printf ("Digite a população: ");
  scanf ("%u", &populacao1);
  

  printf ("Digite a área em Km2: ");
  scanf ("%f", &area1);


  printf ("Digite o PIB: ");
  scanf ("%f", &pib1);
  

  printf ("Digite o o número de pontos turísticos: ");
  scanf ("%d", &pontosTuristicos1);


  
  printf ("Carta 2 \n");
  
  
  
  printf ("Estado: "); puts (estado1);
  printf ("Código: "); puts (codigo1);
  printf ("Nome da cidade: "); puts (nome1);
 
  printf ("Populacão: %u\n", populacao1);
  printf ("Área: %.2f ", area1);
  printf ("Km2\n");
  printf ("PIB: %.2f ", pib1);
  printf ("bilhões de reais\n");
  printf ("Número de pontos turísticos: %d \n", pontosTuristicos1);
  
	densidade1 = populacao1/area1;
	
	printf ("A densidade populacional da %s é: %.2f ", codigo1, densidade1);
	printf ("hab/Km2\n");
	
	pibpc1 = pib1/populacao1;
	printf ("O PIB per capita é de: %.2f ", pibpc1);
	printf ("R$/habitante\n");
	
	// Super Poder
	
	
	superPoderB = populacao1 + area1 + pib1 + pontosTuristicos1 + 1/densidade1 + pibpc1;
	printf ("O valor do Super Poder da %s é: %.2f\n\n\n", codigo1, superPoderB);
	
	// Comparação dos Resultados do Supepoder
	
	printf ("RESULTADO DO SUPERPODER\n");
	
	printf ("A populacão da %s: (%u) é maior do que a populacão da %s: (%u)\n", codigo, populacao, codigo1, populacao1);
	printf ("Carta 1 venceu: %d\n\n\n", populacao > populacao1);
	
	printf ("A área da %s: (%.2f) é maior do que a área da %s: (%.2f)\n", codigo, area, codigo1, area1);
	printf ("Carta 1 venceu: %d\n\n\n", area > area1);
	
	printf ("O PIB da %s: (%.2f) é maior do que o PIB da %s: (%.2f)\n", codigo, pib, codigo1, pib1);
	printf ("Carta 1 venceu: %d\n\n\n", pib > pib1);
	
	printf ("O número de Pontos Turísticos da %s: (%d) é maior do que o número de Pontos Turísticos da %s: (%d)\n", codigo, pontosTuristicos, codigo1, pontosTuristicos1);
	printf ("Carta 1 venceu: %d\n\n\n", pontosTuristicos > pontosTuristicos1);
	
	printf ("A densidade populacional da %s: (%.2f) é maior do que a densidade populacional da %s: (%.2f)\n", codigo, densidade, codigo1, densidade1);
	printf ("Carta 1 venceu: %d\n\n\n", densidade1 > densidade);
	
	printf ("O PIB per capta da %s: (%.2f) é maior do que o PIB per capta da %s: (%.2f)\n", codigo, pibpc, codigo1, pibpc1);
	printf ("Carta 1 venceu: %d\n\n\n", pibpc > pibpc1);
	
	printf ("O Super Poder da %s: (%.2f) é maior do que o Super Poder da %s: (%.2f)\n", codigo, superPoderA, codigo1, superPoderB);
	printf ("Carta 1 venceu: %d\n\n\n", superPoderA > superPoderB);
	
	
		// Nível Mestre Tema 2
		// Comparação das Cartas
		
		printf ("COMPARAÇÃO DAS CARTAS\n\n");
		printf ("População: Carta 1 venceu (%d)\n", populacao > populacao1);
		printf ("Área: Carta 1 venceu (%d)\n", area > area1);
		printf ("PIB: Carta 1 venceu (%d)\n", pib > pib1);
		printf ("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos > pontosTuristicos1);
		printf ("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 > densidade);
		printf ("PIB per capta: Carta 1 venceu (%d)\n", pibpc > pibpc1);
		printf ("Super Poder: Carta 1 venceu (%d)\n\n\n", superPoderA > superPoderB);
		
		
		// Nível Novato Tema 3
		// Escolha do atributo e determinação da carta vencedora
		
		printf ("CARTA VENCEDORA DO ATRIBUTO ESCOLHIDO\n\n");
		printf ("Atributo escolhido: População\n");
		
		printf ("%s - %s (SP): %u\n", codigo, nome, populacao);
		printf ("%s - %s (RJ): %u\n", codigo1, nome1, populacao1);				
		
		
		if (populacao > populacao1) {
		printf ("Resultado: %s (%s) venceu\n", codigo, nome);			
		}
		else {
		printf ("Resultado: %s (%s) venceu\n", codigo1, nome1);						
		}
		
		
	
 

 
return 0;
} 
