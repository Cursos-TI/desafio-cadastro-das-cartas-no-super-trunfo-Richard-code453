#include <stdio.h>

int main(){
// Declamos as variaveis das cartas

// Variaveis das cartas
char carta1;
char estado1[49], cidade1[49], codigo1[20];
unsigned long int populacao1;
int turistico1;
float area1, pib1, densidade1, percapita1;


// cadastro da carta 1

printf("\nCARTA 01\n");
// A função (printf), imprime tudo que estiver dentro dela
// A função (scanf) escaneia as variaveis e gera um resultado
printf("\nCodigo da carta (Ex: A01): \n");
scanf("%s", codigo1);

printf("Cidade: \n");
scanf("%s", cidade1);

printf("Letra inicial do estado (A-H): \n");
scanf("%s", estado1);

printf("Polução da cidade: \n");
scanf("%lu", &populacao1);

printf("PIB (bilhões de Reais: \n");
scanf("%f", &pib1);

printf("Area da cidade (Km²): \n");
scanf("%f", &area1);

printf("Quantidade de pontos turisticos da cidade: \n");
scanf ("%d", &turistico1);
// Calculo da densidade populacional e do PIB Per Capita da carta 1
densidade1 = (populacao1 / area1);
percapita1 = (pib1 / populacao1);

// Cornfirmar as inforações da carta 1

printf("\nInformações da carta 1\n");

printf("\nO código da carta é: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Letra inicial do estado: %s\n", estado1);
printf("População: %lu\n", populacao1);
printf("PIB: R$ %.1f bilhões de reais\n", pib1);
printf("Area da sua cidade: %.2f Km²\n", area1);
printf("Pontos turisticos: %d\n", turistico1);
printf("Densidade populacional: %.3f\n", densidade1);
printf("Pib Per Capita: %f\n", percapita1);

// Cadastro da carta 2
char carta2[30];
char estado2[49], cidade2[49], codigo2[20];
unsigned long int populacao2; 
int turistico2;
float area2, pib2, densidade2, percapita2;


printf("\nCARTA 02\n");

printf("\nCodigo da carta (Ex: A01):\n");
scanf("%s", codigo2);

printf("Cidade: \n");
scanf("%s", cidade2);

printf("Letra inicial do estado (A-H): \n");
scanf("%s", estado2);

printf("Polução da cidade: \n");
scanf("%lu", &populacao2);

printf("PIB (bilhões de reais): \n");
scanf("%f", &pib2);

printf("Area da cidade (Km²): \n");
scanf("%f", &area2);

printf("Quantidade de pontos turisticos da cidade: \n");
scanf ("%d", &turistico2);
// calculo da densidade populacional e do PIB Per Capita da carta 2
populacao2 = (populacao2 / area2);
percapita2 = (pib2 / populacao2);

// Imprimimos as informacoes da carta 2
printf("\nInformacoes da carta 2\n");

printf("\nCódigo da carta: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Letra inicial do estado: %s\n", estado2);
printf("População: %lu\n", populacao2);
printf("PIB: R$ %.1f bilhões de reais\n", pib2);
printf("Area da cidade: %.2f Km²\n", area2);
printf("Pontos turisticos: %d\n", turistico2);
printf("Densidade populacional: %f\n", densidade2);
printf("Pib Per Capta: %f\n", percapita2);

// Vamos fazer as comparacoes das cartas
float densidade_invertida1, densidade_invertida2; // Aqui declarei a variavel para depois calcular a densidade invertida

densidade_invertida1 = area1 / populacao1; // Calculei a densidade invertida da carta A
densidade_invertida2 = area2 / populacao2; // Calculei a densidade invertida da carta B

float super_poder1, super_poder2; // Declarei a variavel para calcular o super poder

super_poder1 = populacao1 + area1 + pib1 + turistico1 + percapita1 + densidade_invertida1; // Super poder da carta A
super_poder2 = populacao2 + area2 + pib2 + turistico2 + percapita2 + densidade_invertida2; // Super poder da carta B

int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7, resultado8; // Declarei a variavel para os resulado
// Os resultados de todas as comparacoes que seram feitas
resultado1 = populacao1 > populacao2;
resultado2 = area1 > area2;
resultado3 = pib1 > pib2;
resultado4 = turistico1 > turistico2;
resultado5 = percapita1 > percapita2;
resultado6 = densidade1 < densidade2;
resultado7 = super_poder1 > super_poder2;

// Aqui imprimimos os resultados das comparacoes
printf("\n***RESULTADO***\n");

printf("\nPopulacao: %d\n", resultado1);
printf("Area: %d\n", resultado2);
printf("PIB: %d\n", resultado3);
printf("Pontos turisticos: %d\n", resultado4);
printf("PIB Per Capita: %d\n", resultado5);
printf("Densidade populacional: %d\n", resultado6);
printf("\nSuper poder: %d\n", resultado7);

return 0;
}
