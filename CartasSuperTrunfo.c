#include <stdio.h>

int main(){
// Declamos as variaveis das cartas

// Variaveis das cartas

float area1, pib1, area2, pib2, populacao1, populacao2, densidade1, densidade2, percapita1, percapita2;
int turistico1, turismo2;
char estado1[50], cidade1[50], codigo1[20], estado2[50], cidade2[50], codigo2[20];

// cadastro da carta 1

// === Super trunfo em C ===\n");

printf("\nCARTA 01\n");
// A função (printf), imprime tudo que estiver dentro dela
// A função (scanf) escaneia as variaveis e gera um resultado
printf("\nCodigo da carta (Ex: A01): \n");
scanf("%s", codigo1);

printf("Cidade: \n");
scanf("%s", &cidade1);

printf("Letra inicial do estado (A-H): \n");
scanf("%s", &estado1);

printf("Polução da cidade: \n");
scanf("%f", &populacao1);

printf("PIB (bilhões de Reais: \n");
scanf("%f", &pib1);

printf("Area da cidade (Km²): \n");
scanf("%f", &area1);

printf("Quantidade de pontos turisticos da cidade: \n");
scanf ("%d", &turistico1);

densidade1 = (populacao1 / area1);
percapita1 = (pib1 / populacao1);

// Cornfirmar as inforações da carta 1

printf("\nInformações da carta 1\n");

printf("\nO código da carta é: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Letra inicial do estado: %s\n", estado1);
printf("População: %f\n", populacao1);
printf("PIB: R$ %.1f bilhões de reais\n", pib1);
printf("Area da sua cidade: %.2f Km²\n", area1);
printf("Pontos turisticos: %d\n", turistico1);
printf("Densidade populacional: %f\n", densidade1);
printf("Pib Per Capita: %f\n", percapita1);

// Cadastro da carta 2

printf("\nCARTA 02\n");

printf("\nCodigo da carta (Ex: A01):\n");
scanf("%s", codigo2);

printf("Cidade: \n");
scanf("%s", cidade2);

printf("Letra inicial do estado (A-H): \n");
scanf("%s", estado2);

printf("Polução da cidade: \n");
scanf("%f", &populacao2);

printf("PIB (bilhões de reais): \n");
scanf("%f", &pib2);

printf("Area da cidade (Km²): \n");
scanf("%f", &area2);

printf("Quantidade de pontos turisticos da cidade: \n");
scanf ("%d", &turismo2);

populacao2 = (populacao2 / area2);
percapita2 = (pib2 / populacao2);

// Confirmar as informações da carta 2

printf("\nInformacoes da carta 2\n");

printf("\nCódigo da carta: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Letra inicial do estado: %s\n", estado2);
printf("População: %f\n", populacao2);
printf("PIB: R$ %f bilhões de reais\n", pib2);
printf("Area da cidade: %.3f Km²\n", area2);
printf("Pontos turisticos: %d\n", turismo2);
printf("Densidade populacional: %f\n", densidade2);
printf("Pib Per Capta: %f\n", percapita2);

return 0;
}
