// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Una universidad dispone de diez aulas para acomodar a una cantidad de asistentes a una charla.
Cada aula tiene una capacidad total de 60 personas. Se necesita un programa que solicite la cantidad
de asistentes a la charla y  determine la cantidad total de aulas necesarias para acomodarlos a todos.

Por ejemplo:
Si los asistentes son 120 se necesitarán 2 aulas.
Si los asistentes son 123 se necesitarán 3 aulas.
Si los asistentes son 40 se necesitará 1 aula.

DESAFÍO: No utilizar el operador de división ni el de resto en el algoritmo.
*/

# include<iostream>

using namespace std;

int main() {
    int inscriptos;
    int cantAulas=0;
    int contador=0;


    cout << "INGRESE ASISTENTES: ";
    cin >> inscriptos;

    cantAulas = 1;
    contador = 1;
    while (contador<=inscriptos) {

        if (contador==61 ) {
            cantAulas++;
            inscriptos = inscriptos - 60;
        }
        contador++;

    }

        cout << "SE NECESITAN " << cantAulas << " AULAS" << endl;


	return 0;
}
