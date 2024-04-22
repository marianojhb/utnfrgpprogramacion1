// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario Se define como divisores propios de un número a aquellos que son sus divisores excluyendo al número en sí mismo.
// Se define a un número como perfecto cuando la suma de todos sus divisores propios coincide con el número en sí mismo.
// Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el mismo es un número perfecto o no es número perfecto


# include<iostream>

using namespace std;

int main() {
    int ingreso;
    cout << "Ingrese un numero: ";
    cin >> ingreso;
    int sumaDivisores = 0;
    for (int i=1; i<ingreso; i++ ) {
        if (ingreso % i == 0 ) {
            sumaDivisores = sumaDivisores + i;
        }
    }
    cout << "Suma divisores: " << sumaDivisores << endl;

    if (sumaDivisores == ingreso) {
     cout << "Es un numero perfecto. " << endl;
    } else {
     cout << "No es un numero perfecto. " << endl;

    }

	return 0;
}
