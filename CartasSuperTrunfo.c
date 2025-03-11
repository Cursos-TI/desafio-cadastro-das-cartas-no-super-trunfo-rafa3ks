#include <stdio.h>


int main() {

    char estado1;
    unsigned int codigo1;
    char cidade1 [60];
    unsigned int populacao1;
    float area1;
    float pib1;
    unsigned int pontost1;
    //variaveis da primeira carta do jogo

    char estado2;
    unsigned int codigo2;
    char cidade2 [60];
    unsigned int populacao2;
    float area2;
    float pib2;
    unsigned int pontost2;
    //variaveis da segunda carta do jogo

    printf("digite uma letra de A ao H para representar o estado: \n");
    scanf(" %c" , &estado1);

    printf("digite o codigo do estado entre 01 ao 04(favor colocar o 0): \n");
    scanf("%u" , &codigo1);

    printf("digite o nome de uma cidade do estado escolhido(favor colocar a _ para separar se for nome composto): \n");
    scanf("%s" , &cidade1);

    printf("digite a população da cidade: \n");
    scanf("%u" , &populacao1);

    printf("digite a área da cidade: \n");
    scanf("%f" , &area1);

    printf("digite o PIB da cidade: \n");
    scanf("%f" , &pib1);

    printf("digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%u" , &pontost1);
    printf(" \n");
    //recolhimento de informações da primeira carta do jogo

    float densidade1 = (float) populacao1 / area1;
    float PIBCap1 = pib1 / (float) populacao1;
    float super1 = (float)populacao1+area1+pib1+(float)pontost1+densidade1+PIBCap1;
    //calculo das variaveis da primeira carta

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
    //print da primeira carta

    printf("digite uma letra de A ao H para representar o estado da segunda carta: \n");
    scanf(" %c" , &estado2);

    printf("digite o codigo do estado entre 01 ao 04(favor colocar o 0): \n");
    scanf("%u" , &codigo2);

    printf("digite o nome de uma cidade do estado escolhido(favor colocar a _ para separar se for nome composto): \n");
    scanf("%s" , &cidade2);

    printf("digite a população da cidade: \n");
    scanf("%u" , &populacao2);

    printf("digite a área da cidade: \n");
    scanf("%f" , &area2);

    printf("digite o PIB da cidade: \n");
    scanf("%f" , &pib2);

    printf("digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%u" , &pontost2);
    printf(" \n");
    //recolhimento de informações da segunda carta do jogo

    float densidade2 = (float) populacao2 / area2;
    float PIBCap2 = pib2 / (float) populacao2;
    float super2 = (float)populacao2+area2+pib2+(float)pontost2+densidade2+PIBCap2;
    //calculo das variaveis da segunda carta

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
    //print da segunda carta

    int escolha;

    printf("Escolha um atributo para a disputa das cartas:\n");
    printf("1. população;\n");
    printf("2. área;\n");
    printf("3. PIB;\n");
    printf("4. pontos turisticos;\n");
    printf("5. Densidade populacional;\n");
    printf("6. PIB per Capita;\n");
    printf("7. Super poder;\n");
    printf("Escolha:");
    scanf("%d", &escolha);
    printf("  \n");
    //menu de escolha para disputa do usuario

    printf("***Resultado da disputa***\n");
    printf("carta1 cidade: %s\n" , cidade1);
    printf("carta2 cidade: %s\n" , cidade2);

    //apresentação das cartas de forma geral

    switch (escolha)
    {
    case 1:
        if (populacao1>populacao2)
        {
            printf("atributo usado foi população:\n");
            printf("população carta1: %d\n", populacao1);
            printf("população carta2: %d\n", populacao2);
            printf("a Carta1 venceu!!!\n");
        }else if (populacao1<populacao2)
        {
            printf("atributo usado foi população:\n");
            printf("população carta1: %d\n", populacao1);
            printf("população carta2: %d\n", populacao2);
            printf("a Carta2 venceu!!!\n");
        }else{
            printf("atributo usado foi população:\n");
            printf("população carta1: %d\n", populacao1);
            printf("população carta2: %d\n", populacao2);
            printf("ocorreu um empate!!!\n");

            //resultado se a escolha for 1
        }
        break;

        case 2:
        if (area1>area2)
        {
            printf("atributo usado foi área:\n");
            printf("área carta1: %.2f\n", area1);
            printf("área carta2: %.2f\n", area2);
            printf("a Carta1 venceu!!!\n");
        }else if (area1<area2)
        {
            printf("atributo usado foi área:\n");
            printf("área carta1: %.2f\n", area1);
            printf("área carta2: %.2f\n", area2);
            printf("a Carta2 venceu!!!\n");
        }else{
            printf("atributo usado foi área:\n");
            printf("área carta1: %.2f\n", area1);
            printf("área carta2: %.2f\n", area2);
            printf("ocorreu um empate!!!\n");

            //resultado se a escolha for 2
        }
        break;

        case 3:
        if (pib1>pib2)
        {
            printf("atributo usado foi PIB:\n");
            printf("PIB carta1: %.2f\n", pib1);
            printf("PIB carta2: %.2f\n", pib2);
            printf("a Carta1 venceu!!!\n");
        }else if (pib1<pib2)
        {
            printf("atributo usado foi PIB:\n");
            printf("PIB carta1: %.2f\n", pib1);
            printf("PIB carta2: %.2f\n", pib2);
            printf("a Carta2 venceu!!!\n");
        }else{
            printf("atributo usado foi PIB:\n");
            printf("PIB carta1: %.2f\n", pib1);
            printf("PIB carta2: %.2f\n", pib2);
            printf("ocorreu um empate!!!\n");

            //resultado se a escolha for 3
        }
        break;

        case 4:
        if (pontost1>pontost2)
        {
            printf("atributo usado foi pontos turisticos:\n");
            printf("pontos turisticos carta1: %d\n", pontost1);
            printf("pontos turisticos carta2: %d\n", pontost2);
            printf("a Carta1 venceu!!!\n");
        }else if (pontost1<pontost2)
        {
            printf("atributo usado foi pontos turisticos:\n");
            printf("pontos turisticos carta1: %d\n", pontost1);
            printf("pontos turisticos carta2: %d\n", pontost2);
            printf("a Carta2 venceu!!!\n");
        }else{
            printf("atributo usado foi pontos turisticos:\n");
            printf("pontos turisticos carta1: %d\n", pontost1);
            printf("pontos turisticos carta2: %d\n", pontost2);
            printf("ocorreu um empate!!!\n");

            //resultado se a escolha for 4
        }
        break;

        case 5:
        if (densidade1<densidade2)
        {
            printf("atributo usado foi densidade populacional:\n");
            printf("densidade populacional carta1: %.2f\n", densidade1);
            printf("densidade populacional carta2: %.2f\n", densidade2);
            printf("a Carta1 venceu!!!\n");
        }else if (densidade1>densidade2)
        {
            printf("atributo usado foi densidade populacional:\n");
            printf("densidade populacional carta1: %.2f\n", densidade1);
            printf("densidade populacional carta2: %.2f\n", densidade2);
            printf("a Carta2 venceu!!!\n");
        }else{
            printf("atributo usado foi densidade populacional:\n");
            printf("densidade populacional carta1: %.2f\n", densidade1);
            printf("densidade populacional carta2: %.2f\n", densidade2);
            printf("ocorreu um empate!!!\n");

            //resultado se a escolha for 5
        }
        break;

        case 6:
        if (PIBCap1>PIBCap2)
        {
            printf("atributo usado foi PIB per capita:\n");
            printf("PIB per capita carta1: %.2f\n", PIBCap1);
            printf("PIB per capita carta2: %.2f\n", PIBCap2);
            printf("a Carta1 venceu!!!\n");
        }else if (PIBCap1<PIBCap2)
        {
            printf("atributo usado foi PIB per capita:\n");
            printf("PIB per capita carta1: %.2f\n", PIBCap1);
            printf("PIB per capita carta2: %.2f\n", PIBCap2);
            printf("a Carta2 venceu!!!\n");
        }else{
            printf("atributo usado foi PIB per capita:\n");
            printf("PIB per capita carta1: %d\n", PIBCap1);
            printf("PIB per capita carta2: %d\n", PIBCap2);
            printf("ocorreu um empate!!!\n");

            //resultado se a esolha for 6
        }
        break;

        case 7:
        if (super1>super2)
        {
            printf("atributo usado foi super poder:\n");
            printf("super poder carta1: %.2f\n", super1);
            printf("super poder carta2: %.2f\n", super2);
            printf("a Carta1 venceu!!!\n");
        }else if (super1<super2)
        {
            printf("atributo usado foi super poder:\n");
            printf("super poder carta1: %.2f\n", super1);
            printf("super poder carta2: %.2f\n", super2);
            printf("a Carta2 venceu!!!\n");
        }else{
            printf("atributo usado foi super poder:\n");
            printf("super poder carta1: %.2f\n", super1);
            printf("super poder carta2: %.2f\n", super2);
            printf("ocorreu um empate!!!\n");

            //resultado se a escolha for 7
        }
        break;
    
    default:
    printf("***opção invalida, reinicie o programa!***\n");

    //resposta para opção invalida
        break;
    }
    //switch para validação de resultado da batalha das cartas

    return 0;
}
