#include <stdio.h>
#include <stdlib.h>
struct El
{
    int valore;
    struct El* next;
};

void stampaLista(struct El *lista){
    if(lista == NULL) printf("la lista è vuota");
    else
    {
        printf(" il valore è: %d\n", lista->valore);
        stampaLista(lista->next);
    }

}

int main()
{
    int n;
    struct El* lista;
    struct El* l;
    lista=NULL; /* inizializza la lista come vuota*/

    do
    {
        printf("Inserisci un naturale o -1 per terminare\n");
        scanf("%d",&n);
        if (n>=0)
        {
            if (lista==NULL) /* entra se la lista è vuota*/
            {
                /* crea il primo elemento*/

                lista = (struct El*) malloc(sizeof(struct El));

                l = lista;
            }
            else /*entra se la lista non è vuota */
            {
                /* crea un nuovo nodo*/

                l->next = (struct El*) malloc(sizeof(struct El));

                l = l->next;
            }
            l->valore = n; /* imposta il valore del nodo a n */
            l->next = NULL; /* imposta next del nuovo nodo a null */
        }
    } while (n>=0);

    l=lista; /* fa puntare l alla al primo elemento */
    printf("numeri inseriti: ");
    while (l!=NULL)
    {
        printf("%d - %p \n",l->valore, l->next);
        l=l->next; /* stampa il primo e poi passa al nodo sucessivo */
    }
    printf("\n");
    return 0;
}