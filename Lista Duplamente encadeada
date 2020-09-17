#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    struct TLista *prox;
    struct TLista *ant;
}TLista;
TLista *Novo(int valor, TLista *ant){
    TLista *Aux=(TLista*)malloc(sizeof(TLista));

    Aux->prox=NULL;
    Aux->ant=ant;
    Aux->valor=valor;

    return Aux;
}
void Insere(TLista *Lista, int valor){
    TLista *aux=Lista;

    while(aux->prox!=NULL)
        aux=aux->prox;

    aux->prox=Novo(valor, aux);
}
void impinv(TLista *Lista,int numero){
    TLista *aux=Lista;
    printf("imprimindo do comeco pro fim pelos ponteiros anteriores\n");
    while(aux!=NULL){
        printf("Celula %d Valor: %d\n", numero, aux->valor);
        numero--;
        aux=aux->ant;
    }
    printf("\n\n\n\n");
}
void remocao(TLista *Lista){
    TLista *aux=Lista;
    int valor;

    printf("insira o valor para remocao");
    scanf("%d", &valor);

    while(valor!=aux->valor){
        if(aux==NULL){
            printf("Valor não está na lista\n");
            return;
        }
        aux=aux->prox;
    }


    TLista *AuxRemocao=aux->ant;

    AuxRemocao->prox=aux->prox;//seta o anterior do próximo


    AuxRemocao=aux->prox;
    AuxRemocao->ant=aux->ant;

    free(aux);

}

void imp(TLista *Lista, int numero){
    printf("Celula %d Valor: %d\n", numero, Lista->valor);


    if(Lista->prox!=NULL)
        imp(Lista->prox,numero+1);
    else{
        impinv(Lista,numero);
    }
}

int main(){
    TLista *Lista=NULL;//mesmo que funcao inicia
    TLista *Comeco=NULL;
    int i=0,j;
    int valor;
    printf("Digite um valor para a lista, se quiser encerrar, insira -1\n");
    scanf("%d", &valor);
    while(valor!=-1){
        if(Lista==NULL){
            Lista=Novo(valor, NULL);
            printf("Primeira celula :%d \n", Lista->valor);
            Comeco=Lista;
        }else
            Insere(Comeco,valor);

        imp(Comeco,1);

        printf("Digite um valor para a lista, se quiser encerrar, insira -1\n");
        scanf("%d", &valor);
    }
    int a;

    printf("digite 1 para remover\n");
    scanf("%d",&a);
    while(a==1){
        remocao(Comeco);

        printf("digite 1 para remover mais\n");
        scanf("%d",&a);
    }

    imp(Comeco,1);

    return 0;

}
