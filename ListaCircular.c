#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    struct TLista *prox;
}TLista;

TLista *Novo(TLista *Primeiro,int valor){
    TLista *aux;
    aux=(TLista*)malloc(sizeof(TLista));
    aux->valor=valor;
    aux->prox=Primeiro;

    return aux;
}
void Insere(TLista *Inicio, int valor){
    TLista *aux=Inicio;
     TLista *aux2;

    while(aux->prox!=Inicio)
        aux=aux->prox;

    aux2=Novo(aux->prox, valor);
    aux->prox=aux2;
    return;

}
void imprime(TLista *Inicio,TLista *celula){
    printf("%d ", celula->valor);
    if(celula->prox!=Inicio)
        imprime(Inicio,celula->prox);

}
TLista *remocao(TLista *Inicio, int NPR){//numero para remover
    TLista *aux=Inicio;
    TLista *ant=Inicio;


    if(NPR == Inicio->valor){
        while(aux->prox!=Inicio)
            aux=aux->prox;

        aux->prox=Inicio->prox;
        free(Inicio);
        aux=aux->prox;
        printf("\nRemocao no inicio\n Novo Inicio :%d \n", aux->valor);
        return aux;
    }

    while(aux->valor!=NPR){
        if(aux!=Inicio)
            ant=ant->prox;
        aux=aux->prox;
        if(aux==Inicio){
            printf("\nValor %d nao esta na lista!!!\n", NPR);
            return Inicio;
        }
    }
    ant->prox=aux->prox;
    free(aux);
    return Inicio;
}
void destroi(TLista *Inicio, TLista *Celula){
    TLista *aux=Celula->prox;
    printf("DESTRUINDO %d\n", Celula->valor);
    if(Inicio!=Celula->prox){
        free(Celula);
        destroi(Inicio,aux);
    }

}

int main(){
    int a,i,j;
    int valor;
    TLista *Lista=NULL;
    TLista *Inicio;

    printf("insira 1 pra inserir um valor, 0 pra sair\n");
    scanf("%d", &a);

    if(a==0)
        return 0;

    printf("insira um valor\n");
    scanf("%d", &valor);
    Lista=(TLista*)malloc(sizeof(TLista));
    Lista->valor=valor;
    Lista->prox=Lista;

    Inicio=Lista;

    printf("insira 1 pra inserir um valor,2 para remover, 3 para imprimir e 4 para destruir\n");
        scanf("%d", &a);

    while(a>0){
        if(a==1){
            printf("insira um valor\n");
            scanf("%d", &valor);
            Insere(Inicio,valor);
        }else if(a==2){
            printf("insira um valor pra remover\n");
            scanf("%d", &valor);
            Inicio=remocao(Inicio, valor);
            printf("\n\n");
        }else if(a==3){
            printf("%d ",Inicio->valor);
            imprime(Inicio,Inicio->prox);
            printf("\n\n");
        }


        printf(" insira 1 pra inserir um valor,2 para remover, 3 para imprimir e -1 para destruir\n");
        scanf("%d", &a);
    }

    printf("\n\n imprimindo lista:\n");
    imprime(Inicio,Inicio->prox);
    printf("\n");

    //A prof não citou nenhuma funcao pra destruir a lista, só fiz pra ilustrar como q ficaria

    destroi(Inicio,Inicio->prox);
    printf("DESTRUINDO %d\n", Inicio->valor);
    free(Inicio);

    return 0;

}
