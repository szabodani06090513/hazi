#include <stdio.h>
#include <stdlib.h>

int minszam(int szam1, int szam2) {
    if (szam1<szam2) {
            return szam1;
    } else {
            return szam2;
    }
}

int main()
{
int i;
int tomb[10]={7,5,56,8,1,9,5,4,13,10};

    for (i=0; i<10; i++) {
        printf("%d \n", minszam(tomb[i], tomb[i+1]));
        i++;

        if (tomb[i] % 2 == 0) {
            printf("Paros, vagyis %d+1: %d \n", tomb[i], tomb[i]+1);
        } else {
            printf("Paratlan, vagyis %d+1: %d \n", tomb[i], tomb[i]+1);
        }
    }
}
