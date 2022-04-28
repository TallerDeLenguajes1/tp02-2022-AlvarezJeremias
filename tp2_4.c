#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct datos{
        int frecuenciaProcesador;
        int anioFabricacion;
        int cantidadNucleos;
        char * tipoCpu;
    } typedef compu;

char tipos[6][10]={ "Intel" , "AMD" , "Celeron", "Athlon", "Core", "Pentium"};

void cargarCompus (compu * puntero);

void listarCompus (compu * puntero);

void computadoraVieja (compu * puntero);

void computadoraRapida (compu * puntero);

void main () {
    srand(time(NULL));
    compu * punteroArreglo= (compu*)malloc (5*sizeof(compu));
    cargarCompus(punteroArreglo);
    listarCompus(punteroArreglo);
    computadoraVieja(punteroArreglo);
    computadoraRapida(punteroArreglo);
    
}
void cargarCompus (compu * puntero) {
    int aux;
    for (int i=0;i<5;i++) {
        aux=rand()%6;  // uso este numero para que el CPU sea aleatorio
        (*(puntero+i)).frecuenciaProcesador= rand() % 3 + 1;
        (*(puntero+i)).cantidadNucleos= rand() % 8+1;
        (*(puntero+i)).anioFabricacion= rand() % 8 + 2015;
        (*(puntero+i)).tipoCpu= *(tipos+aux);
    }
}
void listarCompus (compu * puntero) {
    for (int i = 0; i < 5; i++)
    {
    printf ("\n\n --------------Computadora Numero %d --------------",i+1);
    printf("\n\n Cantidad de nucleos: %d",(*(puntero+i)).cantidadNucleos);
    printf("\n\n Año de fabricacion: %d",(*(puntero+i)).anioFabricacion);
    printf("\n\n Frecuencia del procesador: %d Ghz" ,(*(puntero+i)).frecuenciaProcesador);
    printf("\n\n Modelo de procesador: ");
    puts ((*(puntero+i)).tipoCpu); }
}
void computadoraVieja (compu * puntero) {
    compu auxiliar;
    for (int i=0;i<5;i++) {
        if (i==0) {
            auxiliar= *(puntero+i);
        }else {
            if ((*(puntero+i)).anioFabricacion<auxiliar.anioFabricacion){
                auxiliar= *(puntero+i); 
            }
        }
    }
    printf("\n\n------------ La computadora mas antigua es la PC:------------- \n\n");
    printf("\n\n Cantidad de nucleos: %d",auxiliar.cantidadNucleos);
    printf("\n\n Año de fabricacion: %d",auxiliar.anioFabricacion);
    printf("\n\n Frecuencia del procesador: %d Ghz" ,auxiliar.frecuenciaProcesador);
    printf("\n\n Modelo de procesador: ");
    puts (auxiliar.tipoCpu); 


}
void computadoraRapida(compu * puntero) {
    compu auxiliar;
    for (int i=0;i<5;i++) {
        if (i==0) {
            auxiliar= *(puntero+i);
        }else {
            if ((*(puntero+i)).frecuenciaProcesador > auxiliar.frecuenciaProcesador){
                auxiliar= *(puntero+i); 
            }
        }
    }
    printf("\n\n------------ La computadora mas rapida es la PC:------------- \n\n");
    printf("\n\n Cantidad de nucleos: %d",auxiliar.cantidadNucleos);
    printf("\n\n Año de fabricacion: %d",auxiliar.anioFabricacion);
    printf("\n\n Frecuencia del procesador: %d Ghz" ,auxiliar.frecuenciaProcesador);
    printf("\n\n Modelo de procesador: ");
    puts (auxiliar.tipoCpu); 
}