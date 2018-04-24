#include "serie.h"
#include "usuarioSerie.h"
#include "usuario.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM_S 30
#define TAM_US 600
#define TAM_U 20


void CrearEstadoSeries(eSerie array[],int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        array[i].estado = 0;
    }

}

void CrearListadoSeries(eSerie array[],int cantidad)
{
    int i;


    for(i=0; i<cantidad; i++)
    {
        array[i].idSerie=i+1;
        array[i].estado = 0;
        if(i%2==0)
        {
            strcpy(array[i].genero,"Terror");
        }
        else
        {
            strcpy(array[i].genero,"Humor");
        }



    }
    strcpy(array[0].nombre,"Los muertos vivos");
    strcpy(array[1].nombre,"Los vickingos");
    strcpy(array[2].nombre,"Los extraterrestres");
    strcpy(array[3].nombre,"Los Hacker");
    strcpy(array[4].nombre,"Los perdidos");

    array[0].estado = 1;
    array[1].estado = 1;
    array[2].estado = 1;
    array[3].estado = 1;
    array[4].estado = 1;


}

void mostrarSerie(eSerie lista[], int cantidad)
{
    for(int i=0; i<cantidad; i++)
    {

        if(lista[i].estado == 1)
        {
             printf("Nombre: %s Genero: %s", lista[i].nombre, lista[i].genero);
        }

    }
}




void quienveserie(eSerie listaserie[], eUsuarioSerie listausuarioyserie[], eUsuario lista[])
{
    for(int i=0; i<TAM_S; i++)


    {

        if(listaserie[i].estado == 1 )
        {

              printf("\nNombre Serie: %s Estado: %d  \nUsuarios: ", listaserie[i].nombre, listaserie[i].estado);




        }







        for(int j=0; j<TAM_US; j++)
        {


            if(listaserie[i].idSerie == listausuarioyserie[j].idSerie && listaserie[i].estado == 1)
            {
                for(int k=0; k<TAM_U; k++)
                {
                    if(lista[k].idUsuario == listausuarioyserie[j].idUsuario && listaserie[i].estado == 1)
                    {
                        printf("%s ", lista[k].nombre);

                    }

                }

            }

        }




    }





 }
void SeriesMenosPopulares(eSerie listaserie[], eUsuarioSerie listausuarioyserie[], eUsuario lista[])
{
    int contador[TAM_S]= {0};
    int flag =0;
    int seriemenospopular=0;


    for(int i=0; i<TAM_S; i++)
    {
        for(int j=0; j<TAM_US; j++)
        {


            if(listaserie[i].idSerie == listausuarioyserie[j].idSerie)
            {
                for(int k=0; k<TAM_U; k++)
                {
                    if(lista[k].idUsuario == listausuarioyserie[j].idUsuario &&   listaserie[i].estado == 1 && lista[k].idUsuario != 0)
                    {
                        contador[i]++;

                    }




                }


            }

        }



    }

    for(int i=0; i<TAM_S; i++)
    {

        if (listaserie[i].estado == 1)

            {
              if (contador[i] < seriemenospopular || flag == 0)

            {
                seriemenospopular = contador[i];
                flag = 1;

            }

            }


    }







    for(int i=0; i<TAM_S; i++)
    {

        if (contador[i] == seriemenospopular && listaserie[i].estado == 1)
        {
          printf("\nmenos polular para la serie  %d contador %d\n ", listaserie[i].estado, listaserie[i].idSerie, contador[i]);
        }



    }
}



void consultarSerieyMostrarUsuarios(eUsuario lista[], eUsuarioSerie listausuarioyserie[], eSerie listaserie[])
{
    int ids;
    printf("Consultar Serie: (ingrese ID):\n");
    fflush(stdin);
    scanf("%d", &ids);
    int flag=0;
    int flagu=0;


    for(int i=0; i<TAM_U; i++)
    {
        if(ids == listaserie[i].idSerie)
        {
            printf("Nombre de Serie: %s", listaserie[i].nombre);
            flag =1;


            for(int j=0; j<TAM_US; j++)
            {


                if(listaserie[i].idSerie == listausuarioyserie[j].idSerie)

                {

                    for(int k=0; k<TAM_U; k++)
                    {
                        if(lista[k].idUsuario == listausuarioyserie[j].idUsuario && lista[k].idUsuario !=0)
                        {

                            printf("\nUsuario: %s ", lista[k].nombre) ;
                            flagu = 1;
                        }


                    }
                }

            }
        } //
    }

    if(flag == 0)
    {
        printf("serie no encontrada");
    }

     if(flagu == 0)
    {
        printf(" Nadie mira la serie\n");
    }



}




void TopTresSeriesMasPopulares(eSerie listaserie[], eUsuarioSerie listausuarioyserie[], eUsuario lista[])
{
    int contador[TAM_S]= {0};
    int flag1 =0;
      int flag2 =0;
        int flag3 =0;
    int seriemaspopular1=0;
    int seriemaspopular2=0;
    int seriemaspopular3=0;



    for(int i=0; i<TAM_S; i++)
    {
        for(int j=0; j<TAM_US; j++)
        {


            if(listaserie[i].idSerie == listausuarioyserie[j].idSerie)
            {
                for(int k=0; k<TAM_U; k++)
                {
                    if(lista[k].idUsuario == listausuarioyserie[j].idUsuario &&   listaserie[i].estado == 1 && lista[k].idUsuario != 0)
                    {
                        contador[i]++;


                    }




                }


            }

        }



    }

    for(int i=0; i<TAM_S; i++)
    {

        if (listaserie[i].estado == 1)

            {
              if (contador[i] > seriemaspopular1 || flag1 == 0)

            {
                seriemaspopular1 = contador[i];
                flag1 = 1;

            }
            else if ((contador[i] < seriemaspopular1 && contador[i] > seriemaspopular2)|| flag2 == 0)

            {
                seriemaspopular2 = contador[i];
                flag2 = 1;

            }
             else if (((contador[i] > seriemaspopular3) && (contador[i] < seriemaspopular2)) || flag3 == 0)

            {
                seriemaspopular3 = contador[i];
                flag3 = 1;

            }


            }


    }







    for(int i=0; i<TAM_S; i++)
    {

        if (contador[i] == seriemaspopular1 && listaserie[i].estado == 1)
        {
          printf("\nmas polular puesto1  para la serie  %d contador %d\n ", listaserie[i].idSerie, contador[i]);
        }
         else if (contador[i] == seriemaspopular2 && listaserie[i].estado == 1)
        {
          printf("\nmas polular puesto2 para la serie  %d contador %d\n ", listaserie[i].idSerie, contador[i]);
        }
        else if (contador[i] == seriemaspopular3 && listaserie[i].estado == 1)
        {
          printf("\nmas polular puesto3 para la serie  %d contador %d\n ", listaserie[i].idSerie, contador[i]);
        }

    }
}









