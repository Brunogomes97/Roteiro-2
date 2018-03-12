#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;
struct banda{
    char nome[20];
    char tipo[10];
    int integrant[5];
    int pos[5];
    };


    struct banda x[5];

void preenStructs(){

    for(i=0;i<5;i++){
        printf("Insira o nome da Banda #%d:\n",i+1);
        scanf(" %[^\n]s",x[i].nome);
        printf("Insira o tipo de musica tocado #%d:\n",i+1);
        scanf(" %[^\n]s",x[i].tipo);
        printf("Insira o numero de integrantes #%d:\n",i+1);
        scanf("%d",&x[i].integrant[i]);
        printf("Insira a posicao no rank #%d:\n",i+1);
        scanf("%d",&x[i].pos[i]);

    }
    system("cls");
    for(i=0;i<5;i++){
        puts("***********************\n");
        printf("Ficha da Banda: #%d\n",i+1);
        printf("Nome: %s\n",x[i].nome);
        printf("Genero: %s\n",x[i].tipo);
        printf("Integrantes: %d\n",x[i].integrant[i]);
        printf("Posicao no Rank: %d\n",x[i].pos[i]);
    }
}

void PosStruct(){
    printf("\n");
    printf("Selecione uma posicao no ranking:\n");
    scanf("%d",&i);
    i--;
    puts("***********************\n");
    printf("Ficha da Banda: #%d\n",i+1);
    printf("Nome: %s\n",x[i].nome);
    printf("Genero: %s\n",x[i].tipo);
    printf("Integrantes: %d\n",x[i].integrant[i]);
    printf("Posicao no Rank: %d\n",x[i].pos[i]);
    printf("\n");

}
void TipoStruct(){
    char gen[10];
    printf("Insira o genero desejado:\n");
    scanf(" %[^\n]s",&gen);

    for(i=0;i<5;i++){
        if(strcmp(gen,x[i].tipo)==0){
            puts("***********************\n");
            printf("Ficha da Banda: #%d\n",i+1);
            printf("Nome: %s\n",x[i].nome);
            printf("Genero: %s\n",x[i].tipo);
            printf("Integrantes: %d\n",x[i].integrant[i]);
            printf("Posicao no Rank: %d\n",x[i].pos[i]);

        }
    }
    printf("\n");
}

void NomeStruct(){
    char bd[10];
    puts("*************************\n");
    printf("Insira o nome da banda:\n");
    scanf(" %[^\n]s",bd);

    for(i=0;i<5;i++){
        if(strcmp(bd,x[i].nome) == 0)
            printf("Pertence a uma das bandas favoritas!\n");
        else
            printf("Nao pertence!\n");
        }
    }

int main(){
    char s[2];
    printf("Preecher as bandas?(S/N)\n");
    scanf("%s",&s);
    if(s[0] == 's'||s[0] == 'S'){
    preenStructs();
    }else{ return 0;}

    printf("Deseja verificar a posicao de uma banda?(S/N)\n");
    scanf("%s",&s);
    if(s[0] == 's' ||s[0] == 'S'){
    system("cls");
    PosStruct();
            }

    printf("Deseja verificar um genero de uma banda?(S/N)\n");
    scanf("%s",&s);
    if(s[0] == 's' ||s[0] == 'S'){
    system("cls");
    TipoStruct();
    }

    printf("Deseja verificar se o nome de uma banda esta entre as favoritas?(S/N)\n");
    scanf("%s",&s);
    if(s[0] == 's' ||s[0] == 'S'){
    system("cls");
    NomeStruct();
    }




    return 0;
}
