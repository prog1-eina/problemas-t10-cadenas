/******************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 8 de noviembre de 2020
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 4-concatenar.cpp -o 4-concatenar
 *       y ejecutarse en Windows a través de la orden
 *           .\4-concatenar.exe
 *       o en Linux y macOS
 *           ./4-concatenar
\******************************************************************************/
#include <string>
#include <iostream>
using namespace std;

/*
 * Pre:  «numero» < 100.
 * Post: Devuelve la cadena de caracteres resultante de concatenar la cadena 
 *       «prefijo» con la representación decimal de exactamente dos dígitos de
 *       «numero» y con la cadena «sufijo».
 */
string concatenar(const string prefijo, const unsigned numero, 
                  const string sufijo) {
    string cadNumero = to_string(numero);
    if (numero < 10) {
        cadNumero = "0" + cadNumero;
    }
    return prefijo + cadNumero + sufijo;
}


/*
 * Programa de prueba de la función «concatenar», que muestra en la pantalla los
 * resultados de invocar a la misma con las cadenas con las que se le invocaría 
 * en el examen de 2.ª convocatoria del curso 2017-18.
 */
int main() {
    const unsigned NUM_ETAPAS = 21;   
    for (unsigned etapa = 1; etapa <= NUM_ETAPAS; etapa++) {
        cout << concatenar("clasificacion-etapa-", etapa, ".dat") << endl;
    }
    return 0;
}