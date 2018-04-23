#ifndef USUARIOSERIE_H_INCLUDED
#define USUARIOSERIE_H_INCLUDED
#include "serie.h"
#include "usuario.h"


typedef struct{
    int idUsuario;
    int idSerie;
}eUsuarioSerie;

void CrearListadoUsuariosYSeries(eUsuarioSerie []);
void seriequeve(eUsuario [], eUsuarioSerie [], eSerie []);
void quienveserie(eSerie [], eUsuarioSerie [], eUsuario []);


#endif // USUARIOSERIE_H_INCLUDED



