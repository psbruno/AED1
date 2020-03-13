
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
 
typedef struct{
    float valor;
    struct TPilha* prox;
}TPilha;//cada celula da pilha
 
typedef struct {
    int tamanho;//numero de elementos da pilha
    TPilha* PTopo;//ponteiro para a celula do topo
}Topo;//informacoes do topo
 
void inicia(Topo *ip1);
//void lechar(char *plet);
int desemp(Topo *ip1,float *v);
int emp(Topo *ip1, float v);
 
 
void inicia(Topo *ip1){
    ip1->tamanho=0;//tamanho comeca com zero
    ip1->PTopo=NULL;//"base"da pilha aponta para o nulo
}
 
void confc(Topo *ip1, char plet[]){//funcao para conferir caracteres
    int i;
    float v1=0,v2=0,v=0;
    for(i=0; plet[i]!='\0';i++){//percorre todos os caracteres do char inserido
        switch (plet[i]){
            case'+'://se for uma adicao:
 
            desemp(ip1, &v1);//desempilha um valor
            desemp(ip1, &v2);//desempilha mais um valor
            v = v2 + v1;//soma os dois
            emp(ip1, v);//empilha o resultado
            break;
 
       case'-'://se for uma subtracao:
 
            desemp(ip1, &v1);//desempilha um valor
            desemp(ip1, &v2);//desempilha mais um valor
            v = v2 - v1;//subtrai o primeiro valor desempilhado do segundo
            emp(ip1, v);//empilha o resultado
            break;
 
        case'/'://se for uma divisao:
 
            desemp(ip1, &v1);//desempilha um valor
            desemp(ip1, &v2);//desempilha mais um valor
            v = v2 / v1;//divide o primeiro valor desempilhado pelo segundo
            emp(ip1, v);//empilha o resultado
            break;
 
        case '*': //se for uma multiplicacao:
 
            desemp(ip1, &v1);//desempilha um valor
            desemp(ip1, &v2);//desempilha mais um valor
            v = v1 * v2;//multiplica os dois valores
            emp(ip1, v);//empilha o resultado
            break;
 
        default://se nao for um operador é um número, logo ele é lido e empilhado
            scanf("%f", &v);
            emp(ip1, v);
            break;
 
        }
    }
     printf("%f",v);//resultado final
 
}
 
int desemp(Topo *ip1,float *v){//funcao para desempilhar
    TPilha *aux;
    aux = ip1->PTopo;//a celula que esta no topo é duplicada, fazendo com que a celula que está logo abaixo dela seja apontada pela auxiliar tambem
    if(ip1->tamanho==0){//verifica se a pilha está vazia
        return 0;
    }
 
    *v=aux->valor;//o valor é recebido por referencia
    ip1->PTopo = aux->prox;//o topo passa a ser a celula que estava embaixo do topo antigo
    ip1->tamanho--;//tamanho é ajustado
    free(aux);//libera memoria que foi alocada em aux
    return 1;
}
int emp(Topo *ip1, float v){//funcao para empilhar
    TPilha *nova;
    nova=(TPilha *)malloc(sizeof(TPilha));//aloca memoria para uma nova celula3
    nova->valor=v;//preenche o valor da celula
    nova->prox = ip1->PTopo;//passa a apontar pra celula anterior da pilha
    ip1->PTopo=nova;//topo passa a ser a nova celula
    ip1->tamanho++;//tamanho é ajustado
 
    return 1;
}
 
int main() {
    char plet[51];//char com as operações
    Topo ip1;//topo da pilha
    inicia(&ip1);//inicia a pilha
    scanf("%s", plet);//le as operacoes
    confc(&ip1, plet);
    //lechar(&plet);//le e verifica a primeira entrada (vetor de char)
 
 
 
 
 
    return 0;
}
