#include <stdio.h>

int main(){

// carta 1
char estado1, codigo_carta1[4], cidade1[10];
int populaçao1, pontos_turisticos1;
float area1, pib1;

// carta 2
char estado2, codigo_carta2[4], cidade2[10];
int populaçao2, pontos_turisticos2;
float area2, pib2;

//cadastro da 1 carta

printf("\n ---carta 1! ---\n ");

printf("Digite seu Estado: ");
scanf("%c", &estado1);

printf("Codigo da carta: ");
scanf("%s", codigo_carta1);

printf("Nome da cidade: ");
scanf("%s", cidade1);

printf("Populaçao: ");
scanf("%d", &populaçao1);

printf("Area: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1); 

printf("Pontos turisticos: ");
scanf("%d", &pontos_turisticos1);

//cadastro da carta 2

printf("\n ---Carta 2!---\n ");

printf("Digite seu Estado: ");
scanf("%c", &estado2);

printf("Codigo Da Carta: ");
scanf("%s", codigo_carta2);

printf("Nome da cidade: ");
scanf("%s", cidade2);

printf("Populaçao: ");
scanf("%d", &populaçao2);

printf("Area: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Pontos turisticos: ");
scanf("%d", &pontos_turisticos2);

//Exibiçao dos dados da carta 1

printf("\n---Carta 1 ---\n");
printf("Estado:%c \n", estado1);
printf("Codigo da carta: %s \n", codigo_carta1);
printf("Nome Da Cidade: %s \n", cidade1);
printf("Populacao: %d \n", populaçao1);
printf("Area: %2f km² \n", area1);
printf("PIB: %f \n", pib1);
printf("Pontos turisticos: %d \n", pontos_turisticos1);

//Exibiçao dos dados da carta 2

printf("\n---Carta 2 ---\n");
printf("Estado:%c \n",estado2);
printf("Codigo da Carta: %s \n", codigo_carta2);
printf("Nome da Cidade: %s \n", cidade2);
printf("Populaçao: %d \n", populaçao2);
printf("Area: %2f km² \n", area2);
printf("PIB: %f \n", pib2);
printf("Pontos turisticos: %d \n", pontos_turisticos2);


return 0;


}   