#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tAluno {
    char curso[30];
    char nome[30];
    char endereco[50];
    char matricula[10];
};

struct tAluno gAlunos[100];
int i;

unsigned int consultaAlunosPorCurso(char *curso){
int counter=0;
for(i=0;i<100;i++){
    if(stricmp(gAlunos[i].curso,"computacao") == 0){
        counter++;

    }
}
   return counter;
}

teste(char *curso){

printf("%s\n",gAlunos[0].curso);


}

int main(){
    int comput;
    setbuf(stdin,NULL);
    for(i=0;i<3;i++){
        printf("Insira o Curso do aluno#%d:\n",i+1);
        scanf(" %[^\n]s",gAlunos[i].curso);
        printf("Insira o Nome do Aluno#%d:\n",i+1);
        scanf(" %[^\n]s",gAlunos[i].nome);
        printf("Insira o Endereco do Aluno#%d:\n",i+1);
        scanf(" %[^\n]s",gAlunos[i].endereco);
        printf("Insira a Matricula do Aluno#%d:\n",i+1);
        scanf(" %[^\n]s",gAlunos[i].matricula);
        }
        printf("%s\n",gAlunos[0].curso);

    comput = consultaAlunosPorCurso(gAlunos[i].curso);
    system("cls");
    puts("********************************************\n");
    printf("Alunos cadastrados em computacao: %d ",comput);

    return 0;
    }
