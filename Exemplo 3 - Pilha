#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
    struct TPilha *baixo;
}TPilha;
typedef TPilha *FPilha;

FPilha inicia(TPilha *Pilha, int VP){
    Pilha->baixo=NULL;
    Pilha->num=VP;
    return Pilha;
};
FPilha push(TPilha *Pilha, int VP){
    TPilha *NovaCelula=(TPilha*)malloc(sizeof(TPilha));
    NovaCelula->baixo=Pilha;
    NovaCelula->num=VP;
    return NovaCelula;

}
void imp(TPilha *Pilha){
    if(Pilha!=NULL){
        printf("%d ", Pilha->num);
        imp(Pilha->baixo);
    }
}
FPilha pop(TPilha *Topo){
    TPilha *aux;

    aux=Topo;
    Topo=Topo->baixo;

    printf("desempilhando o valor ''%d'' \n", aux->num);

    free(aux);
    return Topo;
}
int main(){
    int a=1,VP,rec;
    TPilha *Topo;
    TPilha *Pilha=(TPilha*)malloc(sizeof(TPilha));
    printf("insira um numero pra empilhar: \n");
    scanf("%d", &VP);
    Topo=inicia(Pilha,VP);

    while(a==1){
        printf("insira um numero pra empilhar: \n");
        scanf("%d", &VP);
        Topo=push(Topo,VP);
        printf("quer continuar empilhando? 1 Sim, 2 Nao \n");
        scanf("%d", &a);
    }
    printf("\n\n\n\n\n -----------percorrendo pilha do topo pra base: ");
    TPilha *AuxTopo=Topo;

    while(Topo!=NULL){
        printf("%d ", Topo->num);
        Topo=Topo->baixo;
    }
    Topo=AuxTopo;

    /*printf("\ninsira 1 pra imprimir a pilha de novo, mas por recursao\n");
    scanf("%d", &rec);*/

    if(rec==1){
        imp(Topo);
    }


    printf("\n\n ------------desempilhando um a um ---------\n");
    while(Topo!=NULL){
        Topo=pop(Topo);
        imp(Topo);
        printf("\n");
    }
}
