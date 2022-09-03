#include <iostream>
using namespace std;

const int LISTAR_LIBROS = 1;
const int AGREGAR_LIBRO = 2;
const int EDITAR_PUNTAJE = 3;
const int MOSTRAR_LIBRO_FAV = 4;
const int MOSTRAR_MENOR_PUNTAJE=5;
const int MOSTRAR_GENERO_MAS_LEIDO=6;
const int MOSTRAR_GENERO_FAV =7;
const int GUARDAR_Y_SALIR=8;
const int MAXIMO_OPCIONES=9;


void mostrar_menu(){
    cout << "---------------MENU---------------"<<endl;
    cout <<"1. Listar libros leídos."<<endl;
    cout<<"2. Agregar libro ."<<endl ;
    cout<<"3. Editar puntaje de un libro por título."<<endl;
    /*
    cout<<"4. Mostrar libro favorito."<<endl;
    cout<<"5. Mostrar los 3 libros con menor puntaje."<<endl;
    cout<<"6. Mostrar género más leído."<<endl;
    cout<<"7. Mostrar género favorito."<<endl;
    */
    cout<<"8. Guardar y salir."<<endl;
}

int elegir_opcion(){
    int opcion;
    cout<<"Ingrese opcion : ";
    cin >> opcion;
    cout << "escogiste "<<opcion << endl;
    return opcion;
}


bool procesar_opcion(/*Biblioteca* biblio,*/int opcion){
    bool estado;

    switch (opcion){
        case LISTAR_LIBROS:
            //mostrar_libros(biblio);
            cout << "Listar libros" << endl;
            estado = true;
            break;

        case AGREGAR_LIBRO:
            //introduccion_datos(biblio);
            cout<<"Libro agregado exitosamente"<<endl;
            estado = true;
            break;

        case EDITAR_PUNTAJE:
            //modificar_puntaje(biblio);
            estado = true;
            break;

        case GUARDAR_Y_SALIR:
            cout<<"-------------CHAU"<<endl;
            estado = false;
            break;

        default :
            cout<<"-------------ERROR"<<endl;
            estado = true;

        }
    return estado;
}