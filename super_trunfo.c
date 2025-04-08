#include <stdio.h>

int main () {
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    char estado1;
    char nome_da_cidade1 [50];
    char codigo1 [4];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    char estado2;
    char nome_da_cidade2 [50];
    char codigo2 [4];
        
    printf ("Carta 1: \n");

    printf ("Digite o nome do estado com uma letra de 'A' a 'H': \n");
    scanf ("%s", &estado1);

    printf ("Digite o código da area - letra do estado seguida de um numero de 01 a 04: \n");
    scanf ("%s", &codigo1);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_da_cidade1);

    printf ("Digite a populacao: \n");
    scanf ("%d", &populacao1);

    printf ("Digite a area em Km2: \n");
    scanf ("%f", &area1);

    printf ("Digite o pib em bilhoes de reais: \n");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%d", &pontos_turisticos1);

    printf ("Carta 1:\n");
    printf ("Estado: %c\n", estado1);
    printf ("Codigo: %s\n", codigo1);
    printf ("Nome da cidade: %s\n", nome_da_cidade1);
    printf ("Populacao: %d\n", populacao1);
    printf ("Area: %.2f km2\n",area1);
    printf ("PIB: %.2f bilhoes de reais\n", pib1);
    printf ("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    printf ("Carta 2: \n");

    printf ("Digite o nome do estado com uma letra de 'A' a 'H': \n");
    scanf ("%s", &estado2);

    printf ("Digite o codigo da area - letra do estado seguida de um numero de 01 a 04: \n");
    scanf ("%s", &codigo2);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_da_cidade2);

    printf ("Digite a populacao: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a area em Km2: \n");
    scanf ("%f", &area2);

    printf ("Digite o pib em bilhoes de reais: \n");
    scanf ("%f", &pib2);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf ("%d", &pontos_turisticos2);

    printf ("Carta 2:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Codigo: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", nome_da_cidade2);
    printf ("Populacao: %d\n", populacao2);
    printf ("Area: %.2f Km2\n",area2);
    printf ("PIB: %.2f bilhoes de reais\n", pib2);
    printf ("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

        return 0;

}