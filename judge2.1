#include <stdio.h>
#include <string.h>
 
typedef struct {
    float valor[50];
    int topo;
} TPilha;
 
//declaração das funções
void lechar(char *plet);
void lenum(char *plet,TPilha *p1);
void inicia(TPilha *p1);
int desemp(TPilha *p1,float *v1);
int emp(TPilha*p1,float *v1);
 
 
//iniciar pilha, topo recebendo 0
void inicia(TPilha *p1){
p1->topo=0;
}
//primeira entrada: le string e confere se nao há nada errado
void lechar(char *plet){
    int i,topo;
    scanf("%s", plet);
    for(i=0; plet[i]!= '\0';i++){
        if(plet[i]>='A' && plet[i]<='Z'){}
        else if(plet[i]>='a' && plet[i]<='z'){}
        else if(plet[i]=='/' || plet[i]=='*' || plet[i]=='+'||plet[i]=='-'){}
        else{
            scanf("%s", plet);
            i=-1;
 
        }
    }
 
}
 
//segunda entrada: valores a serem empilhados e calculados
 
 
 
 
 
 
//funcao desempilha
int desemp(TPilha *p1,float *v){
    if(p1->topo==0){
        return 0;
    }
    p1->topo--;
    *v=p1->valor[p1->topo];
}
//funcao empilha
int emp(TPilha *p1, float *v){
        if(p1->topo==50){
            return 0;
        }
        p1->valor[p1->topo]=*v;
        p1->topo++;
 
}
 
int main(){
    char plet[51];//pilha das letras
    int i,topo,j=0;//j: auxiliar para ajeitar o tamanho da pilha, conforme os operadores foram alterando esse tamanho, para entrar com números no lugar certo da pilha, sem alterar a ordem das operações
    TPilha p1;//pilha dos numeros;
    float v1=0,v2=0,v=0,aux;
 
    inicia(&p1);//primeiro inicia a pilha, chamando a funcao que aponta o topo pra zero
 
    lechar(&plet);//le e verifica a primeira entrada (vetor de char)
 
 
    //operacoes lógicas
    for(i=0;plet[i]!='\0'; i++){
        if(plet[i]=='+'){//se for uma adicao:
            desemp(&p1,&v1);//desempilha um valor
            j--;
            desemp(&p1,&v2);//desempilha mais um valor
            j--;
            v=v2+v1;//uma variavel guarda a soma dos dois valores empilhados
            emp(&p1,&v);//empilha esse novo valor, resultante da soma dos dois que foram desempilhados
            j++;
        }else if(plet[i]=='-'){//se for uma subtracao faz as mesmas coisas da soma; entretanto
            desemp(&p1,&v1);
            j--;
            desemp(&p1,&v2);
            j--;
            v=v2-v1;//subtrai os valores que acabaram de ser desempilhados
            emp(&p1,&v);
            j++;
        }else if(plet[i]=='*'){//mesma lógica
            desemp(&p1,&v1);
            j--;
            desemp(&p1,&v2);
            j--;
            v=v2*v1;//multiplica os valores que acabaram de ser desempilhados
            emp(&p1,&v);
            j++;
        }else if(plet[i]=='/'){
            desemp(&p1,&v1);
            j--;
            desemp(&p1,&v2);
            j--;
            v=v2/v1;//divide os valores que acabaram de ser desempilhados
            emp(&p1,&v);
            j++;
        }
        else{
            scanf("%f", &aux);
            p1.valor[j]=aux;
            p1.topo++;
            j++;
        }
    }
 
 
 
  printf("%f",p1.valor[0]);
}
