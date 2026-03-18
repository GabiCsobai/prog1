#include "prog1.h"
#include <stdio.h>

int get_int(string prompt) {
    int n;
    printf("%s", prompt);
    scanf("%d", &n);
    return n;
}

int main() {
    
    string nev = get_string("Mi a neved? ");
    int kor = get_int("Hany eves vagy? ");

    printf("Szia, %s! %d eves vagy.\n", nev, kor);

    return 0;
}

