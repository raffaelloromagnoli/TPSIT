#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//definisco una costante
#define MAX 1000

int main(void)
{
	//definisco le variabili
	int N;
	float R, A[MAX];

	//Chiedo all'utente di inserire i valori R e N
	printf("\nInserire il numero di persone contagiate da ogni persona: ");
	scanf("%f", &R);
	printf("\nInserire il numero di studenti della classe: ");
	scanf("%d", &N);

	//Inizializzo A[0]
	A[0] = 1;

	printf("\nDurante il primo giorno ho un solo contagio");

	for (int y = 1; y < MAX; y++)
	{
		//Calcolo il numero di contagi del giorno e lo salva dentro una cella dell'array
		A[y] = (pow(R, y)) * A[0];

		printf("\nNel giorno %d ho un numero di contagi pari a %.f.", y, (A[y]));

		//Verifico che i contagi siano maggiori o uguali a N
		if (A[y]>=N)
		{
			printf("\nPer contagiare tutti gli studenti ci vogliono %d giorni.", y);
			y = MAX;
		}
	}

	return 0;
}
