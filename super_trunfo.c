#include <stdio.h>
#include <string.h>

int main(){
    //Declarando Variáveis
    char estado_1, estado_2;
    char codigo_1[4], codigo_2[4];
    char nome_cidade_1[25], nome_cidade_2[25];
    unsigned long int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densidade_1, densidade_2;
    float pib_pc_1, pib_pc_2;
    float super_poderC1, super_poderC2;
    float densidadeInversa1, densidadeInversa2;
    int escolhaComparacao;

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
    scanf("%lu", &populacao_1);

    printf("\nDigite a área da cidade em km²: ");
    scanf("%f", &area_1);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib_1);

    printf("\nDigite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_1);

    getchar();

    printf("\n----------------------------------------------------------------------------\n");

    
    //Identificando ação realizada - carta 2 de 2
    printf("SUPER TRUNFO - Cadastrando Carta 2 de 2\n");
     
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
    scanf("%lu", &populacao_2);

    printf("\nDigite a área da cidade em km²: ");
    scanf("%f", &area_2);

    printf("\nDigite o PIB da cidade: ");
    scanf("%f", &pib_2);

    printf("\nDigite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_2);

    getchar();
    

    //Calculando Densidade e Pib PerCapta
    densidade_1 = (float)populacao_1 / area_1;
    pib_pc_1 = (pib_1 * 1e9) / populacao_1; //Multiplicando por 1bi para obter o valor inteiro do pib
    
    densidade_2 = (float)populacao_2 / area_2;
    pib_pc_2 = (pib_2 * 1e9) / populacao_2; //Multiplicando por 1bi para obter o valor inteiro do pib

    
    //Calculando Densidade Inversa e Super Poder
    densidadeInversa1 = 1 / densidade_1;
    densidadeInversa2 = 1 / densidade_2;

    super_poderC1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turisticos_1 + pib_pc_1 + densidadeInversa1;
    super_poderC2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turisticos_2 + pib_pc_2 + densidadeInversa2;


    //Identificando ação realizada - cadastro efetuado com sucesso
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Cadastros realizados com sucesso, acompanhe as informações abaixo\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    
    //Exibindo informações primeira carta
    printf("CARTA 1:\nEstado: %c \nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPib per Capta: %.2f reais\n", estado_1, codigo_1, nome_cidade_1, populacao_1, area_1, pib_1, pontos_turisticos_1, densidade_1, pib_pc_1);

    printf("----------------------------------------------------------------------------\n");

    //Exibindo informações segunda carta
    printf("CARTA 2:\nEstado: %c \nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPib per Capta: %.2f reais\n", estado_2, codigo_2, nome_cidade_2, populacao_2, area_2, pib_2, pontos_turisticos_2, densidade_2, pib_pc_2);


    /*Comparação de Cartas - COMENTADO PARA RECEBER NOVA FUNCIONALIDADE DE MENU INTERATIVO
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Comparação de Cartas:\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("População: %u\n", populacao_1 > populacao_2);
    printf("Área: %u\n", area_1 > area_2);
    printf("Pib: %u\n", pib_1 > pib_2);
    printf("Pontos Turísticos: %u\n", pontos_turisticos_1 > pontos_turisticos_2);
    printf("Densidade Populacional: %u\n", densidade_1 < densidade_2);
    printf("Pib Per Capta: %u\n", pib_pc_1 > pib_pc_2);
    printf("Super Poder: %u\n", super_poderC1 > super_poderC2);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    
    //Comparação Atributo Escolhido
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Comparação de Cartas (Atributo: População)\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("Carta 1 - %s: %lu\n", nome_cidade_1, populacao_1);
    printf("Carta 2 - %s: %lu\n", nome_cidade_2, populacao_2);
    
    if(populacao_1 > populacao_2){
        printf("Carta 1 (%s) Venceu!\n", nome_cidade_1);
    }else{
        printf("Carta 2 (%s) Venceu!\n", nome_cidade_2);
    }
    */
    
    //Menu interativo

    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("COMPARAÇÃO DE ATRIBUTOS\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("")



    return 0;    
}
