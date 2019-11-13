/********************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 13 de noviembre de 2019
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10 (cadenas de caracteres).
 *          Problema 3 del examen de 1.ª convocatoria del curso 2018-19
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/
#include <cctype>
#include <iostream>
using namespace std;

const int MAX_LONG = 30;

/*
 * Pre:  «palabra» es una cadena de caracteres acabada en el carácter '\0' y
 *       de menos de MAX_LONG caracteres que no contiene ningún
 *       carácter blanco (ni espacios en blanco, tabulaciones o caracteres de
 *       cambio de línea).
 * Post: Cuando se ha terminado de ejecutar esta función, la cadena de
 *       caracteres «palabra» contiene únicamente las letras del alfabeto
 *       inglés que contenía inicialmente (cuando se comenzó a ejecutar esta
 *       función). Cualquier otro carácter ha sido eliminado.
 *
 *       Ejemplos:
 *
 *       Valor inicial de «palabra»         Valor final de «palabra»
 *       -----------------------------------------------------------
 *       ""                                 ""
 *       "En"                               "en"
 *       "un"                               "un"
 *       "Mancha,"                          "mancha"
 *       "corredor."                        "corredor"
 *       "-¡Oh!"                            "oh"
 *       "¿Duermen?"                        "duermen"
 *       "1604"                             ""
 *       "H2SO4"                            "hso"
 */
void limpiar(char palabra[]) {
    // Índice con el que consultar cada carácter del valor original de la
    // cadena «palabra». Se va a incrementar de forma constante en 1 unidad
    // en el bucle que procesará palabra.
    int indOriginal = 0;

    // Índice con el que escribir cada carácter del valor final de «palabra».
    // Se va a incrementar en 1 o 0 componentes por iteración, dependiendo de
    // si palabra[indOriginal] es una letra o no. Por ello, se va a cumplir
    // que indLimpia <= indOriginal.
    int indLimpia = 0;

    while (palabra[indOriginal] != '\0') {
        if (isalpha(palabra[indOriginal])) {
            palabra[indLimpia] = tolower(palabra[indOriginal]);
            indLimpia++;
        }
        indOriginal++;
    }
    // palabra[indOriginal] != '\0'

    // Como indLimpia <= indOriginal, hay que asegurarse de que la palabra
    // limpia termina con un carácter nulo en la posición indexada por
    // «indLimpia».
    palabra[indLimpia] = '\0';
}


/*
 * Programa de prueba de la función «limpiar», que muestra en la pantalla los
 * resultados de invocar a la misma con las cadenas de ejemplo que aparecen en su
 * especificación.
 */
int main() {
    const int NUM_PRUEBAS = 9;
    char pruebas[9][MAX_LONG] = { "", "En", "un", "Mancha,", "corredor.",
                                        "-¡Oh!", "¿Duermen?", "1604", "H2SO4"};
    for (int i = 0; i < NUM_PRUEBAS; i++) {
        limpiar(pruebas[i]);
        cout << '\"' << pruebas[i] << '\"' << endl;
    }

    return 0;
}