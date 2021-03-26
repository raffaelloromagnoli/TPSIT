#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>

#define MAX 100

typedef struct sPost{
    char month;
    int day;
    int post_id;
    int like
}post;

post verifica(post pic, char meseUtente){

    char mesePic=pic.month;

    if (strcmp(mesePic, meseUtente)==0){
        return pic;
    }
}

char readfile(){
    post pic;

    return pic;
}

int main() {

    char meseUtente;
    int monthpost=0;
    int monthlike=0;
    post pic;

    printf("\nInserire un mese: ");
    scanf("%c", &meseUtente);

    do{
        pic=readfile();
        if(verifica(pic, meseUtente)==pic){
            monthpost++;
            monthlike+=pic.like;
        }
    }while();

    printf("Durante il mese inserito sono ststi pubblicati %d post e si sono ricevuti %d like.", monthpost, monthlike);

    return 0;
}
