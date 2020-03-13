#include <stdio.h>
#include <string.h>
 
typedef struct{
    char nome[20];
    int pos;
}ficha;//"ficha", contendo nome e posicao de cada crianca
 
typedef struct{
    ficha dadosc[1000];//dados da crianca
    int prim, ult;
}InfoFicha;//informacoes da lista
 
 
void inicia(int n,InfoFicha *crianca){
    crianca->prim=0;
    crianca->ult=0;
}
 
int insere(int n, InfoFicha *crianca){
    int i;
    if(crianca->ult==1000){//confere se a lista está cheia
        return 0;
    }
    if(crianca->prim==0){//confere se é o primeiro item
        crianca->prim++;
    }
    for (i = 0; i < n; i++) {//insere n criancas
        scanf("%s", crianca->dadosc[i].nome);
        crianca->dadosc[i].pos = i + 1;
        crianca->ult++;
 
    }
    return 1;
}
int remover(int *k, int *n, InfoFicha *crianca){
    int i;
 
 
 
    printf("%s\n",crianca->dadosc[*k].nome);//imprime a crianca que perdeu
 
    for(i=*k;i<*n-1;i++) {//ajusta a lista
        crianca->dadosc[i]=crianca->dadosc[i+1];//ajusta o vetor com as criancas, removendo (sobreescrevendo) a próxima em cima da ganhadora, até o fim da lista
        crianca->dadosc[i].pos--;//ajusta o tamanho da lista
    }
    return 1;
}
 
int main() {
    int n, k,x,auxk;
    InfoFicha crianca;
    scanf("%d %d", &n, &k);
    auxk=k;
 
    inicia(n,&crianca);//comeco e fim da fila recebe 0
 
    insere(n, &crianca);//adiciona uma crianca a lista
 
    while(n>1) {//enquanto houver mais de uma crianca restante
        remover(&k, &n, &crianca);//chama a funcao para remover a crianca que perdeu
        n--;//descresce o numero de criancas
        if(k>=n){//verifica se a crianca do indice 0 recebe a primeira passada
            k=0;
        }
            for(x=0;x<auxk;x++){//ajusta em qual crianca vai estar a primeira passada
                k++;
                if(k>=n){
                    k=0;
                }
            }
 
    }
 
    printf("%s", crianca.dadosc[0].nome);//imprime a crianca vencedora
 
}
