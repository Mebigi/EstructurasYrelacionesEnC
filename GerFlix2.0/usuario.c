#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"
#include <string.h>

void CrearListadoDeTresUsuarios(eUsuario MisUsuarios[])
{
    int i;
    for(i=0;i<3;i++)
    {
        MisUsuarios[i].idUsuario=i+100;

    }
     strcpy(MisUsuarios[0].nombre,"Maria pia");
     strcpy(MisUsuarios[1].nombre,"Jose luis");
     strcpy(MisUsuarios[2].nombre,"Dafne");


}

void mostrarListadoUsu(eUsuario lista[])
{
    for(int i=0; i<3; i++)
    {
        printf("Nombre: %s", lista[i].nombre);
    }
}

void seriequeve(eUsuario lista[], eUsuarioSerie listausuarioyserie[], eSerie listaserie[])
{
    for(int i=0; i<3; i++)
    {
        //printf("Nombre usuario: %s  \n", lista[i].nombre);

        for(int j=0; j<9; j++)
        {

            if(lista[i].idUsuario == listausuarioyserie[j].idUsuario)
            {
                for(int k=0; k<4; k++)
                {
                     if(listaserie[k].idSerie == listausuarioyserie[j].idSerie)
                     {
                           printf("Nombre usuario: %s Nombre serie: %s \n", lista[i].nombre, listaserie[k].nombre);
                     }


                }

            }
        }
    }


}

