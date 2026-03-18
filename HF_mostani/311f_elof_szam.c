#include "../prog1.h"
#include <stdio.h>

int char_count(string s, char c) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    string s = "Abba";
    char c = 'x';
    int count = char_count(s, c);
    printf("A karakter előfordulásainak száma: %d\n", count);
    return 0;
}
