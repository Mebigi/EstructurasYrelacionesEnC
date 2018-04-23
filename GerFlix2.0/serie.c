#include "serie.h"
#include <string.h>




void CrearListadoSeries(eSerie array[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        array[i].idSerie=i+1;
        if(i%2==0)
        {
            strcpy(array[i].genero,"Terror");
        }else{
             strcpy(array[i].genero,"Humor");
        }

    }
     strcpy(array[0].nombre,"Los muertos vivos");
     strcpy(array[1].nombre,"Los vickingos");
     strcpy(array[2].nombre,"Los extraterrestres");
     strcpy(array[3].nombre,"Los Hacker");
     strcpy(array[4].nombre,"Los perdidos");

}

void mostrarSerie(eSerie lista[])
{
    for(int i=0; i<4; i++)
    {
        printf("Nombre: %s Genero: %s", lista[i].nombre, lista[i].genero);
    }
}
