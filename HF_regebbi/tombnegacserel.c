// pozitív hozzáállás

// Írjon eljárást, ami kap egy egészeket tartalmazó tömböt. Az eljárás cserélje ki a tömbben lévő negatív számokat az abszolútértékükre! Az eljárás a tömböt helyben módosítja.

// A main() fv.-ben írassa ki a tömböt kétszer (a fenti eljárás meghívása előtt, majd után).

#include <stdio.h>

void abs_arr(int n, int tomb[]) {
    for (int i = 0; i < n; i++) {
        if (tomb[i] < 0) {
            tomb[i] = -tomb[i];
        }
    }
}

void print_arr(int n, int tomb[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tomb[i]);
    }
    puts("\n");
}

int main() {

    int tomb[5] = {2, -1, 0, -2, 4};

    print_arr(5, tomb);
    abs_arr(5, tomb);
    print_arr(5, tomb);

    return 0;
}