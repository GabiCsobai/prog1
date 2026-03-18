
#include "../prog1.h"
#include <stdio.h>

int rfind_char(string s, char c) {
    int last_index = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) last_index = i;
    }
    return last_index;
}

int main() {
    string s = "Aladar";
    char c = 'a';
    int index = rfind_char(s, c);
    printf("A karakter utolsó előfordulásának indexe: %d\n", index);
    return 0;
}