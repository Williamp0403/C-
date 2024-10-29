// Directivas de preprocesadores en C++:

// Indican al copilador que realice acciones especificas el uso mas comun es insertar contenido de otros archivos en el archivo principal main()
// Dos de las mas usadas son

// #define
// #include
// NOTA:
// Primero se colocan todas las directivas #include juntas, y luego las #define

// #include <especificacion_ruta>
// Indica al compilador que lea y compile otro archivo fuente (librerias) esto es, inserta el codigo en donde esta el "#include"
// #include<iostream>

//           ___ NOMBRE_MACRO CADENA
// #define--|___ NOMBRE_COMPONENTE CONSTANTE
// #if EXPRESION_CONSTANTE
// _
// #elif
// _
// #endif

// Ej: Codigo que maneja diferentes monedas

#define CO
#define US
#define EU
#define MONEDA US

      

#include <iostream>;
using namespace std;
#define DIEZ 10;

int main (void) {
    #ifdef DIEZ
}