#include "prog1.h"
#include <stdio.h>

void abc_feloltes(string abece) {
    int i;
    for (i = 0; i < 26; i++) {
        abece[i] = 'a' + i;
    }
    abece[i] = '\0';
}

int main()
{
    char abece[27];

    abc_feloltes(abece);

    printf("Az angol abece: %s\n", abece);

    return 0;
}