#include <stdio.h>
#include <stdlib.h>

typedef struct sNode{
    int valore;
    struct node *next;
}Node;

void stampaLista(Node *head){
    if (head==NULL){
        printf("La lista e' vuota\n");
    }
    else{
        printf("Il valore e': %d\n", head->valore);
        stampaLista(head->next);
    }
}



int lunghezzaLista_iterativa(Node *head){
    int cont=0;
    while (head!=NULL){
        cont++;
        head=head->next;
    }
    return cont;
}

int lunghezzaLista_ricorsiva(Node *head){
    int cont=0;
    if (head==NULL){
        return 0;
    }
    else{
        return 1+lunghezzaLista_ricorsiva(head->next);
    }
}

void deallocaLista(Node *head){
    if (head=!NULL){
        deallocaLista(head->next);
        free(head);
    }
}