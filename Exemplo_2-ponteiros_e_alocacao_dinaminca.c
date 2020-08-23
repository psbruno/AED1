#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char Nome[20];
    char genero[20];
    int AnoLanc;
}TJogo;

typedef struct{
    char nome[20];
    int idade;
    int njogos;
    TJogo *Colecao;
}TDono;

void imprime(TDono *dono){
    TJogo *aux;
    int i;
    aux=dono->Colecao;

    printf("dono: %s, idade: %d, numero de jogos: %d\n\n",dono->nome,dono->idade,dono->njogos);


    for(i=0;i<dono->njogos;i++){
        printf("jogo %d---- %s %s %d\n",i, aux[i].Nome,aux[i].genero,aux[i].AnoLanc);
    }

}

int main(){
    TJogo *jogos;
    TDono *dono;
    int NumJogos,i;
    dono=(TDono*)malloc(sizeof(TDono));


    printf("insira o nome e a idade do dono da colecao\n");
    scanf("%s %d", &dono->nome, &dono->idade);

    printf("Insira o numero de jogos \n");
    scanf("%d", &NumJogos);
    dono->njogos=NumJogos;


    jogos=(TJogo*)malloc(NumJogos*sizeof(TJogo));

    dono->Colecao=jogos;

    for(i=0;i<NumJogos;i++){
        printf("insira o nome, genero e ano de lancamento dos jogo %d\n",i+1);
        scanf("%s", &jogos[i].Nome);
        scanf("%s", &jogos[i].genero);
        scanf("%d", &jogos[i].AnoLanc);


    }
    imprime(dono);
    return 0;
}
