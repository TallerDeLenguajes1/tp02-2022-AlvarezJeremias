#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void main () {
    srand (time(NULL));
    int i;
    int vector [N];
    int * punteroAvector= &vector[0];

    for (i=0;i<N;i++) {
        *punteroAvector=1+rand()%100;
        printf("%d  ", vector[i]);
        punteroAvector++;
    }
}