#include <stdio.h>

typedef struct sTime{
    int year;
    int month;
    int day;
    int hour;
    int min;
    int sec;
}time;

typedef struct sZone{
    char state;
    int reg_code;
    char reg_name;
    float lat;
    float lon;
}zone;

typedef struct sIllness{
    int ricoverati_con_sintomi;
    int terapia_intensiva;
    int totale_ospedalizzati;
    int isolamento_domiciliare;
    int totale_positivi;
    int variazione_totale_positivi;
    int nuovi_positivi;
    int dimessi_guariti;
    int deceduti;
    int casi_da_sospetto_diagnostico;
    int casi_da_screening;
    int totale_casi;
    int tamponi;
    int casi_testati;
}illness;

typedef struct sLine{
    time data;
    zone regione;
    illness dati_sanitari;
}line;

FILE apriFile(){
    
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
