#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"
#define TAMANIO 10

/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/
int main()
{
    eSerie listadoSeries[TAMANIO];
    eUsuarioSerie listausuarioyserie[TAMANIO];
    eUsuario listadoUsuarios[TAMANIO];


    CrearListadoSeries(listadoSeries,4);
    CrearListadoUsuariosYSeries(listausuarioyserie);
    CrearListadoDeTresUsuarios(listadoUsuarios);

    //mostrarListadoUsu(listadoUsuarios);


    seriequeve(listadoUsuarios, listausuarioyserie, listadoSeries);

     printf("________________________________________________________________________________________________________\n");

    quienveserie(listadoSeries, listausuarioyserie, listadoUsuarios);

     printf("________________________________________________________________________________________________________\n");



     SeriesMenosPopulares(listadoSeries, listausuarioyserie);


    return 0;
}
