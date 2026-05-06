#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.h"

int main(const int argc, string argv[]){
    if (argc != 3){
        printf("Hiba: pontosan két argumentumot kell megadni!");
        return 1;
    }

    int paratlan = atoi(argv[2]);
    
    if(paratlan%2==0 && paratlan > 0){
        printf("Hiba: a masodik argumentum legyen egy pozitiv paratlan szam!");
        return 2;
    }

    string szoveg = argv[1];
    int osszeg = 0;

    for(int i=1;i < strlen(szoveg)+1;i++){
        int asciicode = szoveg[i-1] - 0;
        osszeg = osszeg + (asciicode*i*paratlan);
    }
    printf("%d", osszeg);
}