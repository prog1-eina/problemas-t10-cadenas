/********************************************************************************
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 7 de noviembre de 2018
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10.
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/

#include <iostream>
#include <cctype>
using namespace std;

/*
 * Pre:  La cadena «cad» finaliza con una componente cuyo valor es el carácter
 *       nulo ('\0').
 * Post: Ha devuelto el número de componentes de la cadena «cad» cuyo valor
 *       es el de una letra mayúscula o minúscula del alfabeto inglés.
 */
int contarLetras(const char cad[]) {
    int cuenta = 0;
    int i = 0;
    while (cad[i] != '\0') {
        if (isalpha(cad[i])) {
            cuenta++;
        }
        i++;
     }
    return cuenta;
}

/********************************************************************************/
/*
 * Pre:  ---
 * Post: Ha probado la función contarLetras. Debería escribir 6 veces «true» en la
 *       pantalla
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
