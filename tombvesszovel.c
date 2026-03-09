// 20200305f
// Tömb elemei, vesszővel elválasztva

// Írjon eljárást, ami kap egy tömböt, s kiírja a tömb elemeit egymás mellé. Az elemek között legyen vessző és szóköz. Az utolsó elem után csak sortörés szerepeljen!

// Példa kimenet:

// 4, 7, 34, 23, 67

#include <stdio.h>

void print_arr(int n, int tomb[]) {
    for (int i = 0; i < n; i++) {
        printf("%d", tomb[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    puts("\n");
}

int main() {

    int exarr[10] = {3,5,1,8,7,0,9,4,6,2};

    print_arr(10, exarr);

    return 0;
}