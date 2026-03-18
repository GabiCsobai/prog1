#include "prog1.h"
#include <stdio.h>

string abc_feloltes() {
    string abc;
    for (int i = 0; i < 26; i++) abc[i] = 'a' + i;
    abc[26] = '\0';
    return abc;
}

int main() {
    string abc = abc_feloltes();

    printf("Az angol ábécé: %s\n", abc);

    return 0;
}