// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Hacer un programa para ingresar una lista de números
que finaliza cuando se ingresa un cero,
informar los 2 mayores valores ingresados,
aclarando cual es el máximo y cuál el que le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4
*/
# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int maximo1;
    int maximo2;
    bool maximo1bool=true;
    bool maximo2bool=true;

    cout << "Ingrese un numero: ";
    cin >> ingreso;

    while (ingreso!=0){
        if (maximo1bool) {
            maximo1 = ingreso;
            maximo1bool=false;
        }
        if (ingreso > maximo1) {
            maximo2=maximo1;
            maximo1=ingreso;
        } else if (maximo2bool){
            maximo2 = ingreso;
            maximo2bool = false;
        } else if (ingreso>maximo2) {
            maximo2 = ingreso;
        }
        cout << "Ingrese un numero: ";
        cin >> ingreso;
    } // Fin while


    cout << "Maximo 1=" << maximo1 << endl;
    cout << "Maximo 2=" << maximo2 << endl;

	return 0;
}
