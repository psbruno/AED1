#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void busca(int n){
     FILE *file;
     file = fopen("teste1.txt", "r");
     int i;
     char texto[20];
    printf("\n");

     for(i=0;i<n;i++){
        fscanf(file, "%s",&texto );
        printf("%s\n",texto);
    }

    fclose(file);
}


int main(){
    int i;
    FILE *file;
    file = fopen("teste1.txt", "w");
    char texto[20];

    int n;
    printf("Insira o numero de nomes \n");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%s", &texto);
        fprintf(file, "%s\n",texto );
    }
    fclose(file);
    busca(n);
    return 0;
}
