#include <stdio.h>


int main() {

    //variaveis da primeira carta do jogo
    char estado1;
    unsigned short int codigo1;
    char cidade1 [60];
    unsigned long int populacao1;
    float area1;
    float pib1;
    unsigned short int pontost1;

    //variaveis da segunda carta do jogo
    char estado2;
    unsigned short int codigo2;
    char cidade2 [60];
    unsigned long int populacao2;
    float area2;
    float pib2;
    unsigned short int pontost2;

    //recolhimento de informações da primeira carta do jogo
    printf("digite uma letra de A ao H para representar o estado: \n");
    scanf("%c" , &estado1);

    printf("digite o codigo do estado entre 01 ao 04(favor colocar o 0): \n");
    scanf("%u" , &codigo1);

    printf("digite o nome de uma cidade do estado escolhido(favor colocar a _ para separar se for nome composto): \n");
    scanf("%s", &cidade1);

    printf("digite a população da cidade: \n");
    scanf("%u" , &populacao1);

    printf("digite a área da cidade: \n");
    scanf("%f" , &area1);

    printf("digite o PIB da cidade: \n");
    scanf("%f" , &pib1);

    printf("digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%u" , &pontost1);
    printf(" \n");
    
    //calculo das variaveis da primeira carta
    float densidade1 = (float) populacao1 / area1;
    float PIBCap1 = pib1 / (float) populacao1;
    float super1 = (float)populacao1+area1+pib1+(float)pontost1+densidade1+PIBCap1;
    
    //print da primeira carta
    printf("Carta1: \n");
    printf("Estado: %c  \n" ,estado1 );
    printf("Codigo: %c0%d  \n" ,estado1,codigo1);
    printf("Nome da cidade: %s  \n" ,cidade1);
    printf("População: %d \n" ,populacao1);
    printf("Área: %.2fkm  \n" ,area1);
    printf("PIB: %.2f Bilhões de reais  \n" ,pib1);
    printf("Número de pontos turisticos: %d  \n" ,pontost1);
    printf("Densidade populacional: %.2f hab/km \n" ,densidade1);
    printf("PIB per Capita: %.2f Reais \n" ,PIBCap1);
    printf("Super Poder: %.2f \n" ,super1);
    printf(" \n");
    
    //recolhimento de informações da segunda carta do jogo
    printf("digite uma letra de A ao H para representar o estado da segunda carta: \n");
    scanf(" %c" , &estado2);

    printf("digite o codigo do estado entre 01 ao 04(favor colocar o 0): \n");
    scanf("%d" , &codigo2);

    printf("digite o nome de uma cidade do estado escolhido(favor colocar a _ para separar se for nome composto): \n");
    scanf("%s", &cidade2);

    printf("digite a população da cidade: \n");
    scanf("%u" , &populacao2);

    printf("digite a área da cidade: \n");
    scanf("%f" , &area2);

    printf("digite o PIB da cidade: \n");
    scanf("%f" , &pib2);

    printf("digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%u" , &pontost2);
    printf(" \n");
   
    //calculo das variaveis da segunda carta
    float densidade2 = (float) populacao2 / area2;
    float PIBCap2 = pib2 / (float) populacao2;
    float super2 = (float)populacao2+area2+pib2+(float)pontost2+densidade2+PIBCap2;
    
    //print da segunda carta
    printf("Carta2: \n");
    printf("Estado: %c  \n" ,estado2 );
    printf("Codigo: %c0%d  \n" ,estado2,codigo2);
    printf("Nome da cidade: %s  \n" ,cidade2);
    printf("População: %d \n" ,populacao2);
    printf("Área: %.2fkm  \n" ,area2);
    printf("PIB: %.2f Bilhões de reais  \n" ,pib2);
    printf("Número de pontos turisticos: %d  \n" ,pontost2);
    printf("Densidade populacional: %.2f hab/km \n" ,densidade2);
    printf("PIB per Capita: %.2f Reais \n" ,PIBCap2);
    printf("Super Poder: %.2f \n ", super2);
    printf("  \n");
    
    //Variaveis para escolha do usuário
    int escolha1;
    int escolha2;
    int resposta = (escolha2=!escolha1?1:0);

    //menu de escolha para disputa do usuario
    printf("Escolha dois atributo para a disputa das cartas:\n");
    printf("1. população;\n");
    printf("2. área;\n");
    printf("3. PIB;\n");
    printf("4. pontos turisticos;\n");
    printf("5. Densidade populacional;\n");
    printf("6. PIB per Capita;\n");
    printf("7. Super poder;\n");
    printf("Escolha1:");
    scanf("%d", &escolha1);
    printf("escolha2:");
    scanf("%d", &escolha2);
    printf("  \n");
    
    //apresentação das cartas de forma geral
    printf("***Resultado da disputa***\n");
    printf("carta1 cidade: %s\n" , cidade1);
    printf("carta2 cidade: %s\n" , cidade2);
    printf("  \n");

    if (resposta == 0)
    {
    
        //resultado primeira escolha
        switch (escolha1)
        {
            case 1 :
            printf("atributo escolhido foi população:\n");
            printf("População do %s: %d \n", cidade1, populacao1);
            printf("População do %s: %d \n", cidade2, populacao2);
            
            if(populacao1>populacao2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(populacao1<populacao2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 2:
            printf("atributo escolhido foi área:\n");
            printf("Área do %s: %.2f \n", cidade1, area1);
            printf("Área do %s: %.2f \n", cidade2, area2);
                
            if(area1>area2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(area1<area2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;
        
            case 3:
            printf("atributo escolhido foi PIB:\n");
            printf("PIB do %s: %.2f \n", cidade1, pib1);
            printf("PIB do %s: %.2f \n", cidade2, pib2);
                
            if(pib1>pib2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(pib1<pib2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 4:
            printf("atributo escolhido foi pontos turisticos:\n");
            printf("Pontos Turiticos do %s: %d \n", cidade1, pontost1);
            printf("Pontos Turiticos do %s: %d \n", cidade2, pontost2);
                
            if(pontost1>pontost2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(pontost1<pontost2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 5:
            printf("atributo escolhido foi densidade populacional:\n");
            printf("Densidade do %s: %.2f \n", cidade1, densidade1);
            printf("Densidade do %s: %.2f \n", cidade2, densidade2);
                
            if(densidade1>densidade2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(densidade1<densidade2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 6:
            printf("atributo escolhido foi PIB per capita:\n");
            printf("PIB Per Capita do %s: %.2f \n", cidade1, PIBCap1);
            printf("PIB Per Capita do %s: %.2f \n", cidade2, PIBCap2);
                
            if(PIBCap1>PIBCap2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(PIBCap1<PIBCap2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 7:
            printf("atributo escolhido foi Super Poder:\n");
            printf("Super Poder do %s: %.2f \n", cidade1, super1);
            printf("Super Poder do %s: %.2f \n", cidade2, super2);
                
            if(super1>super2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(super1<super2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

        default:
        printf("***escolha invalida!!!*** \n");
        printf("reinicie o jogo! \n");
        printf("Encerrando... \n");
        printf("  \n");
            break;
        }


        //possibilidades da segunda escolha
        switch (escolha2)
        {
            case 1:
            printf("atributo escolhido foi população:\n");
            printf("População do %s: %d \n", cidade1, populacao1);
            printf("População do %s: %d \n", cidade2, populacao2);
            
            if(populacao1>populacao2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(populacao1<populacao2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 2:
            printf("atributo escolhido foi área:\n");
            printf("Área do %s: %.2f \n", cidade1, area1);
            printf("Área do %s: %.2f \n", cidade2, area2);
                
            if(area1>area2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(area1<area2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;
        
            case 3:
            printf("atributo escolhido foi PIB:\n");
            printf("PIB do %s: %.2f \n", cidade1, pib1);
            printf("PIB do %s: %.2f \n", cidade2, pib2);
                
            if(pib1>pib2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(pib1<pib2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 4:
            printf("atributo escolhido foi pontos turisticos:\n");
            printf("Pontos Turiticos do %s: %d \n", cidade1, pontost1);
            printf("Pontos Turiticos do %s: %d \n", cidade2, pontost2);
                
            if(pontost1>pontost2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(pontost1<pontost2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 5:
            printf("atributo escolhido foi densidade populacional:\n");
            printf("Densidade do %s: %.2f \n", cidade1, densidade1);
            printf("Densidade do %s: %.2f \n", cidade2, densidade2);
                
            if(densidade1>densidade2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(densidade1<densidade2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 6:
            printf("atributo escolhido foi PIB per capita:\n");
            printf("PIB Per Capita do %s: %.2f \n", cidade1, PIBCap1);
            printf("PIB Per Capita do %s: %.2f \n", cidade2, PIBCap2);
                
            if(PIBCap1>PIBCap2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(PIBCap1<PIBCap2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

            case 7:
            printf("atributo escolhido foi Super Poder:\n");
            printf("Super Poder do %s: %.2f \n", cidade1, super1);
            printf("Super Poder do %s: %.2f \n", cidade2, super2);
                
            if(super1>super2){
                printf("Carta 1(%s) venceu!!! \n", cidade1);
                printf("  \n");
            }else if(super1<super2){
                printf("carta 2(%s) venceu!!! \n", cidade2);
                printf("  \n");
            }else{
                printf("Ouve um empate entre as duas cartas!");
                printf("  \n");
            }
                break;

        default:
        printf("***escolha invalida!!!*** \n");
        printf("reinicie o jogo! \n");
        printf("Encerrando... \n");
            break;
        }
    }else{
        printf("Sua segunda escolha de atributos deve ser diferente da primeira! \n");
        printf("Segunda escolha inválida!!! \n");
        printf("encerrando... \n");
        printf("***Programa Encerrado!***\n");
        printf("  \n");
    }
    
    return 0;
}
