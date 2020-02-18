#ifndef MENUS_H
#define MENUS_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

// ------------------- Declaración de Structs -------------------
struct _alumno{
    int tipo;
    char apellido1[21];
    char apellido2[21];
    char nombre[21];
    char codigo[11];
    int nota;
};

typedef struct _alumno alumno;

struct _profesor{
    int tipo;
    char apellido1[21];
    char apellido2[21];
    char nombre[21];
    char codigo[11];
    int seccion;
};

typedef struct _profesor profesor;

class Menus
{
public:
    Menus();
    // ::::::::::::::::::::::::::: Menus :::::::::::::::::::::::::::
    void menu_principal();
    // Variables utilizadas en el menu principal
    int opcion;
    // Variables utilizadas para los alumnos y profesores
    int tipo;
    char apellido1[21];
    char apellido2[21];
    char nombre[21];
    char codigo[11];
    int nota;
    int seccion;
    alumno alumno_temporal;
    profesor profesor_temporal;

    void menu_ingresar();
        // Variables utilizadas en menu_ingresar
        int opcion_ingresar;
        void ingresar(int tipo);
    void menu_editar();
        // Variables utilizadas en menu_editar
        int opcion_editar;
        void editar(char codigo[11]);
    void menu_visualizar();
        // Variables utilizadas en menu_visualizar
        int opcion_visualizar;
        void visualizar();
};

#endif // MENUS_H
