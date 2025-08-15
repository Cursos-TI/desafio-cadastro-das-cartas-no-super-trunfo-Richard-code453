#include <stdio.h>

int main(){
// Declamos as variaveis das cartas

// Variaveis da carta 1

int populacao1, turistico1;
float area1, pib1;
char estado1[50], cidade1[50], codigo1[20];

// Variaveis da carta 2

int populacao2, turismo2;
float area2, pib2;
char estado2[100], cidade2[100], codigo2[20];


// cadastro da carta 1

// === Super trunfo em C ===\n");

printf("\nCARTA 01\n");
// A função (printf), imprime tudo que estiver dentro dela
// A função (scanf) escaneia as variaveis e gera um resultado
printf("\nDigite o codigo da carta:\n");
scanf("%s", codigo1);

printf("Digite a cidade: \n");
scanf("%s", &cidade1);

printf("Digite a letra inicial do estado (A-H): \n");
scanf("%s", estado1);

printf("Digite a polução da cidade: \n");
scanf("%d", &populacao1);

printf("Digite o PIB, em bilhões de Reais: \n");
scanf("%f", &pib1);

printf("Digite a area da cidade: \n");
scanf("%f", &area1);

printf("Digite a quantidade de pontos turisticos da cidade: \n");
scanf ("%d", &turistico1);

// Cornfirmar as inforações da carta 1

printf("\nConfirme as informações da carta 1\n");

printf("\nO código da carta é: %s\n", codigo1);
printf("A cidade é: %s\n", cidade1);
printf("A letra inicial do estado é: %s\n", estado1);
printf("A população é: %d\n", populacao1);
printf("o PIB é: %f Bilhões de reais\n", pib1);
printf("A área da sua cidade é: %f Km²\n", area1);
printf("A quantidade de pontos turisticos é: %d\n", turistico1);

// Cadastro da carta 2

printf("\nCARTA 02\n");

printf("\nDigite o codigo da carta:\n");
scanf("%s", codigo2);

printf("Digite a cidade: \n");
scanf("%s", cidade2);

printf("Digite a letra inicial do estado (A-H): \n");
scanf("%s", estado2);

printf("Digite a polução da cidade: \n");
scanf("%d", &populacao2);

printf("Digite o PIB, em bilhões de reais \n");
scanf("%f", &pib2);

printf("Digite a area da cidade: \n");
scanf("%f", &area2);

printf("Digite a quantidade de pontos turisticos da cidade: \n");
scanf ("%d", &turismo2);

// Confirmar as informações da carta 2

printf("\nConfirme as informações da carta 2\n");

printf("\nO código da carta é: %s\n", codigo2);
printf("A cidade é: %s\n", cidade2);
printf("A letra inicial do estado é: %s\n", estado2);
printf("A população é: %d\n", populacao2);
printf("o PIB é: %f Bilhões de reais\n", pib2);
printf("A área da sua cidade é: %f Km²\n", area2);
printf("A quantidade de pontos turisticos é: %d\n", turismo2);

return 0;
}
