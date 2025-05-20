#include <stdio.h>

int main() {// Programa de cadastro de cartas do super trunfo
    
    //Declaraçao de variaveis
    
    //Variaveis para a entrada do nome do estado
    char estado1[50];
    char estado2[50];

    //Variavel para a entrada do codigo da carta
    char codigo1[10]; 
    char codigo2[10];

    //Variaveis para a entrada do nome da cidade
    char cidade1[50];
    char cidade2[50];

    //Variaveis para a entrada da quantidade populacional
    int populacao1;
    int populacao2;

    //Variaveis para a entrada da area da cidade
    float area1;
    float area2;

    //Variaveis para a entrada do PIB da cidade
    float pib1;
    float pib2;

    //Variaveis para a entrada da quantidade de pontos turisticos
    int pontos1;
    int pontos2;

    //Variaveis de retorno do calculo da densidade populacional dividindo população por area
    float densp1;
    float densp2;

    //Variaveis de retorno do calculo de PIB per capita dividindo PIB por população
    float pibc1;
    float pibc2;

    
        
    printf("Cadastre suas cartas do Super Trunfo \n");//Titulo do Programa de cadastramentos de duas cartas do super trunfo

      printf("\n");//espaço entre os cadastros

    printf("Cadastro da primeira carta\n\n");//Texto de introduçao do cadastro da primeira carta

    printf("Digite o nome do estado:\n");//cadastro do nome do estado
    scanf("%s", estado1);

    printf("Digite o codigo do estado:\n");//cadastro do codigo da carta
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

    printf("Digite o codigo do estado:\n");//cadastro do codigo da carta
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

    //Calculo da densidade populacional
    densp1 = (float) populacao1 / area1;
    densp2 = (float) populacao2 / area2;

    //Calculo do PIB per capita
    pibc1 =  pib1 / (float)populacao1;
    pibc2 =  pib2 / (float)populacao2;


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
    printf("A densidade populacional é %.2f\n", densp1);
    printf("O PIB per capita: %.2f\n", pibc1);

        printf("\n\n");//espaço entre as cartas cadastradas

    printf("Segunda carta cadastrada:\n");//Texto de apresentaçao da segunda carta cadastrada
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("A densidade populacional é %.2f\n", densp2);
    printf("O PIB per capta é: %.2f\n", pibc2);

    return 0;//retorno do programa  

}