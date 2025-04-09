#include <stdio.h>

int main () {
    // declara variavel
    float nota1;
    float nota2;
    float soma;
    float media;
    // solicita 1 nota 
    printf("Nota 1:");
    // armazena 1 nota
    scanf("%f",&nota1); 
    // solicita 2 nota
    printf("Nota 2:");
    // armazena 2 nota
    scanf("%f", &nota2);
    // soma as notas
    // armazena soma das notas
    soma = nota1 + nota2;
    // divide soma das notas por 2
    // armazena resultado da divisao
    media = soma / 2;
    //  exibir media
    printf("Media: %.2f", media);
    // fim
    return 0;
}