/********************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 7 de noviembre de 2018
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10.
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;


/*
 * Pre:  La cadena «cadena» finaliza con una componente cuyo valor es el
 *       carácter nulo ('\0').
 * Post: Ha devuelto la longitud de la cadena «cadena», tal y como lo
 *       haría la función «strlen» de la biblioteca predefinida «cstring».
 */
int longitud(const char cadena[]) {
    int cuenta = 0;
    while (cadena[cuenta] != '\0') {
        cuenta++;
    }
    return cuenta;
}

/*
 * Pre:  La cadena «origen» finaliza con una componente cuyo valor es el
 *       carácter nulo (‘\0’). Sea n el número de caracteres de la cadena
 *       «origen»: la cadena «destino» tiene una dimensión igual o
 *       superior a n caracteres.
 * Post: Ha copiado los n caracteres de «origen» en «destino» y ha acabado
 *       «destino» con un carácter nulo (‘\0’), tal y como lo haría la
 *       función «strcpy» de la biblioteca predefinida «cstring».
 */
void copiar(char destino[], const char origen[]) {
    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}

/*
 * Pre:  La cadena «origen» finaliza con una componente cuyo valor es el
 *       carácter nulo (‘\0’). Sea n el número de caracteres de la cadena
 *       «origen»: la cadena «destino» tiene una dimensión suficiente como
 *       para añadirle los n caracteres de la cadena «origen».
 * Post: Ha concatenado los n caracteres de «origen» en «destino», a
 *       partir del último carácter que «destino» tenía inicialmente y ha
 *       acabado «destino» con un carácter nulo (‘\0’), tal y como lo
 *       haría la función «strcat» de la biblioteca predefinida «cstring».
 */
void concatenar(char destino[], const char origen[]) {
    int longDestino = longitud(destino);
    int i = 0;
    while (origen[i] != '\0') {
        destino[longDestino + i] = origen[i];
        i++;
    }
    destino[longDestino + i] = '\0';
}


/*
 * Pre:  Las cadenas «cad1» y «cad2» finalizan cada una con una componente
 *       cuyo valor es el carácter nulo (‘\0’). Sea n el número de
 *       caracteres de la cadena «cad1» y m el número de caracteres de la
 *       cadena «cad2».
 * Post: Ha comparado las cadenas «cad1» y «cad2», carácter a carácter
 *       desde la componente 0. Ha devuelto 0 si el contenido de ambas es
 *       idéntico (es decir, si n=m y todos los caracteres de «cad1»
 *       coinciden con los de «cad2»). Ha devuelto un valor positivo si en
 *       la primera discrepancia entre ambas el carácter de la cadena
 *       «cad1» tiene un código mayor que el de «cad2» y ha devuelto un
 *       valor negativo si en la primera discrepancia entre ambas el
 *       carácter de la cadena «cad1» tiene un código ASCII menor que el
 *       de la cadena «cad2», tal y como lo haría la función «strcmp» de
 *       la biblioteca predefinida «cstring».
 */
int comparar(const char cad1[], const char cad2[]) {
    int i = 0;
    while (cad1[i] == cad2[i] && cad1[i] != '\0' && cad2[i] != '\0') {
        i++;
    }
    // cad1[i] != cad2[i] || cad1[i] == '\0' || cad2[i] == '\0'
    return cad1[i] - cad2[i];
}


/*
 * Pre:  ---
 * Post: Prueba las funciones «longitud», «copiar», «concatenar» y «comparar».
 */
int main() {

    const char UNIZAR[] = "Universidad de Zaragoza";

    /*** Longitud ***/
    cout << longitud("") << " = " << strlen("") << endl;
    cout << longitud("a") << " = " << strlen("a") << endl;
    cout << longitud(UNIZAR) << " = " << strlen(UNIZAR) << endl;


    /*** Copiar ***/
    char resultado[80];
    char resultadoCString[80];

    copiar(resultado, UNIZAR);
    strcpy(resultadoCString, UNIZAR);
    cout << "\"" << resultado << "\" = \"" << resultadoCString << "\"" << endl;

    copiar(resultado, "a");
    strcpy(resultadoCString, "a");
    cout << "\"" << resultado << "\" = \"" << resultadoCString << "\"" << endl;

    copiar(resultado, "");
    strcpy(resultadoCString, "");
    cout << "\"" << resultado << "\" = \"" << resultadoCString << "\"" << endl;


    /*** Concatenar ***/
    char inicio[80] = "UNIZAR";
    char inicioCString[80] = "UNIZAR";

    concatenar(inicio, " 1");
    strcat(inicioCString, " 1");
    cout << "\"" << inicio << "\" = \"" << inicioCString << "\"" << endl;

    concatenar(inicio, "a");
    strcat(inicioCString, "a");
    cout << "\"" << inicio << "\" = \"" << inicioCString << "\"" << endl;

    concatenar(inicio, "");
    strcat(inicioCString, "");
    cout << "\"" << inicio << "\" = \"" << inicioCString << "\"" << endl;

    inicio[0] = 'P';
    inicio[1] = '\0';
    inicioCString[0] = 'P';
    inicioCString[1] = '\0';

    concatenar(inicio, "rogramacion 1");
    strcat(inicioCString, "rogramacion 1");
    cout << "\"" << inicio << "\" = \"" << inicioCString << "\"" << endl;

    concatenar(inicio, "a");
    strcat(inicioCString, "a");
    cout << "\"" << inicio << "\" = \"" << inicioCString << "\"" << endl;

    concatenar(inicio, "");
    strcat(inicioCString, "");
    cout << "\"" << inicio << "\" = \"" << inicioCString << "\"" << endl;

    inicio[0] = '\0';
    inicioCString[0] = '\0';

    concatenar(inicio, UNIZAR);
    strcat(inicioCString, UNIZAR);
    cout << "\"" << inicio << "\" = \"" << inicioCString << "\"" << endl;

    concatenar(inicio, "a");
    strcat(inicioCString, "a");
    cout << "\"" << inicio << "\" = \"" << inicioCString << "\"" << endl;

    concatenar(inicio, "");
    strcat(inicioCString, "");
    cout << "\"" << inicio << "\" = \"" << inicioCString << "\"" << endl;


    /*** Copiar ***/
    cout << comparar("", "") << " = " << strcmp("", "") << endl;
    cout << comparar("Iguales", "Iguales")
         << " = " << strcmp("Iguales", "Iguales") << endl;
    cout << boolalpha;
    cout << (comparar("Iguales", "Distintas") > 0)
         << " = " << (strcmp("Iguales", "Distintas") > 0) << endl;
    cout << (comparar("Distintas", "Iguales") < 0)
         << " = " << (strcmp("Distintas", "Iguales") < 0) << endl;
    cout << (comparar("abcZ", "abcD") > 0)
         << " = " << (strcmp("abcZ", "abcD") > 0) << endl;
    cout << (comparar("abcD", "abcZ") < 0)
         << " = " << (strcmp("abcD", "abcZ") < 0) << endl;
    cout << (comparar("abcD", "abc") > 0)
         << " = " << (strcmp("abcD", "abc") > 0) << endl;
    cout << (comparar("abc", "abcD") < 0)
         << " = " << (strcmp("abc", "abcD") < 0) << endl;
    return 0;
}
