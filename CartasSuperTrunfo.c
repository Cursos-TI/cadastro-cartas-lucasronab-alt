#include <stdio.h>

int main(){

  char estado1, estado2;
  char codigo1[5], codigo2[5];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  int pontosTuriscos1, pontosTuriscos2; 
  float area1, area2;
  float pib1, pib2;

  printf ("Carta (1\n");

  printf("Estado1 (ex:A): \n");
  scanf(" %s", &estado1);

  printf("Codigo1 (ex:A01): \n");
  scanf(" %s", codigo1);

  printf("NomeCidade1: \n");
  scanf(" %s", nomeCidade1);

  printf("Populacao1: \n");
  scanf("%d", &populacao1);

  printf("Pontos Turiscos1: \n");
  scanf("%d", &pontosTuriscos1);

  printf("Area1: \n");
  scanf("%f", &area1);

  printf("Pib1: \n");
  scanf("%f", &pib1);


    
  printf("carta 2 ");


   printf("Estado2 (ex:B) \n");
  scanf(" %s", &estado2);

  printf("Codigo2 (ex:B02): \n");
  scanf(" %s", codigo2);

  printf("NomeCidade2: \n");
  scanf(" %s", nomeCidade2);

  printf("Populacao2: \n");
  scanf("%d", &populacao2);

  printf("Pontos Turiscos2: \n");
  scanf("%d", &pontosTuriscos2);

  printf("Area2: \n");
  scanf("%f", &area2);

  printf("Pib2: \n");
  scanf("%f", &pib2);
  

    
    return 0;
  
}



















