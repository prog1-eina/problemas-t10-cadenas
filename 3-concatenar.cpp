/******************************************************************************\
 * Curso de Programación 1. Tema 10 (Caracteres y cadenas de caracteres)
 * Autores: Miguel Ángel Latre
 * Última revisión: 8 de noviembre de 2020
 * Resumen: Soluciones a los problemas de Programación 1 planteados en la clase
 *          de problemas del tema 10.
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
string concatenar(const string prefijo, const unsigned int numero, 
                  const string sufijo) {
    char decenas = numero / 10 + '0';
    char unidades = numero % 10 + '0';
    return prefijo + decenas + unidades + sufijo;
}


/*
 * Programa de prueba de la función «concatenar», que muestra en la pantalla los
 * resultados de invocar a la misma con las cadenas con las que se le invocaría 
 * en el examen de 2.ª convocatoria del curso 2017-18.
 */
int main() {
    const unsigned int NUM_ETAPAS = 21;   
    for (unsigned int etapa = 1; etapa <= NUM_ETAPAS; etapa++) {
        cout << concatenar("clasificacion-etapa-", etapa, ".dat") << endl;
    }
    return 0;
}