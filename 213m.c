//Írjon programot, ami 0 végjelig egész számokat olvas be. Írja ki, hány darab pozitív számot adott meg a felhasználó (a végjel természetesen nem számít).

#include <stdio.h>
int main() {
    int szam;
    int counter=0;
    do {
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
        if (szam>0) {
            counter++;
        }
    }while(szam!=0);

    printf("Pozitiv elemek szama: %d\n",counter);
    return 0;
}