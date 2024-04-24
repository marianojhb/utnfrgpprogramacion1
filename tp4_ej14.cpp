// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Hacer un programa para ingresar una lista de números
que finaliza cuando se ingresa un cero,
informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”
*/
# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int ultimoIngreso;
    bool ordenados = true;
    bool primerIngreso = true;

    cout << "Ingrese un numero: ";
    cin >> ingreso;


    while (ingreso !=0)
    {
        if (primerIngreso) {
            ultimoIngreso = ingreso;
            primerIngreso = false;
        } else if (ingreso < ultimoIngreso) {
            ordenados = false;
        }
        ultimoIngreso = ingreso;
        cout << "Ingrese un numero: ";
        cin >> ingreso;
    } // Fin while

    if(ordenados) {
        cout << "Conjunto Ordenado" << endl;
    } else {
        cout << "Conjunto Desordenado" << endl;
    }

	return 0;
}
