#include <stdio.h>
#include <stdlib.h>
#define MERET 2000
#define SEED 1985

int get_random_number()
{
    int r = rand() % (200-150+1)+150;
    return r;
}

void feltolt(const int n, int tomb[])
{
    for(int i = 0; i < n;i++){
        tomb[i] = get_random_number();
    }

}


int main(){

    srand(SEED);

    int szamok[MERET];

    feltolt(MERET, szamok);

    int legtobb = szamok[0];
    int db_max = 1;


    for(int i = 0; i < MERET; i++) {
        int db_jelenlegi = 1;

        for(int j = i+1;j < MERET; j++) {
            if (szamok[i] == szamok[j])
            {
                db_jelenlegi++;
            }
        }
        if (db_max < db_jelenlegi)
        {
            legtobb = szamok[i];
            db_max = db_jelenlegi;
        }
    }

    printf("A legtobbet elofodrulo szam: %d\n", legtobb);
    printf("Ez a szam (%d) oszesen %d alkalommal talalhato meg a tombben!",legtobb, db_max);


    return 0;
}