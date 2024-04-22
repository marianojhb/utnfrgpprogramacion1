// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/* Dada una lista de números que finaliza cuando se ingresa un cero,
informar cual es el primer y segundo número impar ingresado.
Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se informa 5 y -9

*/
# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int primerImpar;
    bool primerImparBool = false;
    int segundoImpar;
    cout << "Ingrese un numero: ";
    cin >> ingreso;
    while (ingreso !=0) {
        if (ingreso %2 !=0 ) {
            if (primerImparBool == false) {
                primerImpar = ingreso;
                primerImparBool = true;
            } else {
                segundoImpar = ingreso;
            }

        }
        cout << "Ingrese un numero: ";
        cin >> ingreso;
    } // Fin while
    cout << "Primer impar=" << primerImpar << endl;
    cout << "Ultimo impar=" << segundoImpar << endl;

	return 0;
}
