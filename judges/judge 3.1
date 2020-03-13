#include <stdio.h>
#include <math.h>
 
typedef struct{
    int c;
    int P0;
    int Pi;
}ficha;
 
typedef struct {
    ficha L[100000];
    int ant, prox;
}LFila;
 
void luta(int k, int n, LFila *Lutador){
    int i=0,j=0,aux;
 
 
 
    while(n!=1){//esse while compara de "round em round"; ele reseta quando acaba as oitavas de final, quartas de final, etc
        j=0;//indice da posicao que os vencedores ficarão
        i=0;//indice que sera usado para comparar os lutadores de dois a dois
        while(i+1<=n){
 
            //essa lógica era caso k fosse somado a cada luta em que nao envolvido os lutadores que já ganharam e esperam até a prox etapa
            //exemplo: lutador da vencedor da primeira luta das oitavas de final esperava as outras 7 lutas, logo era somado 7k;
 
            //printf("\n\n-------------LUTA ENTRE %d E %d--------------\n\n",Lutador->L[i].c,Lutador->L[i+1].c);
            /*if(i>0){
 
                for(x=0;x<j;x++){
 
                    Lutador->L[x].Pi = Lutador->L[x].Pi + k;
                    if(Lutador->L[x].Pi>Lutador->L[x].P0){
                        Lutador->L[x].Pi=Lutador->L[x].P0;
                    }
 
                    //      printf("lutador %d regenerado (antes da luta) - forca: %d\n",Lutador->L[x].c,Lutador->L[x].Pi);
                }
                for(x=j+2;x<n;x++){
 
                    Lutador->L[x].Pi = Lutador->L[x].Pi + k;
                    if(Lutador->L[x].Pi>Lutador->L[x].P0){
                        Lutador->L[x].Pi=Lutador->L[x].P0;
                    }
 
                    //        printf("lutador %d regenerado (dps da luta)- forca: %d\n",Lutador->L[x].c,Lutador->L[x].Pi);
                }
            }*/
 
            if(Lutador->L[i].Pi > Lutador->L[(i+1)].Pi ){//como os lutadores são comparados dois a dois, esse é o caso do primeiro lutador ser mais forte
 
                Lutador->L[j]=Lutador->L[i];
                Lutador->L[j].Pi= Lutador->L[i].Pi-Lutador->L[i+1].Pi;
                Lutador->L[j].Pi = Lutador->L[j].Pi + k;
                if(Lutador->L[j].Pi>Lutador->L[j].P0){//se k Pi+k fosse maior que P0, P0 era atribuido a Pi
                    Lutador->L[j].Pi=Lutador->L[j].P0;
                }
                if (n / 2 == 1) {
                    printf("%d\n", Lutador->L[j].c);//caso for a ultima luta (final) já sai o ganhador e já imprime o numero dele
                }
 
            }else if(Lutador->L[i+1].Pi > Lutador->L[i].Pi ) {//caso do segundo lutador da comparacao seja o ganhador
                aux = Lutador->L[(i)].Pi;
 
                Lutador->L[j] = Lutador->L[i + 1];
                Lutador->L[j].Pi = Lutador->L[j].Pi - aux;
 
                Lutador->L[j].Pi = Lutador->L[j].Pi + k;
                if(Lutador->L[j].Pi>Lutador->L[j].P0){
                    Lutador->L[j].Pi=Lutador->L[j].P0;
                }
 
                if (n / 2 == 1){
                    printf("%d\n", Lutador->L[j].c);
                }
            }else{//caso forem iguais, quem ganha é quem tem o menor índice
                Lutador->L[j]=Lutador->L[i];
                Lutador->L[j].Pi=0;
 
                Lutador->L[j].Pi = Lutador->L[j].Pi + k;
                if(Lutador->L[j].Pi>Lutador->L[j].P0){
                    Lutador->L[j].Pi=Lutador->L[j].P0;
                }
 
                if (n / 2 == 1) {
                    printf("%d\n", Lutador->L[j].c);
                }
            }
 
            j++;//pra proxima posicao do vetor já esperar o próximo vencedor
            i++;//pra pular 2 posicoes do vetor e comparar os dois próximos lutadores
            i++;
        }
        n=n/2;
 
    }
 
 
}
 
void setlutadores(int n, LFila *Lutador){
    int i;
    for(i=0;i<n;i++){
        Lutador->L[i].c=1+i;
        Lutador->L[i].P0=Lutador->L[i].Pi;
    }
}
 
 
void inicia(LFila *Lutador){
    Lutador->prox=0;
    Lutador->ant=0;
}
 
void leforca(int n, LFila *Lutador){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &Lutador->L[i].Pi);
        Lutador->prox=i+1;
 
    }
}
 
int main(){
    int n,k;
    LFila Lutador;
    scanf("%d %d",&n, &k);
    n=pow(2,n);
    inicia(&Lutador);//funcao para iniciar a fila
    leforca(n,&Lutador);//le Pi de todos os lutadores
    setlutadores(n,&Lutador);//arruma (seta) os dados do lutadores, atribuindo um numero e P0 a eles
    luta(k, n,&Lutador);//funcao para comparar a forca dos dois lutadores
 
    return 0;
}
