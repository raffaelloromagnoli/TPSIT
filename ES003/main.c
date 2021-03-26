#include <stdio.h>

int main() {
    int vet[10];

    for (int i = 0; i < 10; ++i) {
        printf("\nInserire il contenuto della cella dell'array: ");
        scanf("%d", vet+i);
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d", *(vet+i));
    }
    return 0;
}
