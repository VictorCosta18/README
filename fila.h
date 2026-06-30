#ifndef FILA_H
#define FILA_H

#define MAX 100

typedef struct {
    int protocolo;
    char nome[50];
    char problema[50];
} Atendimento;

typedef struct {
    Atendimento dados[MAX];
    int inicio, fim, total;
} Fila;

void initFila(Fila *f);
int enqueue(Fila *f, Atendimento a);
int dequeue(Fila *f);
void listar(Fila *f);

#endif
