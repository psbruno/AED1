       
#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
    int campus;
    int ra;
}bloco;
 
 
int main() {
    bloco *uuv; //unidade universitária; struct que contem os dados de cada campus de cada unifesp.
    bloco *bda;//bda= Bloco com Dados dos Alunos;
    bloco *ap;//bloco para contar quantos alunos vieram de cada campus, depois ele receberá a taxa (alunos presentes/numero total de alunos)
    int i,nuu,m,codu,x,numa, cont=0,cont2=0;//i: usado só em for; nuu=numero de unidades universitárias, codu= codigo da unidade, numa=numero de alunos, m= capacidade de cada bloco
    int auxc, auxra; // aux pro campus e aux pro ra
    int k=0;//indice da posicao com menor taxa alunos presentes/total de alunos
    //dois contadores (um para controlar o n de ciclos que vou ter no while, aí eu multiplico m*cont para reallocar o tamanho certo; o outro é pra guardar o indice do campus que o aluno veio pra dar presenca pra ele
 
    scanf("%d", &nuu);//numero de unidades universitárias que eu vou alocar
 
 
 
    ap=(bloco *)malloc(nuu*sizeof(bloco));//assim, será alocado o mesmo tanto de células para ap e uuv, com indices correspondentes;
    uuv=(bloco*) malloc (nuu*sizeof(bloco));//dados de cada campus
 
 
 
    for(i=0;i<nuu;i++){//laço para ler os dados de cada campus:
        scanf("%d %d", &codu, &numa);
        uuv[i].campus= codu;//código do campus (ou da unidade)
        uuv[i].ra=numa;//numero de alunos
        ap[i].campus=codu;//cópia do código de alunos com o vetor que será usado pra contar presença
        ap[i].ra=0;//zerando o número de alunos de todos os campus
    }
 
    scanf("%d", &m);//capacidade de cada bloco: m
    bda=(bloco*)malloc(m*sizeof(bloco));//alocação do bloco dos alunos
 
 
    scanf("%d", &auxc);//o primeiro valor é lido aqui pq se ele for -1, já nem entra no while; caso ele fosse lido dentro do laço, nao daria pra nao ter nenhum aluno
 
 
    while (auxc!=-1){
 
        scanf("%d", &auxra);//le ra
        bda[cont].campus=auxc;//coloca o campus do aluno em seu indice
        bda[cont].ra=auxra;//coloca o ra do aluno no mesmo indice, pertencente ao mesmo aluno
        while(auxc!=ap[cont2].campus){//procura o código do campus do aluno
            cont2++;//cont 2 receberá o indice do código
        }
        ap[cont2].ra++;//aqui, é como se ele incrementasse uma presenca na lista de cada campus
        cont2=0;//zera cont 2 para o próximo aluno
        cont++;//cont 1 aumenta uma posicao para dps dar realloc
        x=cont*m;
        if(cont%m==0) {//se o contador é um multiplo de m, todas as posicoes do vetor já foram alocadas. é preciso adicionar mais m posicoes no vetor.
            bda = realloc(bda, (x * sizeof(bloco)));
        }
        scanf("%d", &auxc);//to lendo aqui pq já é lido um primeiro valor pra auxc fora do for
 
    }
 
 
 
    for(i=0; i<nuu;i++){
        ap[i].ra=ap[i].ra*100/uuv[i].ra*100;//aqui está sendo substituido o numero de alunos presentes pela sua taxa. como essa divisão sempre vai dar um decimal < 0, int nao vai funcionar bem. por isso, vou multiplicar tudo por 100 para manter os valores e nao dar decimal
    }
 
 
    for(i=0; i<nuu;i++){
        if(ap[k].ra>ap[i].ra){//guarda o índice da menor taxa de presença
            k=i;
        }
    }
    printf("%d\n", ap[k].campus);//printa o campus com menor presença
 
    for(i=0;i<cont;i++){
        if(ap[k].campus==bda[i].campus){//confere campus o ra do aluno i é o campus que teve menor presenca
            printf("%d\n", bda[i].ra);// se for, printa o ra do aluno i que estava presente
        }
    }
 
    // free em tudo q é dinamico
    free(bda);
    free(uuv);
    free(ap);
 
 }
