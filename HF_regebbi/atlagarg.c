#include  <stdio.h>
#include  <stdlib.h>
#include "prog1.h"

int main(const int argc, string argv[]) {
    if (argc < 2) {
        printf("Adj meg legalabb egy szamot!");
        return 1;
    }
    double osszeg = 0;
    for (int i=0; i < argc-1;i++){
        osszeg = osszeg + atoi(argv[i]);
    }
    double atlag = osszeg / argc -1;
    printf("A megadott szamok atlaga: %.2lf", atlag);
    return 0;
}