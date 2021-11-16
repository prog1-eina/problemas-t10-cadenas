/******************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 16 de noviembre de 2020
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10 (cadenas de caracteres).
 *          Basado en el problema 3 del examen de 1.ª convocatoria del curso 
 *          2018-19
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Run Code de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 5-limpiar.cpp -o 5-limpiar
 *       y ejecutarse en Windows a través de la orden
 *           .\5-limpiar.exe
 *       o en Linux y macOS
 *           ./5-limpiar
\******************************************************************************/
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

/*
 * Pre:  «palabra» es una cadena de caracteres que no contiene ningún
 *       carácter blanco (ni espacios en blanco, tabuladores o caracteres de
 *       cambio de línea).
 * Post: Devuelve una cadena de caracteres cuyo contenido es el de las letras
 *       del alfabeto inglés de «palabra», en el mismo orden que en «palabra»,
 *       pero siempre en sus versiones minúsculas. Cualquier otro carácter de 
 *       «palabra» no ha sido copiado en la cadena devuelta.
 *
 *       Ejemplos:
 *
 *       «palabra»         Valor devuelto
 *       --------------------------------
 *       ""                ""
 *       "En"              "en"
 *       "un"              "un"
 *       "Mancha,"         "mancha"
 *       "corredor."       "corredor"
 *       "-¡Oh!"           "oh"
 *       "¿Duermen?"       "duermen"
 *       "1604"            ""
 *       "H2SO4"           "hso"
 */
string limpiar(const string palabra) {
    string resultado = "";
    for (unsigned i = 0; i < palabra.length(); i++) {
        if (isalpha(palabra.at(i))) {
            resultado += tolower(palabra.at(i));
        }
    }
    return resultado;
}


/*
 * Programa de prueba de la función «limpiar», que muestra en la pantalla los
 * resultados de invocar a la misma con las cadenas de ejemplo que aparecen en
 * su especificación.
 */
int main() {
    const unsigned NUM_PRUEBAS = 9;
    const string PRUEBAS[NUM_PRUEBAS] = { "", "En", "un", "Mancha,", 
                            "corredor.", "-¡Oh!", "¿Duermen?", "1604", "H2SO4"};
    for (unsigned i = 0; i < NUM_PRUEBAS; i++) {
        cout << '"' << limpiar(PRUEBAS[i]) << '"' << endl;
    }

    return 0;
}