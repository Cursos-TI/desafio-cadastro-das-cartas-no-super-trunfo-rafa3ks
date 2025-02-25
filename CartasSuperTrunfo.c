#include <stdio.h>


int main() {

    char estado1;
    int codigo1;
    char cidade1 [60];
    int populacao1;
    float area1;
    float pib1;
    int pontost1;
    //variaveis da primeira carta do jogo

    char estado2;
    int codigo2;
    char cidade2 [30];
    int populacao2;
    float area2;
    float pib2;
    int pontost2;
    //variaveis da segunda carta do jogo

    printf("digite uma letra de A ao H para representar o estado: \n");
    scanf(" %c" , &estado1);

    printf("digite o codigo do estado entre 01 ao 04(favor colocar o 0): \n");
    scanf("%d" , &codigo1);

    printf("digite o nome de uma cidade do estado escolhido(favor colocar a _ para separar se for nome composto): \n");
    scanf("%s" , &cidade1);

    printf("digite a população da cidade: \n");
    scanf("%d" , &populacao1);

    printf("digite a área da cidade: \n");
    scanf("%f" , &area1);

    printf("digite o PIB da cidade: \n");
    scanf("%f" , &pib1);

    printf("digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d" , &pontost1);
    printf(" \n");
    //recolhimento de informações da primeira carta do jogo

    printf("Carta1: \n");
    printf("Estado: %c  \n" ,estado1 );
    printf("Codigo: %c0%d  \n" ,estado1,codigo1);
    printf("Nome da cidade: %s  \n" ,cidade1);
    printf("População: %d \n" ,populacao1);
    printf("Área: %.2fkm  \n" ,area1);
    printf("PIB: %.2f Bilhões de reais  \n" ,pib1);
    printf("Número de pontos turisticos: %d  \n" ,pontost1);
    printf(" \n");
    //print da primeira carta

    printf("digite uma letra de A ao H para representar o estado da segunda carta: \n");
    scanf(" %c" , &estado2);

    printf("digite o codigo do estado entre 01 ao 04(favor colocar o 0): \n");
    scanf("%d" , &codigo2);

    printf("digite o nome de uma cidade do estado escolhido(favor colocar a _ para separar se for nome composto): \n");
    scanf("%s" , &cidade2);

    printf("digite a população da cidade: \n");
    scanf("%d" , &populacao2);

    printf("digite a área da cidade: \n");
    scanf("%f" , &area2);

    printf("digite o PIB da cidade: \n");
    scanf("%f" , &pib2);

    printf("digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d" , &pontost2);
    printf(" \n");
    //recolhimento de informações da segunda carta do jogo

    printf("Carta2: \n");
    printf("Estado: %c  \n" ,estado2 );
    printf("Codigo: %c0%d  \n" ,estado2,codigo2);
    printf("Nome da cidade: %s  \n" ,cidade2);
    printf("População: %d \n" ,populacao2);
    printf("Área: %.2fkm  \n" ,area2);
    printf("PIB: %.2f Bilhões de reais  \n" ,pib2);
    printf("Número de pontos turisticos: %d  \n" ,pontost2);
    printf("  \n");
    //print da segunda carta
    

    return 0;
}
