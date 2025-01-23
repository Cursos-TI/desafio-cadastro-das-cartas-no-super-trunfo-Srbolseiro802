#include <stdio.h>
int main(){

printf("desafio cartas trunfo\n");

float populacao;
int pontos_turisticos;
float area;
float pib;
char nome[100];

printf("digite o nome da cidade: \n");
scanf("%s" , &nome);

printf("digite os pontos turisticos: \n");
scanf("%d" , &pontos_turisticos);

printf("digite a populacao: \n");
scanf("%f" , &populacao);

printf("digite o pib: \n");
scanf("%f" , &pib);

printf("digite sua area: \n");
scanf("%f" , &area);

printf("Nome da cidade: %s\n" , nome);
printf("Pontos turisticos: %d\n" , pontos_turisticos);
printf("População: %f\n" , populacao);
printf("Pib:%f\n" , pib);
printf("Área: %f\n" , area);




}
