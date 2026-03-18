#include "prog1.h"
#include <stdio.h>

int string_palindrom(const string s) {
    int l = 0;
    int r = 0;

    while (s[r] != '\0') r++;
    r--;

    while (l < r) {
        if (s[l] != s[r]) return 0;
        l++;
        r--;
    }
    return 1;
}

int main() {
    string s = "gorog";

    int palindrom = string_palindrom(s);
    printf("A string %d palindrom\n", palindrom ? "" : "nem");

    return 0;
}

