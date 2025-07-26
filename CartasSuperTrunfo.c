#include <stdio.h>

int main(){
    printf("Desafio Trunfo de Cartas\n\n");

    char estadodacarta1[3];
    char estadodacarta2[3];
    char codigodacarta1[5];
    char codigodacarta2[5];
    char nomedacidadecarta1[30];
    char nomedacidadecarta2[30];
    int populaçãodacarta1;
    int populaçãodacarta2;
    float areaemkm²dacarta1;
    float areaemkm²dacarta2;
    float pibdaprimeiracidade;
    float pibdasegundacidade;
    int pontosturisticoscarta1;
    int pontosturisticoscarta2;

    printf("Digite o Primeiro Estado: \n");
    scanf("%s", estadodacarta1);

    printf("Digite o Codigo da Primeira carta: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o Nome da Primeira cidade: \n");
    scanf("%s", nomedacidadecarta1);

    printf("Digite a População da Primeira cidade: \n");
    scanf("%d", &populaçãodacarta1);

    printf("Digite a area em km² da Segunda cidade: \n");
    scanf("%f", &areaemkm²dacarta1);

    printf("Digite o PIB da Primeira cidade: \n");
    scanf("%f", &pibdaprimeiracidade);

    printf("Digite os pontos Turisticos da Primeira cidade: \n");
    scanf("%d", &pontosturisticoscarta1);
    printf("\n\n");






    printf("Digite o Segundo Estado: \n");
    scanf("%s", estadodacarta2);

     printf("Digite o Codigo da Segunda carta: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o Nome da Segunda cidade: \n");
    scanf("%s", nomedacidadecarta2);

    printf("Digite a População da Segunda cidade: \n");
    scanf("%d", &populaçãodacarta2);

    printf("Digite a area em km² da Segunda cidade: \n");
    scanf("%f", &areaemkm²dacarta2);

    printf("Digite o PIB da Segunda cidade: \n");
    scanf("%f", &pibdasegundacidade);

    printf("Digite os pontos Turisticos da Segunda cidade: \n");
    scanf("%d", &pontosturisticoscarta2);
    printf("\n\n");


    printf("CARTA 1 - Nome do estado: = %s\n\n", estadodacarta1);
    printf("CARTA 1 - Codigo da carta: = %s\n\n", codigodacarta1);
    printf("CARTA 1 - Nome da cidade: = %s\n\n", nomedacidadecarta1);
    printf("CARTA 1 - População: %d\n\n", populaçãodacarta1);
    printf("CARTA 1 - Area em Km²: %.2f\n\n", areaemkm²dacarta1);
    printf("CARTA 1 - PIB: %.2f\n\n", pibdaprimeiracidade);
    printf("CARTA 1 - Pontos Turisticos: %d\n\n", pontosturisticoscarta1);
    printf("\n\n");


    printf("CARTA 2 - Nome do estado: = %s\n\n", estadodacarta2);
    printf("CARTA 2 - Codigo da carta: = %s\n\n", codigodacarta2);
    printf("CARTA 2 - Nome da cidade: = %s\n\n", nomedacidadecarta2);
    printf("CARTA 2 - População: %d\n\n", populaçãodacarta2);
    printf("CARTA 2 - Area em Km²: %.2f\n\n", areaemkm²dacarta2);
    printf("CARTA 2 - PIB: %.2f\n\n", pibdasegundacidade);
    printf("CARTA 2 - Pontos Turisticos: %d\n\n", pontosturisticoscarta2);

    return 0;
}