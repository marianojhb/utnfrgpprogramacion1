// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que
se ingrese el 5º número par.

Calcular e informar:
    • La cantidad de ternas de números negativos ingresados de manera consecutiva.

Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2
*/


# include<iostream>

using namespace std;

int main() {

int n, cantPares=0, cantTernas=0, negativos=0;
cout << "INGRESE UN NUMERO ";
cin >> n;
    while(cantPares < 5) {
        if (n%2==0){
            cantPares++;
        }
        if (n<0){
            negativos++;
        }
        if (negativos == 3) {
            cantTernas++;
            negativos=0;
        }

        if (cantPares < 5) {
            cout << "INGRESE UN NUMERO ";
            cin >> n;

        }
    }
    cout << "CANTIDAD DE TERNAS: " << cantTernas << endl;


	return 0;
}
