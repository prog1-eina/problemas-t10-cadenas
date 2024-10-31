﻿/******************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 31 de octubre de 2024
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10.
 * Nota: El programa completo está contenido en este fichero, por lo que puede 
 *       compilarse y ejecutarse con la extensión Code Runner de Visual Studio 
 *       Code.
 *       También puede compilarse desde la terminal través de la orden
 *           g++ -Wall -Wextra 2-rotar.cpp -o 2-rotar
 *       y ejecutarse en Windows a través de la orden
 *           .\2-rotar.exe
 *       o en Linux y macOS
 *           ./2-rotar
\******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
 * Pre:  ---
 * Post: .
 */
void rotar(string &cadena) {
    char primeraLetra = cadena.at(0);
    for (unsigned i = 0; i < cadena.length() - 1; i++) {
        cadena.at(i) = cadena.at(i + 1);
    }
    cadena.at(cadena.length() - 1) = primeraLetra;
}

/*
 * Pre:  ---
 * Post: .
 */
void rotar2(string &cadena) {
    cadena = cadena.substr(0, cadena.length() - 1) + cadena.at(0);
}


/******************************************************************************/
/*
 * Programa de pruebas del procedimiento «rotar».
 */
int main() {
    string prueba = "programación";
    rotar(prueba);
    cout << prueba << endl;
    return 0;
}