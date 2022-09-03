#include <iostream>
#include "menu.h"
using namespace std;

int main(){
    //Biblioteca* biblio=new Biblioteca;
    //abrir_archivo(biblio);

    mostrar_menu();
    int opcion = elegir_opcion();

    while (procesar_opcion(opcion)) {
        mostrar_menu();
        opcion = elegir_opcion();
    }

    return 0;

}