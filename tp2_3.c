#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define N 5
#define M 7

void main () {
    srand (time(NULL));
    int i,j;
    int matriz [N][M];
    int * punteroAmatriz= &matriz [0][0];
    for (i=0;i<N;i++) {
        for (j=0;j<M;j++) {
            *(punteroAmatriz+(i*7+j))=1+rand()%100;
            printf("%d  ", *(punteroAmatriz+(i*7+j)));
            punteroAmatriz+(i*7+j);
        }
        printf("\n");
    }
}