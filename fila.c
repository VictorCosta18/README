
#include <stdio.h>
#include "fila.h"

void initFila(Fila *f){
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;
}

int enqueue(Fila *f, Atendimento a){
    if(f->total == MAX) return 0;

    f->dados[f->fim] = a;
    f->fim = (f->fim + 1) % MAX;
    f->total++;
    return 1;
}

int dequeue(Fila *f){
    if(f->total == 0) return 0;

    f->inicio = (f->inicio + 1) % MAX;
    f->total--;
    return 1;
}

void listar(Fila *f){
    int i = f->inicio;
    for(int c=0; c < f->total; c++){
        Atendimento a = f->dados[i];

        printf("%d | %s | %s\n",
        a.protocolo, a.nome, a.problema);

        i = (i + 1) % MAX;
    }
}
