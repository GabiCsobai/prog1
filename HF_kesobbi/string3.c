#include "prog1.h"
#include <stdio.h>

int string_length(string s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    string s = "Hello";

    int hossz = string_length(s);
    printf("A sztring hossza: %d\n", hossz);

    return 0;
}

