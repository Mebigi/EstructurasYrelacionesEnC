#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"
#include <string.h>
#define TAM_S 30
#define TAM_US 600
#define TAM_U 20




void CrearListadoDeTresUsuarios(eUsuario MisUsuarios[])
{
    int i;
    for(i=0; i<3; i++)
    {
        MisUsuarios[i].estado = 0;
        MisUsuarios[i].idUsuario=i+100;

    }
    strcpy(MisUsuarios[0].nombre,"Maria pia");
    strcpy(MisUsuarios[1].nombre,"Jose luis");
    strcpy(MisUsuarios[2].nombre,"Dafne");
    MisUsuarios[0].estado = 1;
    MisUsuarios[1].estado = 1;
    MisUsuarios[2].estado = 1;


}


void mostrarUsuario(eUsuario lista[])
{
    for(int i=0; i<TAM_U; i++)
    {

        if(lista[i].estado == 1)
        {
            printf("Nombre: %s", lista[i].nombre);
        }

    }
}




void seriequeve(eUsuario lista[], eUsuarioSerie listausuarioyserie[], eSerie listaserie[])
{
    for(int i=0; i<TAM_U; i++)
    {


        if(lista[i].estado == 1)
        {
            printf("\nNombre usuario: %s \nseries: ", lista[i].nombre);




            for(int j=0; j<TAM_US; j++)
            {


                if(lista[i].idUsuario == listausuarioyserie[j].idUsuario)
                {
                    for(int k=0; k<TAM_S; k++)
                    {
                        if(listaserie[k].idSerie == listausuarioyserie[j].idSerie)
                        {
                            printf("%s - ", listaserie[k].nombre);

                        }




                    }



                }


            }



        }

    }


}

void consultarUsuarioyMostrarSeries(eUsuario lista[], eUsuarioSerie listausuarioyserie[], eSerie listaserie[])
{
    int idu;
    printf("Consultar Usuario: (ingrese ID):\n");
    fflush(stdin);
    scanf("%d", &idu);
    int flag=0;

    for(int i=0; i<TAM_U; i++)
    {
        if(idu == lista[i].idUsuario && idu !=0)
        {
            printf("Nombre de usuario: %s\n", lista[i].nombre);
            flag =1;


            for(int j=0; j<TAM_US; j++)
            {
                if(lista[i].idUsuario == listausuarioyserie[j].idUsuario)
                {

                    for(int k=0; k<TAM_S; k++)
                    {
                        if(listaserie[k].idSerie == listausuarioyserie[j].idSerie)
                        {

                            printf("Serie: %s \n", listaserie[k].nombre) ;
                        }
                    }
                }

            }
        } //
    }

    if(flag == 0)
    {
        printf("usuario no encontrado");
    }



}

