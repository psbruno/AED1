#include <stdio.h>
#include <stdlib.h>
typedef int TChave;
 
typedef struct {
TChave Chave;
 
    
} TItem;
 
typedef struct SNo *TArvBin;
 
 
 
typedef struct SNo {
TItem Item;
TArvBin Esq, Dir;
} TNo;
 
void PosOrdem(TArvBin No)
{
   printf("%d", No->Item);
 
}
 
int TArvBin_EhFolha(TArvBin No)
{
return ((No == NULL) || ((No->Esq == NULL) && (No->Dir == NULL)));
}
 
TArvBin TArvBin_Inicia()
{
return NULL;
}
 
TArvBin TArvBin_CriaNo(TItem x, TArvBin Esq, TArvBin Dir){
    TArvBin No;
    No = (TArvBin) malloc(sizeof(TNo));
    No->Item = x;
    No->Esq = Esq;
    No->Dir = Dir;
    printf("%d\n", No->Item);
    return No;
}
 
int Pesquisa(TItem *Em, int Esq, int Dir, TChave x){
    int Raiz;
    for (Raiz = Esq; Raiz <= Dir; Raiz++)
        if (Em[Raiz].Chave == x)
    return Raiz;
    
    return 0;
}
 
TArvBin Constroi(TItem *Pre, TItem *Em, int n){
    int No;
    No = 0;
    return ConstroiRecursivo(Pre, &No, Em, 0, n-1);
}
 
 ConstroiRecursivo(TItem *Pre, int *pNo,    TItem *Em, int Esq, int Dir){
    TArvBin pEsq, pDir;
    TItem Item;
    int Raiz;
    if (Esq <= Dir) {
        Item = Pre[(*pNo)++];
    Raiz = Pesquisa(Em, Esq, Dir, Item.Chave);
    pEsq = ConstroiRecursivo(Pre, pNo, Em, Esq, Raiz-1);
    pDir = ConstroiRecursivo(Pre, pNo, Em, Raiz+1, Dir);
    return TArvBin_CriaNo(Item, pEsq, pDir);
}
 
return TArvBin_Inicia();
}
 
int main() {
   int j,i,t,*v1,*v2,E=0,D;
    TNo *Raiz;
    Raiz = NULL;
    scanf("%d",&t);
    v1=(int*)malloc(t*sizeof(int));
    v2=(int*)malloc(t*sizeof(int));
    for(i=0;i<t;i++){
        scanf("%d",&v1[i]);
    }
    for(i=0;i<t;i++){
        scanf("%d",&v2[i]);
    }
 
    Raiz=Constroi(v1,v2,t);
    //printf("%d", Raiz->Item);
    //PosOrdem(Raiz);
    return 0;
}
