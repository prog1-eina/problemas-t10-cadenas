/******************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 16 de noviembre de 2020
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10.
\******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
 * Pre:  Todos los caracteres de «cadena» son letras del alfabeto inglés.
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
 * Pre:  ---
 * Post: Ha probado la función contarLetras. Debería escribir 7 veces «true» en 
 *       la pantalla
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
