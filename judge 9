#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int item;
    int verific;
    struct TNo *FilhoD;
    struct TNo *FilhoE;
}TNo;
typedef TNo *FNo;
 
FNo start(int a){
    TNo *AUX;
    AUX=(TNo*)malloc(sizeof(TNo));
    AUX ->item = a;
    AUX->FilhoE=NULL;
    AUX->FilhoD=NULL;
    return AUX;
 
}
int cria(int b,TNo *NEWF){
    TNo *aux;
    if(b>NEWF->item){
        if(NEWF->FilhoD!=NULL){
            cria(b,NEWF->FilhoD);
            return 1;
        }else {
            aux = (TNo *) malloc(sizeof(TNo));
            aux->item=b;
            aux->FilhoE=NULL;
            aux->FilhoD=NULL;
            NEWF->FilhoD = aux;
        }
 
    }
    if(b<NEWF->item) {
        if(NEWF->FilhoE!=NULL){
            cria(b,NEWF->FilhoE);
            return 1;
        }else {
            aux = (TNo *) malloc(sizeof(TNo));
            aux->item=b;
            aux->FilhoE=NULL;
            aux->FilhoD=NULL;
            NEWF->FilhoE = aux;
        }
    }
}
int busca( TNo *PRaiz){
    printf("(");
 
    printf("C%d", PRaiz->item);
 
    if(PRaiz->FilhoE!=NULL){
        busca(PRaiz->FilhoE);
        printf(")");
    }else{
        printf("()");
    }
 
    if(PRaiz->FilhoD!=NULL){
        busca(PRaiz->FilhoD);
        printf(")");
    }else{
        printf("()");
    }
 
    return 0;
}
FNo remover(TNo *PRaiz){
    TNo *Aux, *aux2;
    Aux=PRaiz;
 
    if(Aux->FilhoE!=NULL) {
 
        Aux = Aux->FilhoD;
        while(Aux->FilhoE!=NULL){
 
        Aux=Aux->FilhoE;
    }
    }else{
        if(Aux->FilhoD!=NULL) {
        Aux = Aux->FilhoD;
        while(Aux->FilhoE!=NULL){
        Aux=Aux->FilhoE;
    }
    }
    }
 
 
    if(PRaiz->FilhoE!=NULL){
        aux2=PRaiz->FilhoE;
    }else{
        aux2=NULL;
    }
    PRaiz->item=Aux->item;
    PRaiz->FilhoE=aux2;
    PRaiz->FilhoD=Aux->FilhoD;
    free(Aux);
    return PRaiz;
}
FNo buscasi(int b, TNo *PRaiz){
    TNo *AUXR=NULL;
    if(PRaiz->item==b){
        AUXR=remover(PRaiz);
        AUXR->verific=1;
        return AUXR;
    }
    if(PRaiz->FilhoE!=NULL){
        AUXR=buscasi(b,PRaiz->FilhoE);
        if(AUXR->verific==1){
            return AUXR;
        }
 
    }
 
    if(PRaiz->FilhoD!=NULL){
        AUXR=buscasi(b,PRaiz->FilhoD);
        if(AUXR->verific==1){
            return AUXR;
        }
    }
    return PRaiz;
}
 
int main() {
    int a,i,b,p;
    TNo *PRaiz,*PAUX;
    scanf("%d", &a);
 
    for(i =0;i<a;i++){
        scanf("%d",&b);
        if(i==0){
            PRaiz=start(b);
        }else {
           cria(b, PRaiz);
        }
    }
    p=b;
    scanf("%d",&b);
    PAUX=buscasi(b,PRaiz);
    if(PAUX->verific!=1){
        cria(b,PRaiz);
    }
    busca(PRaiz);
    printf(")");
 
    return 0;
