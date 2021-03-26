#include <stdio.h>
#include <stdlib.h>

#define MAZZO 52

typedef struct carta{
    int valore;
    char seme;
    struct carta* next;
}Carta;

int is_empty(Carta *head){
    if (head==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(Carta **head, Carta **tail, Carta *element){
    if(is_empty(*head)){
        *head=element;
    }
    else{
        *tail->next=element;

    }
    *tail=element;
    element->next=NULL;
}

Carta* dequeue(Carta **head, Carta **tail, Carta *element){
    Carta* ret = *head;
    if(is_empty(*head)){
        return NULL;
    }

    else{
        *head=ret->next;
    }

    if(*head == NULL){
        *tail = NULL;
    }

    return ret;
}

char setSeme(int nCarta){
    char seme;
    if (nCarta<13){
        seme='C';
    }
    if (nCarta>13&&nCarta<26){
        seme='F';
    }
    if (nCarta>26&&nCarta<39){
        seme='Q';
    }
    if(nCarta>39&&nCarta<MAZZO){
        seme='P';
    }

    return seme;
}

int main() {

    Carta *head;
    Carta *tail;
    Carta *val;
    int nCarta=0;
    head=NULL;
    tail=NULL;

    while (nCarta < MAZZO){

        head=(Carta *)malloc(sizeof(Carta));
        tail=(Carta *)malloc(sizeof(Carta));

        for (int j = 0; j < 13; ++j) {
            val=(Carta *)malloc(sizeof(Carta));
            val->valore=j;
            val->seme=setSeme(nCarta);
            enqueue(&head,&tail,val);
        }
    }

    return 0;
}
