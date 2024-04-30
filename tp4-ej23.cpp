// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Dada una lista de números que finaliza cuando se ingresa un número divisible por 7,
informar cual es el anteúltimo y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.

Nota: Contemplar la posibilidad que podría no haber números impares en la lista.
*/
# include<iostream>

using namespace std;

int main() {
    int num, anteultimo, ultimo,vueltas=0;
    cout << "INGRESE UN NUMERO ";
    cin >> num;
    while (num%7!=0) {
        if (num%2!=0) {
            anteultimo=ultimo;
            ultimo = num;
            vueltas++;
        }

        if (num%7!=0) {
            cout << "INGRESE UN NUMERO ";
            cin >> num;
        }
    }
    if (vueltas>1) {
        cout << "ANTEULTIMO " << anteultimo << endl;
        cout << "ULTIMO " << ultimo << endl;
    } else if (vueltas==1) {
        cout << "UN SOLO IMPAR " << ultimo << endl;
    } else {
        cout << "NO HAY IMPARES" << endl;
    }
	return 0;
}
