#include "menus.h"

Menus::Menus()
{
    // ::::::::::::::::::::::::::: Menus :::::::::::::::::::::::::::
        // Variables utilizadas en el menu principal
    opcion = 0;
        // Variables utilizadas para los alumnos y profesores
    tipo = 0;
//    apellido1 = '';
//    apellido2 = '';
//    nombre = '';
//    codigo = '';
    nota = 0;
    seccion = 0;
    // Variables utilizadas en menu_ingresar
    opcion_ingresar = 0;
    // Variables utilizadas en menu_editar
    opcion_editar = 0;
    // Variables utilizadas en menu_visualizar
    opcion_visualizar = 0;
}

void Menus::menu_principal(){
/***********************************************************************/
/***************************Menu Principal******************************/
/***********************************************************************/
    std::cout << "\n\n\n" << std::endl;
    std::cout << "\n▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << std::endl;
    std::cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << std::endl;
    std::cout << "▒                                                ▒" << std::endl;
    std::cout << "▒    ============ MIA - HT 1 ==============      ▒" << std::endl;
    std::cout << "▒                                                ▒" << std::endl;
    std::cout << "▒    - Bienvenido, elige una opción:             ▒" << std::endl;
    std::cout << "▒    1. Ingresar                                 ▒" << std::endl;
    std::cout << "▒    2. Editar                                   ▒" << std::endl;
    std::cout << "▒    3. Visualizar                               ▒" << std::endl;
    std::cout << "▒    4. Salir                                    ▒" << std::endl;
    std::cout << "▒                                                ▒" << std::endl;
    std::cout << "▒                                                ▒" << std::endl;
    std::cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << std::endl;
    std::cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << std::endl;
//    std::getline(std::cin, comando);
//    std::cout << "Comando ingresado: " << comando << std::endl;
    std::cin >> opcion;
    std::cout << std::endl << std::endl;
    while(!std::cin.good()) {
        std::cin.clear();
        std::cin.ignore(INT_FAST8_MAX, '\n');
        std::cout << "Elige una opcion valida." << std::endl;
        std::cin >> opcion;
    }
    switch ( opcion ) {
    case 1:
        menu_ingresar();
        break;
    case 2:
//        editar();
        break;
    case 3:
//        visualizar();
        break;
    case 4:
        exit(1);
    default:
        std::cout << "\n Opción incorrecta, elige una correcta." << std::endl;
        break;
    }
}

void Menus::menu_ingresar(){
    /***********************************************************************/
    /***************************Menu Ingresar******************************/
    /***********************************************************************/
    do{
        std::cout << "\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
        std::cout << "░                                    ░" << std::endl;
        std::cout << "░   =========  Ingresar  =========   ░" << std::endl;
        std::cout << "░                                    ░" << std::endl;
        std::cout << "░  1. Alumno                         ░" << std::endl;
        std::cout << "░  2. Profesor                       ░" << std::endl;
        std::cout << "░  3. Volver                         ░" << std::endl;
        std::cout << "░                                    ░" << std::endl;
        std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
        std::cin >> opcion_ingresar;
        std::cout << std::endl;
        while(!std::cin.good()) {
            std::cin.clear();
            std::cin.ignore(INT_FAST8_MAX, '\n');
            std::cout << "Elige una opción valida." << std::endl;
            std::cin >> opcion_ingresar;
        }
        switch ( opcion_ingresar )
        {
        case 1:
            ingresar(0);
            break;
        case 2:
            ingresar(1);
            break;
        default:
            cout<<"\n Opcion incorrecta, elige una correcta."<<endl;
        }
    }while(opcion_ingresar != 3);{
        system("PAUSE");
    }
}

void Menus::ingresar(int tipo){
    /***********************************************************************/
    /***************************Ingresar******************************/
    /***********************************************************************/
    std::cout << "A continuación ingresa lo que se te pide: " << std::endl;
    if(tipo == 0){ // ##################  Alumno  ##################
        // Apellido 1
        int var = 0;
        do{
            std::cout << "Apellido: " << std::endl;
            std::cin >> apellido1;
            cin.getline(apellido1,20);
            var = atoi(apellido1);
        }while(var == 0);{

        }
//        alumno_temporal.apellido1 = apellido1;
        std::cout << "Apellido 1 ingresado: " << apellido1 << std::endl;
        // Apellido 2
        // Nombre
        // Codigo

    } else if(tipo == 1){ // ##################  Profesor  ##################

    }

}
