#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED


typedef struct{
    int idUsuario;
    char nombre[50];
    int estado;
}eUsuario;


void CrearListadoDeTresUsuarios(eUsuario []);
void mostrarListadoUsu(eUsuario []);




#endif // USUARIO_H_INCLUDED


