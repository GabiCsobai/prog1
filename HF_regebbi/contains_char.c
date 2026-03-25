/*int contains_char(string s, char c); függvény megírása (az s sztringben előfordul-e a megadott karakter vagy sem)*/

#include "prog1.h"
#include <stdio.h>

int contains_char(string s, char c) {
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
    int result = contains_char(s, c);
    printf("A karakter %s a sztringben.\n", result ? "előfordul" : "nem fordul elő");
    return 0;
}
