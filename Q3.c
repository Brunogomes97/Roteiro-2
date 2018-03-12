#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct jogadores{
    int jogador[24];

    }jogo;
jogo jp;




void VotosJogador(jogo jp,int votos){
    int j;
    int maior=0;
    int votomaior=0;
    float pcv,pcj;

    printf("Resultado da votacao:\n\n");

    pcv = votos;
    printf("Jogador       Votos          Porc. \n");

    for(j=0;j<=23;j++){
        pcj = jp.jogador[j];
        pcj = pcj/pcv;
        if(jp.jogador[j]>0){
            printf(" %d            %d           %.2f Porcento \n",j,jp.jogador[j],pcj*100);
        }
    }

    for(j=0;j<=23;j++){
        if(jp.jogador[j]>maior){
            maior=jp.jogador[j];
            votomaior = j;
            pcj = jp.jogador[j];
            pcj = pcj/pcv;
        }
    }
    printf("O melhor jogador foi o numero %d, com %d votos,correspondendo a %.2f porcento do total de votos.\n",votomaior,maior,pcj*100);
}



int main(){
    struct jogadores x;
    int i,v=0;

    for(i=1;i<24;i++){
        x.jogador[i]=0;
    }

    printf("Enquete: Quem foi o melhor jogador?\n");
    while(1){
        printf("Numero do Jogador (0=fim) : ");
        scanf("%d",&i);
        if(i == 0)
            break;

        if(i>23 || i<0){
            printf("Informe um valor entre 1 e 23 ou 0 para sair\n");

        }else{
            x.jogador[i]++;
            v++;
        }
    }
    VotosJogador(x,v);
    return 0;
    }
