// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Hacer un programa para ingresar 5 números, luego informar los 2 mayores
valores ingresados, aclarando cual es el máximo y cuál el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo C: -4, -8, -12, -20, -2 el resultado será -2 y -4
Ejemplo D: 100, 20, 5, - 15, 70, el resultado será 100 y 70.
*/
# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int maximo1;
    int maximo2;

    for (int i=1; i<=5;i++) {
        cout << i << ") Ingrese un numero: ";
        cin >> ingreso;
        if (i==1) {
            maximo1 = ingreso;
        } else if (i==2) {
            if (ingreso>maximo1) {
                maximo2=maximo1;
                maximo1=ingreso;
            } else if (ingreso > maximo2) {
                maximo2=ingreso;
            }
        } else {
            if(ingreso>maximo1) {
                maximo2=maximo1;
                maximo1=ingreso;
            } else if(ingreso>maximo2) {
                maximo2=ingreso;
            }
        }
    }

    cout << "Maximo1=" << maximo1 << endl;
    cout << "Maximo2=" << maximo2 << endl;

	return 0;
}
