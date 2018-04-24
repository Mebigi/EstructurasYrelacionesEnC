#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED

typedef struct{
    int idSerie;
    char nombre[50];
    char genero[50];
    int estado;
}eSerie;

void CrearEstadoSeries(eSerie[],int);
void mostrarSerie(eSerie [], int);
void CrearListadoSeries(eSerie [],int);





#endif // SERIE_H_INCLUDED
