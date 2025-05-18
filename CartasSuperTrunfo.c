#include <stdio.h>

int main() {// Programa de cadastro de cartas do super trunfo
    
    //Declaraçao de variaveis

    char estado1[50];//cadastro de cartas numero 1
    char estado2[50];//cadastro de cartas numero 2

    char codigo1[10];//cadastro de cartas numero 1
    char codigo2[10];//cadastro de cartas numero 2

    char cidade1[50];//cadastro de cartas numero 1
    char cidade2[50];//cadastro de cartas numero 2

    int populacao1;//cadastro de cartas numero 1
    int populacao2;//cadastro de cartas numero 2

    float area1;//cadastro de cartas numero 1
    float area2;//cadastro de cartas numero 2

    float pib1;//cadastro de cartas numero 1
    float pib2;//cadastro de cartas numero 2

    int pontos1;//cadastro de cartas numero 1
    int pontos2;//cadastro de cartas numero 2
        
    printf("Cadastre suas cartas do Super Trunfo \n");//Titulo do Programa de cadastramentos de duas cartas do super trunfo

      printf("\n");//espaço entre os cadastros

    printf("Cadastro da primeira carta\n\n");//Texto de introduçao do cadastro da primeira carta

    printf("Digite o nome do estado:\n");//cadastro do nome do estado
    scanf("%s", estado1);

    printf("Digite o codigo do estado:\n");//cadastro do codigo do estado
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");//cadastro do nome da cidade
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade:\n");//cadastro da populacao da cidade
    scanf("%d", &populacao1);

    printf("Digite a area da cidade:\n");//cadastro da area da cidade
    scanf("%f", &area1);

    printf("Digite o pib da cidade:\n");//cadastro do pib da cidade
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");//cadastro da quantidade de pontos turisticos
    scanf("%d", &pontos1);

    printf("Primeira carta cadastrada!!");//Finalizaçao do cadastro da primeira carta

        printf("\n\n");//espaço entre os cadastros

    printf("Cadastro da segunda carta\n");//Texto de introduçao do cadastro da segunda carta
    
        printf("\n");//espaço entre os cadastros

    printf("Digite o nome do estado:\n");//cadastro do nome do estado
    scanf("%s", estado2);

    printf("Digite o codigo do estado:\n");//cadastro do codigo do estado
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");//cadastro do nome da cidade
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade:\n");//cadastro da populacao da cidade
    scanf("%d", &populacao2);

    printf("Digite a area da cidade:\n");//cadastro da area da cidade
    scanf("%f", &area2);

    printf("Digite o pib da cidade:\n");//cadastro do pib da cidade
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos:\n");//cadastro da quantidade de pontos turisticos
    scanf("%d", &pontos2);

    printf("Segunda carta cadastrada!!");//Finalizaçao do cadastro da segunda carta

        printf("\n\n");//espaço entre os cadastros

    printf("Cadastro finalizado!!");//Texto de finalizaçao do cadastro

    printf("\n\n");//espaço entre os cadastros

        printf("\n\n");//espaço entre os cadastros

    printf("As cartas cadastradas foram:\n\n");//Texto de apresentaçao das cartas cadastradas

    printf("Primeira carta cadastrada:\n");//Texto de apresentaçao da primeira carta cadastrada
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

        printf("\n\n");//espaço entre as cartas cadastradas

    printf("Segunda carta cadastrada:\n");//Texto de apresentaçao da segunda carta cadastrada
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;//retorno do programa  

}