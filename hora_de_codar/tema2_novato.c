#include <stdio.h>

int main(){
    
    //Declarando variáveis
    float umidade, temperatura;
    unsigned int estoque, estoqueMinimo = 1000;

    //Solicitando dados necessários
    printf("Digite a Temperatura: \n");
    scanf("%f", &temperatura);

    printf("Digite a Umidade: \n");
    scanf("%f", &umidade);

    printf("Digite o Estoque: \n");
    scanf("%u", &estoque);


    //Verificações
    if(temperatura > 30){ //temperatura
        printf("TEMPERATURA ELEVADA!!!!!\n");
    }else{
        printf("Temperatura está dentro dos parâmetros!\n");
    }

    if(umidade > 50){ //umidade
        printf("UMIDADE ELEVADA!!!!!\n");
    }else{
        printf("Umidade está dentro dos parâmetros!\n");
    }

    if(estoque < estoqueMinimo){ //estoque
        printf("ESTOQUE ABAIXO DO MÍNIMO!!!!!\n");
    }else{
        printf("Estoque normal!\n");
    }

    return 0;
}