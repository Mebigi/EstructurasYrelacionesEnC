#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"
#define TAM_S 30
#define TAM_US 600
#define TAM_U 20

/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/
int main()
{
    eSerie listadoSeries[TAM_S]={0};
    //CrearEstadoSeries(listadoSeries, TAM_S);


    eUsuarioSerie listausuarioyserie[TAM_US];
    eUsuario listadoUsuarios[TAM_U];


    CrearListadoSeries(listadoSeries,TAM_S);
    CrearListadoUsuariosYSeries(listausuarioyserie);
    CrearListadoDeTresUsuarios(listadoUsuarios);

    //mostrarListadoUsu(listadoUsuarios);


    seriequeve(listadoUsuarios, listausuarioyserie, listadoSeries);

     printf("________________________________________________________________________________________________________\n");

    quienveserie(listadoSeries, listausuarioyserie, listadoUsuarios);

     printf("________________________________________________________________________________________________________\n");



     SeriesMenosPopulares(listadoSeries, listausuarioyserie, listadoUsuarios);


    return 0;
}
