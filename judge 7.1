#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int N;
    struct TPessoa *filho;
    struct TPessoa *irmao;
    struct TPessoa *pai;
}TPessoa;
 
typedef TPessoa *PBUSCA;
 
typedef struct{
    TPessoa *PRaiz;
}TRaiz;
 
void imp(TPessoa *Arv){
    TPessoa *Aux;
 
    printf("(%d", Arv->N);
    if(Arv->filho!=NULL){
        //    printf(")");
        Aux=Arv->filho;
        imp(Aux);
        printf(")");
    }
    if(Arv->irmao!=NULL){
        printf(")");
        Aux=Arv->irmao;
        imp(Aux);
    }
 
}
void starta(TRaiz *Raiz,int p, int f){
    TPessoa *aux,*aux2;
    aux=(TPessoa*)malloc(sizeof(TPessoa));
    aux2=(TPessoa*)malloc(sizeof(TPessoa));
 
    Raiz->PRaiz=aux;
    aux->N=p;
    aux->pai=NULL;
    aux->irmao=NULL;
    aux->filho=aux2;
    aux2->N=f;
    aux2->filho=NULL;
    aux2->irmao=NULL;
    aux2->pai=aux;
}
 
PBUSCA busca(TPessoa *aux2, int p){
    //printf("----------------------------------analisando %d\n",aux2->N);
    if(aux2==NULL){//arvore vazia
        return NULL;
    }
    if(aux2->N==p){//caso seja o numero procurando
        //printf("______________________________________ACHEI O PAI %d\n",aux2->N);
        return aux2;
    }
    if(aux2->filho!=NULL){
        //printf("\n%d TEM FILHO\n",aux2->N);
        //aux2=aux2->filho;
        aux2=busca(aux2->filho,p);
        //printf("VOLTOU AQUI %d\n",aux2->N);
        if(aux2->N==p){
          //  printf("voltou %d\n",aux2->N);
            return aux2;
        }
    }
    if(aux2->irmao!=NULL){
        //printf("%d TEM IRMAO\n",aux2->N);
        //aux2=aux2->irmao;
        aux2=busca(aux2->irmao,p);
        return aux2;
    }else{
        aux2=aux2->pai;
       // printf("volta o pai de %d\n",aux2->N);
        return aux2;
    }
 
}
void insere(TRaiz *Raiz, int p,int f){
 
    PBUSCA AUX;
    TPessoa *aux, *aux2;
    aux=(TPessoa*)malloc(sizeof(TPessoa));
    aux->filho=NULL;
    aux->irmao=NULL;
    aux2=Raiz->PRaiz;
    //printf("RAIZ: %d BUSCANDO PAI\n", aux2->N);
    AUX=busca(aux2,p);
   // printf(" pai: %d\n",AUX->N);
    aux->pai=AUX;
    if(AUX->filho!=NULL){
     //  printf("novo irmao\n");
        AUX=AUX->filho;
        while(AUX->irmao!=NULL){
            AUX=AUX->irmao;
        }
 
 
        AUX->irmao=aux;
        aux->N=f;
        aux->filho=NULL;
        aux->irmao=NULL;
 
 
    }else if(AUX->filho==NULL){
 
        AUX->filho=aux;
 
        aux->N=f;
        aux->filho=NULL;
        aux->irmao=NULL;
    }
 
}
 
int main(){
 
    TRaiz Raiz;
    TPessoa *aux2;
    int M,N,i,p,f;
    scanf("%d %d", &N,&M);
    for(i=1; i<=M;i++){
        //printf("insira o pai e o filho \n");
        scanf("%d %d", &p,&f);
 
        if(i==1){
          //  printf("inserindo raiz\n");
            starta(&Raiz,p,f);
        }else{
            insere(&Raiz, p, f);
        }
    }
    aux2=Raiz.PRaiz;
    imp(aux2);
    printf(")");
 
    return 0;
}
