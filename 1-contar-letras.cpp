﻿/******************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 7 de noviembre de 2020
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10.
\******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
 * Pre:  ---
 * Post: Ha devuelto el número de caracteres de la cadena «cad» cuyo valor es el 
 *       de una letra mayúscula o minúscula del alfabeto inglés.
 */
unsigned int contarLetras(const string cad) {
    unsigned int cuenta = 0;
    for (unsigned int i = 0; i < cad.length(); i++) {
        if (isalpha(cad.at(i))) {
            cuenta++;
        }
     }
    return cuenta;
}

/******************************************************************************/
/*
 * Pre:  ---
 * Post: Ha probado la función contarLetras. Debería escribir 6 veces «true» en 
 *       la pantalla
 */
int main() {
    cout << boolalpha;
    cout << (contarLetras("") == 0) << endl;
    cout << (contarLetras("1230--$456") == 0) << endl;
    cout << (contarLetras("A0000") == 1) << endl;
    cout << (contarLetras("1234A") == 1) << endl;
    cout << (contarLetras("   AB   ") == 2) << endl;
    cout << (contarLetras("TodoLetras") == 10) << endl;
    return 0;
}
