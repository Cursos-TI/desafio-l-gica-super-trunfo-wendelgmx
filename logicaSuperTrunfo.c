#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparação das Cartas
// Nível Mestre
// Exemplo:
//Carta 1 
//Digite o País: BRASIL
//Digite o código do Estado: MG
//Digite o código da carta: MG1
//Digite o nome da cidade: BH
//Digite a população: 10000
//Digite a área: 5000
//Digite o PIB: 60000
//Digite o número de pontos turísticos: 10

int main() {
    
    //Declaração de variáveis
    char paisC1[10], paisC2[10];
    char estadoC1[4], estadoC2[4];
    char codigoCarta[8];
    char nomeCidadeC1[35], nomeCidadeC2[35];
    int populacaoC1, populacaoC2, numPtsTuristicosC1, numPtsTuristicosC2, opcao1, opcao2, ptsCarta1, ptsCarta2;
    float areaCidadeC1, areaCidadeC2, pibCidadeC1, pibCidadeC2, densidadePopulacionalC1, pibPerCapitaC1, densidadePopulacionalC2, pibPerCapitaC2;

    //INICIO DE DADOS CARTA 1

        //Entrada de dados Carta 1
        printf("Carta 1 \n");
        printf("Digite o País: ");
        scanf("%s", paisC1);

        printf("Digite o código do Estado: ");
        scanf("%s", estadoC1);

        printf("Digite o código da carta: ");
        scanf("%s", codigoCarta);

        printf("Digite o nome da cidade: ");
        scanf("%s", nomeCidadeC1);

        printf("Digite a população: ");
        scanf("%d", &populacaoC1);

        printf("Digite a área: ");
        scanf("%f", &areaCidadeC1);

        printf("Digite o PIB: ");
        scanf("%f", &pibCidadeC1);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &numPtsTuristicosC1);

        //Calculo da densidade populacional
        densidadePopulacionalC1 = (float) populacaoC1 / areaCidadeC1;
        //Calculo do PIB
        pibPerCapitaC1 = pibCidadeC1 / (float) populacaoC1;

        //Saída de dados da carta 1
        printf("------------------------------\n");
        printf("Carta 1 \n");
        printf("País: %s\n", paisC1);
        printf("Estado: %s\n", estadoC1);
        printf("Código Carta: %s\n", codigoCarta);
        printf("Nome da Cidade: %s\n", nomeCidadeC1);                                                                                                             
        printf("População: %d\n", populacaoC1);
        printf("Área: %.2f km²\n", areaCidadeC1);
        printf("PIB (R$): %.2f \n", pibCidadeC1);
        printf("Número de pontos turísticos: %d \n", numPtsTuristicosC1);
        printf("Densidade Populacional: %.2f hab/km²: \n", densidadePopulacionalC1);
        printf("PIB per Capita (R$): %.2f\n", pibPerCapitaC1);

    //FIM DE DADOS CARTA 1

    printf("\n");

    //INICIO DE DADOS CARTA 2

        //Entrada de dados Carta 2
        printf("Carta 2 \n");
        printf("Digite o País: ");
        scanf("%s", paisC2);

        printf("Digite o código do Estado: ");
        scanf("%s", estadoC2);

        printf("Digite o código da carta: ");
        scanf("%s", codigoCarta);

        printf("Digite o nome da cidade: ");
        scanf("%s", nomeCidadeC2);

        printf("Digite a população: ");
        scanf("%d", &populacaoC2);

        printf("Digite a área: ");
        scanf("%f", &areaCidadeC2);

        printf("Digite o PIB: ");
        scanf("%f", &pibCidadeC2);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &numPtsTuristicosC2);

        //Calculo da densidade populacional
        densidadePopulacionalC2 = (float) populacaoC2 / areaCidadeC2;
        //Calculo do PIB
        pibPerCapitaC2 = pibCidadeC2 / (float) populacaoC2;

        //Saída de dados da carta 2
        printf("------------------------------\n");
        printf("Carta 2 \n");
        printf("País: %s\n", paisC2);
        printf("Estado: %s\n", estadoC2);
        printf("Código Carta: %s\n", codigoCarta);
        printf("Nome da Cidade: %s\n", nomeCidadeC2);                                                                                                             
        printf("População: %d\n", populacaoC2);
        printf("Área: %.2f km²\n", areaCidadeC2);
        printf("PIB (R$): %.2f \n", pibCidadeC2);
        printf("Número de pontos turísticos: %d \n", numPtsTuristicosC2);
        printf("Densidade Populacional: %.2f hab/km²: \n", densidadePopulacionalC2);
        printf("PIB per Capita (R$): %.2f\n", pibPerCapitaC2);

    //FIM DE DADOS CARTA 2

    //Menu - Escolha do primeiro atributo
    printf("------------------------------\n");
    printf("Escolha a PRIMEIRA opção de atributo para a comparação das cartas, sendo:\n");
    printf("1 - Comparar pela população\n");
    printf("2 - Comparar pela área\n");
    printf("3 - Comparar pelo PIB\n");
    printf("4 - Comparar pelo número de pontos turísticos\n");
    printf("5 - Comparar pela densidade demográfica\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao1);
    printf("*******************************\n");

    printf("Escolha a SEGUNDA opção de atributo para a comparação das cartas, sendo:\n");

    switch (opcao1)
    {
    case 1:
        printf("2 - Comparar pela área\n");
        printf("3 - Comparar pelo PIB\n");
        printf("4 - Comparar pelo número de pontos turísticos\n");
        printf("5 - Comparar pela densidade demográfica\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao2);
        break;
    case 2:
        printf("1 - Comparar pela população\n");
        //printf("2 - Comparar pela área\n");
        printf("3 - Comparar pelo PIB\n");
        printf("4 - Comparar pelo número de pontos turísticos\n");
        printf("5 - Comparar pela densidade demográfica\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao2);
        break;
    case 3:
        printf("1 - Comparar pela população\n");
        printf("2 - Comparar pela área\n");
        //printf("3 - Comparar pelo PIB\n");
        printf("4 - Comparar pelo número de pontos turísticos\n");
        printf("5 - Comparar pela densidade demográfica\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao2);
        break;
    case 4:
        printf("1 - Comparar pela população\n");
        printf("2 - Comparar pela área\n");
        printf("3 - Comparar pelo PIB\n");
        //printf("4 - Comparar pelo número de pontos turísticos\n");
        printf("5 - Comparar pela densidade demográfica\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao2);
        break;
    case 5:
        printf("1 - Comparar pela população\n");
        printf("2 - Comparar pela área\n");
        printf("3 - Comparar pelo PIB\n");
        printf("4 - Comparar pelo número de pontos turísticos\n");
        //printf("5 - Comparar pela densidade demográfica\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao2);
        break;
    
    default:
        printf("Opção inválida. Reinicie o jogo.");
        break;
    }

    //VERIFICAÇÃO SE AS OPÇÕES ESCOLHIDAS SÃO IGUAIS
    if(opcao1 == opcao2){
        printf("Opção inválida. Reinicie o jogo.");
    }else{

    //SETANDO VALORES AS VARIAVEIS DE PONTUAÇÃO
    ptsCarta1 = 0;
    ptsCarta2 = 0;

    printf("\n");
    printf("PRIMEIRA COMPARAÇÃO:\n");

    //1° PRIMEIRA COMPARAÇÃO
    switch (opcao1)
    {
    case 1:
        printf("Atributo escolhido: (1) População\n");
        printf("Carta 1 - País: %s (%s) - População: %d\n", paisC1, nomeCidadeC1, populacaoC1);
        printf("Carta 2 - País: %s (%s) - População: %d\n", paisC2, nomeCidadeC2, populacaoC2);
        if(populacaoC1>populacaoC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(populacaoC1<populacaoC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    case 2:
        printf("Atributo escolhido: (2) Área\n");
        printf("Carta 1 - País: %s (%s) - Área: %.2f\n", paisC1, nomeCidadeC1, areaCidadeC1);
        printf("Carta 2 - País: %s (%s) - Área: %.2f\n", paisC2, nomeCidadeC2, areaCidadeC2);
        if(areaCidadeC1>areaCidadeC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(areaCidadeC1<areaCidadeC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    case 3:
        printf("Atributo escolhido: (3) PIB\n");
        printf("Carta 1 - País: %s (%s) - PIB: %.2f\n", paisC1, nomeCidadeC1, pibCidadeC1);
        printf("Carta 2 - País: %s (%s) - PIB: %.2f\n", paisC2, nomeCidadeC2, pibCidadeC2);
        if(pibCidadeC1>pibCidadeC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(pibCidadeC1<pibCidadeC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    case 4:
        printf("Atributo escolhido: (4) Pontos Turísticos\n");
        printf("Carta 1 - País: %s (%s) - Pontos Turísticos: %d\n", paisC1, nomeCidadeC1, numPtsTuristicosC1);
        printf("Carta 2 - País: %s (%s) - Pontos Turísticos: %d\n", paisC2, nomeCidadeC2, numPtsTuristicosC2);
        if(numPtsTuristicosC1>numPtsTuristicosC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(numPtsTuristicosC1<numPtsTuristicosC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    case 5:
        printf("Atributo escolhido: (5) Densidade demográfica\n");
        printf("Carta 1 - País: %s (%s) - Densidade demográfica: %.2f  hab/km²\n", paisC1, nomeCidadeC1, densidadePopulacionalC1);
        printf("Carta 2 - País: %s (%s) - Densidade demográfica: %.2f  hab/km²\n", paisC2, nomeCidadeC2, densidadePopulacionalC2);
        if(densidadePopulacionalC1<densidadePopulacionalC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(densidadePopulacionalC1>densidadePopulacionalC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    default:
        printf("Opção inválida. Reinicie o jogo.");
        break;
    }
    //FIM PRIMEIRA COMPARAÇÃO

    printf("\n");
    printf("SEGUNDA COMPARAÇÃO:\n");

    //SEGUNDA COMPARAÇÃO
    switch (opcao2)
    {
    case 1:
        printf("Atributo escolhido: (1) População\n");
        printf("Carta 1 - País: %s (%s) - População: %d\n", paisC1, nomeCidadeC1, populacaoC1);
        printf("Carta 2 - País: %s (%s) - População: %d\n", paisC2, nomeCidadeC2, populacaoC2);
        if(populacaoC1>populacaoC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(populacaoC1<populacaoC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    case 2:
        printf("Atributo escolhido: (2) Área\n");
        printf("Carta 1 - País: %s (%s) - Área: %.2f\n", paisC1, nomeCidadeC1, areaCidadeC1);
        printf("Carta 2 - País: %s (%s) - Área: %.2f\n", paisC2, nomeCidadeC2, areaCidadeC2);
        if(areaCidadeC1>areaCidadeC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(areaCidadeC1<areaCidadeC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    case 3:
        printf("Atributo escolhido: (3) PIB\n");
        printf("Carta 1 - País: %s (%s) - PIB: %.2f\n", paisC1, nomeCidadeC1, pibCidadeC1);
        printf("Carta 2 - País: %s (%s) - PIB: %.2f\n", paisC2, nomeCidadeC2, pibCidadeC2);
        if(pibCidadeC1>pibCidadeC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(pibCidadeC1<pibCidadeC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    case 4:
        printf("Atributo escolhido: (4) Pontos Turísticos\n");
        printf("Carta 1 - País: %s (%s) - Pontos Turísticos: %d\n", paisC1, nomeCidadeC1, numPtsTuristicosC1);
        printf("Carta 2 - País: %s (%s) - Pontos Turísticos: %d\n", paisC2, nomeCidadeC2, numPtsTuristicosC2);
        if(numPtsTuristicosC1>numPtsTuristicosC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(numPtsTuristicosC1<numPtsTuristicosC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    case 5:
        printf("Atributo escolhido: (5) Densidade demográfica\n");
        printf("Carta 1 - País: %s (%s) - Densidade demográfica: %.2f  hab/km²\n", paisC1, nomeCidadeC1, densidadePopulacionalC1);
        printf("Carta 2 - País: %s (%s) - Densidade demográfica: %.2f  hab/km²\n", paisC2, nomeCidadeC2, densidadePopulacionalC2);
        if(densidadePopulacionalC1<densidadePopulacionalC2){
            ptsCarta1 += 1;
            printf("Resultado: Carta 1 (%s) - %s, venceu!", paisC1, nomeCidadeC1);
        }else if(densidadePopulacionalC1>densidadePopulacionalC2){
            ptsCarta2 += 1;
            printf("Resultado: Carta 2 (%s) - %s, venceu!", paisC2, nomeCidadeC2);
        }else{
            printf("Empate entre (%s) - %s e (%s) - %s", paisC1, nomeCidadeC1, paisC2, nomeCidadeC2);
        }
        break;
    default:
        printf("Opção inválida. Reinicie o jogo.");
        break;
    }
    //FIM DA SEGUNDA COMPARAÇÃO


    //APRESENTAÇÃO DE RESULTADO FINAL
    printf("\n");
    printf("********RESULTADO FINAL***********\n");
    if(ptsCarta1>ptsCarta2){
        printf("Carta 1 Venceu!!!");
    }else if(ptsCarta1<ptsCarta2){
        printf("Carta 2 Venceu");
    }else{
        printf("Empate!!!!");
    }

    }//FIM DA SELEÇÃO DE OPÇÕES IGUAIS

    return 0;
}
