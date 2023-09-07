#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FilaEstatica.h"

struct fila{
    int inicio, fim, qtd;
    struct frase dados[MAXX];
};

Fila* cria_Fila(){
    Fila *fi = (Fila*) malloc(sizeof(struct fila));
    if(fi != NULL){
        fi->inicio = 0;
        fi->fim = 0;
        fi->qtd = 0;
    }
    return fi;
}

void libera_Fila(Fila* fi){
    free(fi);
}
