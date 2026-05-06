#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char eredeti[100];
    char cserelt[100];

    printf("Szoveg: ");

    fgets(eredeti, 100, stdin);

    int i = 0;

    while(eredeti[i] != '\0' && eredeti[i] != '\n'){

        if(islower(eredeti[i])){

            cserelt[i] = toupper(eredeti[i]);
        }
        else if(isupper(eredeti[i])){

            cserelt[i] = tolower(eredeti[i]);
        }
        else {

            cserelt[i] = eredeti[i];
        }

        i++;
    }

    cserelt[i] = '\0';

    puts("");

    printf("Uj szoveg: \"%s\"\n", cserelt);

    return 0;
}