/*
20200311d
karakter első előfordulásának a helye egy sztringben

Implementáljuk az alábbi függvényt:

Az s alapsztringben keressük a c karakter első előfordulásának a helyét.
Visszatérési érték: a c első előfordulásának az indexe az s-ben.
Ha nincs benne: -1 a visszatérési érték.
int find_char(const string s, char c);
Példák:

find_char("Abba", 'b') -> 1
find_char("Abba", 'a') -> 3
find_char("Abba", 'x') -> -1
*/

#include "prog1.h"
#include <stdio.h>

int find_char(const string s, char c) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int main() {
    string s = "Macskamenta";
    char c = 'm';
    int index = find_char(s, c);
    printf("A karakter az indexen található: %d\n", index);
    return 0;
}
