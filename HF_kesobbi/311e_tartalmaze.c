
#include "prog1.h"
#include <stdio.h>

int contains_char(const string s, char c) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return 1;
        }
    }
    return 0;
}

int main() {
    string s = "Macskamenta";
    char c = 'm';
    int found = contains_char(s, c);
    printf("A karakter benne van a sztringben: %d\n", found);
    return 0;
}