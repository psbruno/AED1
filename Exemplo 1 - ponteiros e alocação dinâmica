#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    int nRA;// vetor para simular o RA
    int nRU;//vetor pra representar numero do RU
}Unifesp;

typedef struct{
    Unifesp Prof;//da pra supor que um prof tem todos os dados que um aluno tem
    char UC[10];
}Prof;

void imprime(Unifesp **Aluno, Prof *professor){//Como Aluno é uma matriz, é necessário utilizar ** para receber na funcao
       int i;
         for(i=0;i<10;i++){
        printf("aluno grad %d - ",i);
        printf("%s ", Aluno[0][i].nome);
        printf("%d ", Aluno[0][i].nRA);
        printf("%d \n", Aluno[0][i].nRU);
    }
       for(i=0;i<5;i++){
        printf("aluno pos %d - ",i);
        printf("%s ", Aluno[1][i].nome);
        printf("%d ", Aluno[1][i].nRA);
        printf("%d \n", Aluno[1][i].nRU);
    }

    printf("\n\n");
    for(i=0;i<7;i++){
        printf("professor %d - ",i);
        printf("%s ", professor[i].UC);
        printf("%s ", professor[i].Prof.nome);
        printf("%d ", professor[i].Prof.nRA);
        printf("%d \n", professor[i].Prof.nRU);
    }


}
int main() {
    Unifesp *Aluno[2];// vetor de ponteiro para dois tipos de alunos: graduacao (*Aluno[0]), pos-graduacao (*Aluno[1])
    Prof *professor;
    int i,aux;

    Aluno[0]=(Unifesp *)malloc(10*sizeof(Unifesp));//"abre vaga" pra 10 alunos de graduacao
    Aluno[1]=(Unifesp *)malloc(5*sizeof(Unifesp));//"abre vaga" pra 5 alunos de pos

    professor=(Prof *)malloc(7*sizeof(Prof));//supoe que vai precisar de 7 profs

    for(i=0;i<10;i++){//laco pra cadastrar os 10 alunos de graduacao (representado por Aluno[0],vc pode pensar como a primeira linha da matriz)
        scanf("%s", &Aluno[0][i].nome);
        scanf("%d", &Aluno[0][i].nRA);
        scanf("%d", &Aluno[0][i].nRU);
    }

    for(i=0;i<5;i++){//laco pra cadastrar os 5 alunos de pos (representado por Aluno[1]; segunda linha da matriz)
        scanf("%s", &Aluno[1][i].nome);
        scanf("%d", &Aluno[1][i].nRA);
        scanf("%d", &Aluno[1][i].nRU);
    }

    for(i=0;i<7;i++){//laco pra cadastrar os 7 profs
        scanf("%s", &professor[i].UC);
        scanf("%s", &professor[i].Prof.nome);//percebe que vc usa Prof, o nome da sua struct professor (q contem outra struct)
        scanf("%d", &professor[i].Prof.nRA);//a sintaxe fica assim, usando pontos pois prof tambem é um vetor
        scanf("%d", &professor[i].Prof.nRU);//caso prof fosse uma variavel, nao um vetor, seria usado "->" em vez de "."
    }

    printf("\n\n");
    imprime(Aluno, professor);

    return 0;
}
