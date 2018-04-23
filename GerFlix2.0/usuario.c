#include "usuario.h"
#include "usuarioSerie.h"
#include "serie.h"

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

void seriequeve(eUsuario lista[], eUsuarioSerie listausuarioyserie[],  eSerie listaserie[])
{
    for(int i=0; i<3; i++)
    {

        for(int j=0; j<5; j++)
        {
            if(listausuarioyserie[j].idUsuario== lista[i].idUsuario)
            {
                printf("Nombre usuario: %s nombre serie: %s", lista[i].nombre, listaserie[j].nombre);
            }
        }
    }


}

