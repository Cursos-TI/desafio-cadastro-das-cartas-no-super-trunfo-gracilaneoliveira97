#include <stdio.h>

int main(){

// carta 1
char estado1[10], codigo_carta1[4], cidade1[10];
int populaçao1, pontos_turisticos1;
float area1, pib1;

// carta 2
char estado2[10], codigo_carta2[4], cidade2[10];
int populaçao2, pontos_turisticos2;
float area2, pib2;

//cadastro da 1 carta

printf("carta 1!\n ");

printf("Digite seu Estado:  ");
scanf("%s", &estado1);

printf("Codigo da carta:  ");
scanf("%s", &codigo_carta1);

printf("Nome da cidade: ");
scanf("%s" , &cidade1);

printf("Populaçao: ");
scanf("%d", &populaçao1);

printf("Pontos turisticos: ");
scanf("%d", &pontos_turisticos1);

printf("Area: ");
scanf("%f", &area1);

printf("Pib: ");
scanf("%f ",&pib1);
//cadastro da carta 2

printf("Carta 2!\n ");

printf("Digite seu Estado:  ");
scanf("%s", &estado2);

printf("Codigo Da Carta:  ");
scanf("%s", &codigo_carta2);

printf("Nome da cidade:  ");
scanf("%s", &cidade2);

printf("Populaçao:  ");
scanf("%d", &populaçao2);






}   