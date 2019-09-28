#include <stdio.h>
#include <stdlib.h>

int lnko(int a, int b) {
    int ideigl;

    if (a<0) {
        a -= a;
    } else if (b<0) {
        b -= b;
    }

    while (b>0) {
        ideigl = b;
        b = a % b;
        a = ideigl;
    }
    return a;
}

int lkko(int x, int y) {
    int ln = lnko(x,y);
    return (x*y)/ ln;
}

int main()
{
int tomb[10]={4,4,4,4,4,4,4,4,8,8};
int i;
int ertek=1;

    for (i=0; i<10; i++) {
        ertek = lkko(ertek, tomb[i]);
    }
    printf("Legisebb kozos tobbszoros: %d\n", ertek);


    int j=1;
    int elso;
    elso = tomb[0];

    while (j<10) {
        if (tomb[j] % elso == 0) {
            j++;
        } else {
            elso = tomb[j] % elso;
            j++;
        }
    }
    printf("Legnagyobb kozos oszto: %d \n", elso);

}
