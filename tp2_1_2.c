#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void main () {
    srand (time(NULL));
    int i;
    int vector [N];
    int * punteroAvector= vector;

    for (i=0;i<N;i++) {
        *(punteroAvector+i)=1+rand()%100;
        printf("%d  ", *(punteroAvector+i));
        punteroAvector+i;
    }
}