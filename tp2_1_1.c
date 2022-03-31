#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void main () {
    srand (time(NULL));
    int i;
    double vector [N];
    for (i=0;i<N;i++) {
        vector[i]=1+rand()%100;
        printf("%.2f  ", vector[i]);
    }
}