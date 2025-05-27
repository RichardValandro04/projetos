#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Declarando variáveis e inicializando o rand
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    //Menu Interativo
    printf("=-=-=-=-=-= Jogo de Jokenpô =-=-=-=-=-=\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n2. Papel\n3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    //Definindo escolha do computador
    escolhaComputador = rand() % 3 + 1;

    //Switch para exibir escolha do jogador e do computador
    switch(escolhaJogador){
        case 1:
            printf("Jogador: Pedra - ");
            break;
        case 2:
            printf("Jogador: Papel - ");
            break;
        case 3:
            printf("Jogador: Tesoura - ");
            break;
    
    default:
        printf("Opção Inválida. Tente Novamente!\n");
        break;
    }

    switch(escolhaComputador){
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
    }

    //Implementando lógica para saber quem ganhou
    if(escolhaComputador == escolhaJogador){
        printf("### Jogo Empatou! ###\n");
    }
    else if ((escolhaJogador == 1) && (escolhaComputador == 3) || 
             (escolhaJogador == 2) && (escolhaComputador == 1) ||
             (escolhaJogador == 3) && (escolhaComputador == 2))
    {
        printf("### Parabéns. Você Ganhou! ###\n");
    }else{
        printf("### Você Perdeu! ###\n");
    }


    return 0;
}