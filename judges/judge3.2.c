#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
typedef struct{
    int c;
    int P0;
    int Pi;
    struct ficha *prox;
}ficha;
 
typedef struct{
    int tamanho;
    ficha *com, *fim;
}Tficha;
 
int desenf(Tficha *Lutadores, int *L1){
    ficha *aux;
    if(Lutadores->tamanho==0){
        return 0;
    }
 
 
        *L1 = Lutadores->com->Pi;
        aux = Lutadores->com;
 
        Lutadores->com = Lutadores->com->prox;
        Lutadores->tamanho--;
        free(aux);
 
 
}
 
 
void enf(int i, int v,int pi, Tficha *Lutadores){
    ficha *novo;
    novo=(ficha*)malloc(sizeof(ficha));
    novo->Pi=v;
    novo->P0=pi;
    novo->c=i;
    novo->prox=NULL;
    if(Lutadores->com==NULL){
        Lutadores->com=novo;
    }else{
        Lutadores->fim->prox=novo;
    }
 
 
    Lutadores->fim=novo;
    Lutadores->tamanho++;
 
 
}
void luta(int n,int k,  Tficha *Lutadores){
    int L1,L2,auxc,auxp0,auxc2,auxp02;
    while(Lutadores->tamanho>1) {
        auxc=Lutadores->com->c;
        auxp0=Lutadores->com->P0;
        desenf(Lutadores, &L1);
        auxc2=Lutadores->com->c;
        auxp02=Lutadores->com->P0;
        desenf(Lutadores, &L2);
        if(L1>L2){
            L1=(L1-L2)+k;
            if(L1>auxp0){
                L1=auxp0;
            }
            enf(auxc, L1,auxp0,Lutadores);
        }else if(L2>L1){
            L2=(L2-L1)+k;
            if(L2>auxp02){
                L2=auxp02;
            }
            enf(auxc2, L2,auxp02,Lutadores);
        }else if(L1==L2){
            L1=0+k;
            if(L1>auxp0){
                L1=auxp0;
            }
            enf(auxc, L1,auxp0, Lutadores);
 
        }
        n--;
    }
    printf("%d", Lutadores->com->c);
}
 
 
void inicia(Tficha *Lutadores){
    Lutadores->tamanho=0;
    Lutadores->com=NULL;
    Lutadores->fim=NULL;
}
 
int main(){
    int i=0,n,k,aux;
    Tficha Lutadores;
    scanf("%d %d", &n, &k);
    n=pow(2,n);
 
    inicia(&Lutadores);
    while(i<n){
        scanf("%d", &aux);
 
        enf(i+1,aux,aux, &Lutadores);
 
    i++;
    }
    luta(n,k,&Lutadores);
 
    return 0;
}
