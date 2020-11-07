#include <stdio.h>
#include <stdlib.h>
 
 
typedef struct{
    char n[20];
}Nome;
 
typedef struct{
    int pos;
    Nome nc;
    struct crianca *ant,*prox;
}crianca;
 
typedef struct{
    crianca *com,*fim;
    int tamanho;
}Tcrianca;
 
 
int remover(int n, int *k, Tcrianca *Icrianca){
    if(Icrianca->tamanho==1 && n==1){//se soh houver um item na lista
        printf("%s", Icrianca->com->nc.n);
        return 0;
    }
    int i;
    crianca *aux,*aux2,*aux3,*aux4;
 
    aux=Icrianca->com;//auxiliar recebe a comeco da lista
 
    for(i=0; i<n;i++){
        if (i == *k) {//se a crianca a ser removida é a certa,é confere se sua posicao é a primeira, ultima ou se ela esta no meio da lista
            printf("%s\n", aux->nc.n);
            if (aux->pos==0) {//confere se é a primeira posicao
                Icrianca->com = aux->prox;//se for, o primeiro item passa a ser o proximo item
                Icrianca->com->pos--;//logo, a posicao tambem é decrementada
                aux2=Icrianca->com->prox;//auxiliar para decrementar 1 de todos os itens da lista
                while(aux2!=NULL){//diminui todos os itens
                    aux2->pos--;
                    aux2=aux2->prox;
                }
                free(aux);//free na primeira celula
                Icrianca->tamanho--;//tamanho ajustado
                return 1;
            } else if (aux->prox == NULL) {//confere se é o ultimo item da lista
                Icrianca->fim = aux->ant;//se for, só apaga ele e ajusta o ponteiro do fim
                free(aux);
                Icrianca->tamanho--;
                return 1;
            } else if(aux->prox!=NULL && aux->ant!= NULL) {//se for um item no meio da lista
                aux2 = aux->ant;//o anterior e o proximo item sao guardados em auxiliares
                aux3 = aux->prox;
                aux2->prox = aux->prox;//ponteiro proximo eh ajustado
                aux3->ant = aux->ant;//ponteiro anterior eh ajustado
                Icrianca->tamanho--;//tamanho eh ajustado
                free(aux);
                while(aux3!=NULL){//posicoes sao ajustadas
                    aux3->pos--;
                    aux3=aux3->prox;
                }
                return 1;
            }
        }else{//enquanto nao for, fica passando ate o item com a posicao corresepondente
            aux=aux->prox;
        }
 
    }
    /*while(aux3=NULL){
        aux3->pos--;
        aux3=aux3->prox;
    }*/
 
}
 
 
void insere(int n, Tcrianca *Icrianca){
    int i;
    crianca *aux;
    for(i=0;i<n;i++ ) {//já le todas as n criancas
 
        aux = (crianca *) malloc(sizeof(crianca));
        aux->pos=i;//posicao de cada crianca
        aux->prox=NULL;//proximo sempre aponta pro nulo
        scanf("%s",aux->nc.n );//le um valor que seria o nome da crianca
        if(i==0){//se for o primeiro item
            Icrianca->com=aux;//esse item é o comeco
            Icrianca->fim=aux;//e o fim da lista
            aux->ant=NULL;//e como é o primeiro elemento, nao tem elemento anterior
        }else{//se nao for o primeiro elemento
            aux->ant=Icrianca->fim;//o fim nao é mais o mesmo; insercao no fim da lista
            Icrianca->fim->prox=aux;//o fim antigo agora aponta para o proximo item
            Icrianca->fim=aux;//o fim passa a ser o item que acabou de ser inserido
        }
 
 
        Icrianca->tamanho++;//ajusta o tamanho
    }
 
    aux=Icrianca->com;//auxiliar recebe o primeiro item da lista
    for(i=0;i<n;i++){//para encadear a lista do comeco para o fim
        aux=aux->prox;
    }
 
 
 
}
 
void inicia(Tcrianca *Icrianca){
 
    (Icrianca->com)=(crianca *)malloc(sizeof(crianca));//aloca memoria para o primeiro item
    Icrianca->tamanho=0;
    Icrianca->com=NULL;
    Icrianca->fim=NULL;
 
}
 
int main() {
    int n, k,x,auxk,i;
    Tcrianca Icrianca;
    crianca *aux;
    scanf("%d %d", &n, &k);
    auxk=k;//auxiliar recebe o numero (constante) de passadas
 
 
    inicia(&Icrianca);//funcao para iniciar a lista
 
    insere(n, &Icrianca);//funcao para inserir um item
 
    if(k>=n){//confere se o k inserido pelo usuario é maior que n, e se for, já ajusta a primeira crianca a perder de acordo com o numero de passadas
        k=0;
        for(x=0;x<auxk;x++){//ajusta em qual crianca vai estar a primeira passada
            k++;
            if(k>=n){
                k=0;
            }
        }
    }
 
    while(n>=0){
        remover(n,&k, &Icrianca);//funcao para remover um item da lista
        n--;
 
 
        if(k>=n){//mesmas verificacoes
            k=0;
        }
        for(x=0;x<auxk;x++){//ajusta em qual crianca vai estar a primeira passada
            k++;
            if(k==n){
                k=0;
            }
        }
    }
 
 
    return 0;
}
