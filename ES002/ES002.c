#include <stdio.h>

#define MAX 1000

int main() {

    int risposta, a;

    printf("Ciao!\nVuoi eseguire coding(premere 0) o decoding(premere 1)?\n");
    scanf("%d", &risposta);
    
    char s[MAX];

    printf("Inserire la stringa: \n");
    scanf("%s", &s);
    int lung = strlen(s);

    switch(risposta)
    {
        case 0:
            printf("Verrà eseguito coding!\n");
            for (int i = 0; i >= lung; i++)
            {
                if (s[i]==s[i++])
                {
                    a=a++;
                }
                else
                {
                    printf("%d", a);
                    printf("%s", s[i]);
                }  
            }
            
        break;

        case 1:
            printf("Verrà eseguito decoding!\n");
        break;
    }
    
    getchar();
    return 0;
}
