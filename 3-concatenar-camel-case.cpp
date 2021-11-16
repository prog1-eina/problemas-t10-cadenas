/******************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 15 de noviembre de 2021
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 3-concatenar-camel-case.cpp -o 3-concatenar-camel-case
 *       y ejecutarse en Windows a través de la orden
 *           .\3-concatenar-camel-case.exe
 *       o en Linux y macOS
 *           ./3-concatenar-camel-case
\******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
 * Pre:  ---
 * Post: Devuelve la misma cadena que «palabra» pero con su primer carácter en
 *       mayúscula.
 */
string ponerMayusculaInicial(const string palabra) {
    if (palabra.length() > 0) {
        string resultado = palabra;
        resultado.at(0) = toupper(resultado.at(0));
        return resultado;
    }
    else {
        return "";
    }
}

/*
 * Pre:  El vector «palabras» tiene al menos «numPalabras» componentes.
 * Post: Ha devuelto la cadena resultante de concatenar todas las palabras del 
 *       vector «palabras» utilizando CamelCase.
 */
string concatenarEnCamelCase(const string palabras[],
                             const unsigned numPalabras) {
    // Declaración e inicialización de una cadena para almacenar el resultado.
    // Si el vector tiene 0 componentes (si «numPalabras» = 0), el resultado
    // será la cadena vacía "".
    string resultado = ""; 

    // Si hay una palabra o más, concatenamos a la solución la primera palabra
    // sin modificaciones (sin convertir su primer carácter en mayúscula).
    if (numPalabras > 0) {
        resultado = palabras[0];
    }

    // El resto de las palabras del vector se van concatenando al resultado con
    // su primer carácter en mayúscula.
    for (unsigned i = 1; i < numPalabras; i++) {
        resultado += ponerMayusculaInicial(palabras[i]);
    }

    return resultado;
}

/******************************************************************************/
/*
 * Programa de pruebas de la función «concatenarEnCamelCase».
 * Debería escribir en la pantalla:
 * 
 *     enUnLugarDeLaManchaDeCuyoNombreNoQuieroAcordarme
 * 
 *     ArrayIndexOutOfBoundsException
 *     NaCl
 * 
 * dejando una línea en blanco entre la primera y la tercera.
 */
int main() {
    const string QUIJOTE[] = {"en", "un", "lugar", "de", "la", "mancha", "de", "cuyo", "nombre", "no", "quiero", "acordarme"};
    cout << concatenarEnCamelCase(QUIJOTE, 12) << endl;

    // Prueba con 0 componentes
    cout << concatenarEnCamelCase(QUIJOTE, 0) << endl;

    const string JAVA[] = {"Array", "index", "out", "of", "bounds", "exception"};
    cout << concatenarEnCamelCase(JAVA, 6) << endl;

    // Prueba con cadenas vacías
    const string SAL[] = {"", "na", "", "", "cl", ""};
    cout << concatenarEnCamelCase(SAL, 6) << endl;

    return 0;
}
