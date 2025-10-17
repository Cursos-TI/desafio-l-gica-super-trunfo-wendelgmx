#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparação das Cartas

int main() {
    
    //Declaração de variáveis
    char estadoC1[4], estadoC2[4];
    char codigoCarta[8];
    char nomeCidadeC1[35], nomeCidadeC2[35];
    int populacaoC1, populacaoC2, numPtsTuristicosC1, numPtsTuristicosC2;
    float areaCidadeC1, areaCidadeC2, pibCidadeC1, pibCidadeC2, densidadePopulacionalC1, pibPerCapitaC1, densidadePopulacionalC2, pibPerCapitaC2;

    //INICIO DE DADOS CARTA 1

        //Entrada de dados Carta 1
        printf("Carta 1 \n");
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

    //COMPARAÇÃO
    printf("------------------------------\n");
    printf("Comparação de cartas: Atributo (PIB)\n");
    printf("Carta 1: %s (%s): (R$) %.2f\n", nomeCidadeC1, estadoC1, pibCidadeC1);
    printf("Carta 2: %s (%s): (R$) %.2f\n", nomeCidadeC2, estadoC2, pibCidadeC2);

    if(pibCidadeC1 > pibCidadeC2){
        printf("Resultado: Carta 1 (%s) venceu!", nomeCidadeC1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", nomeCidadeC2);
    }

    return 0;
}
