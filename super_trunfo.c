#include <stdio.h>
#include <string.h>
//ola
int main(){
    //Declarando Variáveis
    char estado_1, estado_2;
    char codigo_1[4], codigo_2[4];
    char nome_cidade_1[25], nome_cidade_2[25];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densidade_1, densidade_2;
    float pib_pc_1, pib_pc_2;
    
    //Identificando ação realizada - carta 1 de 2
    printf("SUPER TRUNFO - Cadastrando Carta 1 de 2\n\n");

    //Capturando dados da primeira carta
    printf("Digite uma letra entre A e H: ");
    scanf("%c", &estado_1);

    printf("\nDigite o código da carta: ");
    scanf("%s", &codigo_1);
    getchar(); // necessário limpar o \n deixado pelo scanf no buffer para que o fgets funcione

    printf("\nDigite o nome da cidade: ");
    fgets(nome_cidade_1, 25, stdin);
    nome_cidade_1[strcspn(nome_cidade_1, "\n")] = 0;

    printf("\nDigite a população da cidade: ");
    scanf("%d", &populacao_1);

    printf("\nDigite a área da cidade em km²: ");
    scanf("%f", &area_1);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib_1);

    printf("\nDigite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_1);

    densidade_1 = populacao_1 / area_1;
    pib_pc_1 = (pib_1 * 1000000000) / populacao_1; //Multiplicando por 1bi para obter o valor inteiro do pib
    getchar();

    
    //Identificando ação realizada - carta 2 de 2
    printf("\n\nSUPER TRUNFO - Cadastrando Carta 2 de 2\n\n");
     
    //Capturando dados da segunda carta
    printf("Digite uma letra entre A e H: ");
    scanf("%c", &estado_2);

    printf("\nDigite o código da carta: ");
    scanf("%s", &codigo_2);
    getchar(); // necessário limpar o \n deixado pelo scanf no buffer para que o fgets funcione

    printf("\nDigite o nome da cidade: ");
    fgets(nome_cidade_2, 25, stdin);
    nome_cidade_2[strcspn(nome_cidade_2, "\n")] = 0;

    printf("\nDigite a população da cidade: ");
    scanf("%d", &populacao_2);

    printf("\nDigite a área da cidade em km²: ");
    scanf("%f", &area_2);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib_2);

    printf("\nDigite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_2);

    densidade_2 = populacao_2 / area_2;
    pib_pc_2 = (pib_2 * 1000000000) / populacao_2; //Multiplicando por 1bi para obter o valor inteiro do pib

    getchar();


    //Identificando ação realizada - cadastro efetuado com sucesso
    printf("\n\nCadastros realizados com sucesso, acompanhe as informações abaixo\n\n");
    
    //Exibindo informações primeira carta
    printf("CARTA 1:\nEstado: %c \nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPib per Capta: %.2f reais", estado_1, codigo_1, nome_cidade_1, populacao_1, area_1, pib_1, pontos_turisticos_1, densidade_1, pib_pc_1);

    //Exibindo informações segunda carta
    printf("\n\nCARTA 2:\nEstado: %c \nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPib per Capta: %.2f reais \n", estado_2, codigo_2, nome_cidade_2, populacao_2, area_2, pib_2, pontos_turisticos_2, densidade_2, pib_pc_2);

}