#include <cstring>
#include <iostream>
using namespace std;

/*
 * Pre:  La cadena de caracteres «resultado» ha sido declarada con al menos
 *       strlen(prefijo) + strlen(sufijo) + 3 caracteres, «prefijo» y «sufijo»
 *       son cadenas de caracteres acabadas en el carácter nulo '\0' y
 *       «numero» es positivo y tiene como mucho dos dígitos cuando se escribe
 *       en base 10.
 * Post: «resultado» es la cadena de caracteres acabada en el carácter nulo
 *       '\0' resultante de concatenar la cadena «prefijo» con la
 *       representación decimal de dos dígitos de «numero» y con la cadena
 *       «sufijo».
 */
void concatenar(char resultado[], const char prefijo[], const int numero,
                const char sufijo[]) {
    strcpy(resultado, prefijo);
    int i = strlen(prefijo);
    resultado[i] = numero / 10 + '0';
    resultado[i + 1] = numero % 10 + '0';
    resultado[i + 2] = '\0';
    strcat(resultado, sufijo);
}


/*
 * Programa de prueba de la función «concatenar», que muestra en la pantalla los
 * resultados de invocar a la misma con las cadenas con las que se le invocaría en
 * el examen de 2.ª convocatoria del curso 2017-18.
 */
int main() {
    const int NUM_ETAPAS = 21;
    const int MAX_LONG_NOMBRE_FICHERO = 50;
    
    for (int etapa = 1; etapa <= NUM_ETAPAS; etapa++) {
        char nombreFichero[MAX_LONG_NOMBRE_FICHERO];
        concatenar(nombreFichero, "clasificacion-etapa-", etapa, ".dat");
        cout << nombreFichero << endl;
    }

    return 0;
}