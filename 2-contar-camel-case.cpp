/******************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 16 de noviembre de 2020
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 2-contar-camel-case.cpp -o 2-contar-camel-case
 *       y ejecutarse en Windows a través de la orden
 *           .\2-contar-camel-case.exe
 *       o en Linux y macOS
 *           ./2-contar-camel-case
\******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
 * Pre:  Todos los caracteres de «cadena» son letras del alfabeto inglés y 
 *       «cadena» representan una cadena en «camelCase» en la que cada palabra
 *       individual que la forma tiene al menos dos caracteres.
 * Post: Ha devuelto el número de palabras individuales que forman «cadena»
 */
unsigned numeroPalabrasEnCamelCase(const string cadena) {
    if (cadena.length() == 0) {
        return 0;
    }
    else {
        unsigned numPalabras = 1;
        for (unsigned i = 0; i < cadena.length() - 1; i++) {
            if (islower(cadena.at(i)) && isupper(cadena.at(i + 1))) {
                numPalabras++;
            }
        }
        return numPalabras;
    }
}

/******************************************************************************/
/*
 * Programa de pruebas de la función «numeroPalabrasEnCamelCase».
 * Debería escribir 7 veces «true» en la pantalla.
 */
int main() {
    cout << boolalpha;
    cout << (numeroPalabrasEnCamelCase("") == 0) << endl;
    cout << (numeroPalabrasEnCamelCase("a") == 1) << endl;
    cout << (numeroPalabrasEnCamelCase("EINA") == 1) << endl;
    cout << (numeroPalabrasEnCamelCase("camelCase") == 2) << endl;
    cout << (numeroPalabrasEnCamelCase("iPad") == 2) << endl;
    cout << (numeroPalabrasEnCamelCase("ArrayIndexOutOfBoundsException") == 6) << endl;
    cout << (numeroPalabrasEnCamelCase("numeroPalabrasEnCamelCase") == 5) << endl;
    return 0;
}
