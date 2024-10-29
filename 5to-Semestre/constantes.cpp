// Definicion: 

// las constantes son valores fijos (posiciones de memoria) que no pueden cambiar durante la ejecucion de un programa.
// Ej: "A" y "a" son constantes de caracteres "Ana" es una constante de cadena de caracteres.

// Hay dos maneras de declarar constantes en c++.
// 1 - Uso de const
// 2 - "  " #define

// 1. Usando la palabra reservada const.
// Sintaxis:

// const <tipo_dato> <nombre_const> = <valor>

// Ej:
// const int DIAS_SEM = 7;
// const char LETRA = "A";

// 2. Usando la directiva de preprocesador #define
// Sintaxis:

// #define <nombre_const> <valor>

// Ej:
// #define PI 3.1415
// #define MAX 50
// nota: Se sugiere, por eficiencia, usar const antes que #define

