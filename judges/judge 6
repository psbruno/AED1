#include <stdio.h>
#include <stdlib.h>
 
 
void start(int grafo[100][100]){//funcao para zerar todas as posiçoes da matriz de adjascencia
    int n=100, d=100,i,j;
 
 
    for(i=0;i<n;i++){
        for(j=0; j<d;j++){
            grafo[i][j]=0;
        }
    }
 
 
}
 
 
void aresta(int grafo[100][100]){//funcao para criar aresta
    int ui,vi;
    scanf("%d %d", &ui, &vi);
    grafo[vi-1][ui-1]=1;
}
 
void imprime(int grafo[100][100],int n){//funcao para imprimir a matriz de adjascencia, usada apenas para testes
    int i,j;
 
 
    for(i=0;i<n;i++){
        for(j=0; j<n;j++){
            printf("%d ", grafo[i][j]);
        }
    printf("\n");
    }
 
 
}
void sai(int grafo[100][100],int i,int n){//funcao para indicar na matriz que uma aresta sai de um vertice
    int j,cont=0;
    for(j=0;j<n;j++){
            if( grafo[i][j]==1){
                cont++;
            }
    }
    printf("%d", cont);
}
void chega(int grafo[100][100],int i,int n){//funcao para indicar na matriz que uma aresta chega de um vertice
    int k=0;
    int j,cont=0, vaux[100]={0};
    for(j=0;j<n;j++){
            if( grafo[j][i]==1){
                cont++;
                //printf("\n no %d ta chegando %d\n ", i+1, j+1);
                vaux[k]=j+1;
                k++;
            }
    }
    printf(" %d", cont);
    for(j=0;j<cont;j++){
        printf(" %d", vaux[j]);
    }
}
int main(){
    int i,j,n,d,ui,vi;
    int grafo[100][100];
    start(grafo);
    scanf("%d %d", &n, &d);
    for(i=0; i<d;i++){
     aresta(grafo);
 
    }
    //printf("%d %d\n", n,d);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(grafo[j][i]==1){
            //printf("%d %d\n",i+1,j+1);
            }
        }
 
    }
    for(i=0;i<n;i++){
        printf("%d ", i+1);
        sai(grafo,i,n);
 
        chega(grafo,i,n);
        printf("\n");
    }
 
 
 
    //printf("\n\n\n\n");
 
 
    //imprime(grafo,n);
    return 0;
 
}
