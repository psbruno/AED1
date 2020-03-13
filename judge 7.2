#include <stdio.h>
#include <stdlib.h>
 
void inicia(int mat[1000][1000]){//inicia a matriz, comecando ela toda zerada
    int i,j;
    for(i=0;i<1000;i++){
        for(j=0;j<1000;j++){
            mat[i][j]=0;
        }
    }
}
 
void procp(int mat[1000][1000], int N){//procura a raiz (procp= procura (maior) pai
    int i=0,j=0,aux=0;
 
    while(aux==0){
        //printf("posicao %d %d - valor : %d\n",i+1,j+1,mat[i][j] );
 
        if(mat[i][j]==-1){
 
            j++;
            i=0;
        }
        if(mat[i][j]==0 || mat[i][j]==1){
            i++;
        }
        //printf("                    %d            ",N);
 
        if((i+1)==N){
 
            aux=(j+1);
        }
    //printf("valor aux: %d\n", aux);
 
    }
    printf("(%d",aux);
        procf(mat,aux,N);
    printf(")");
}
void procf(int mat[1000][1000],int aux, int N){//após encontrar a raiz, monta o resto da arvore
    int i;
 
    for(i=0;i<N;i++){
        if(mat[i][aux-1]==1){//caso o filho analisado tambem possua um filho
            printf("(%d", i+1);//esse filho eh impresso e analisado por meio da recursividade
            procf(mat,i+1,N);
            printf(")");
        }
 
 
    }
 
 
}
/*void analisaf(int i,int mat[1000][1000]){
 
}*/
 
void imprime(int mat[1000][1000],int n){//funcao para imprimir a matriz de adjascencia, usada apenas para testes
    int i,j;
 
 
    for(i=0;i<n;i++){
        for(j=0; j<n;j++){
            printf("%d ", mat[i][j]);
        }
    printf("\n");
    }
 
}
 
 
int main(){
    int M,N,i,mat[1000][1000],p,f;
    scanf("%d %d", &N,&M);
    inicia(mat);
    for(i=1; i<=M;i++){
        scanf("%d %d", &p,&f);
        p--;
        f--;
        mat[p][f]=-1;//indicar que possui um pai, logo nao eh raiz
        mat[f][p]=1;//indicar que eh pai de alguem
    }
 
    //imprime(mat, N);
    procp(mat,N);
    return 0;
 
}
