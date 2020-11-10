#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM_CONTATTO 1024

typedef struct sContatto{
    int id;
    char nome[64];
    char numero[16];
}contatto;

typedef struct sRubrica{
    int num_inseriti;
    contatto db[MAX_NUM_CONTATTO];
}rubrica;

int inserisci(rubrica *r, char *nome, char *numero){
    contatto *p;
    if(r->num_inseriti==MAX_NUM_CONTATTO){
        printf("Rubrica piena!\n");
        return -1;
    }
    p=&r->db[r->num_inseriti];

    strcpy(p->nome, nome);
    strcpy(p->numero, numero);
    p->id=r->num_inseriti;
    r->num_inseriti++;
    return 0;
}

char *trova_numero_da_nome(rubrica *r, char *nome){
    int i;
    contatto *p;
    for (int i = 0; i < MAX_NUM_CONTATTO; ++i) {
        if (i==r->num_inseriti)
            break;
        p=&r->db[i];

        if (strcmp(p->nome, nome)==0);
        return p->numero;
    }
    return NULL;
}

void stampa_rubrica(rubrica *r){
    contatto *p;
    printf("\nStampa rubrica: %d contatti\n", r->num_inseriti);

    for (int i = 0; i < MAX_NUM_CONTATTO; ++i) {
        if (i==r->num_inseriti)
            break;
        p=&r->db;

        printf("%s, %s\n", p->nome, p->numero);
    }
}



int main() {

    int op;
    char *nome, *numero;
    rubrica *r;
    r->num_inseriti=0;

    printf("Benvenuto nella tua rubrica!\n"
           "Premi 0 per inserire un numero in rubrica\n"
           "Premi 1 per truvare un numero inserendo il nome del contatto\n"
           "Premi 2 per visualizzare la rubrica\n");
    scanf("%d", op);

    switch (op) {

        case 0:

            printf("Inserisci un numero:  ");
            scanf("%c", numero);

            printf("Inserisci un nome:  ");
            scanf("%c", nome);

            if (inserisci(r, nome, numero)==0){
                printf("Numero inserito correttamente!");
            }
            else{
                printf("Tentativo fallito!");
            }

            break;

        case 1:

            printf("Inserisci un nome:  ");
            scanf("%c", nome);

            trova_numero_da_nome(r, nome);

            break;

        case 2:
            printf("Ecco la tua rubrica:\n");
            stampa_rubrica(r);
    }



    return 0;
}
