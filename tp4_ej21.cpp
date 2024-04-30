// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que la diferencia entre el máximo y
el mínimo sea mayor a 10. Calcular e informar:
    • La cantidad de números que componen la lista.

Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7
*/


# include<iostream>

using namespace std;

int main() {
    int n; // declaro la variable de datos de ingreso

    int maximo;
    int minimo;

    cout << "Ingrese un numero: ";
    cin >> maximo;
    cout << "Se ingreso el primer numero como máximo: " << maximo << endl;

    cout << "Ingrese un numero: ";
    cin >> n;

    if (n>maximo) {
        minimo = maximo;
        maximo = n;
        cout << "Nuevo maximo: " << maximo << endl;
        cout << "El mínimo es: " << minimo << endl;
        cout << "La diferencia entre ambos es: " << maximo - minimo << endl;
    } else {
        n = minimo;
        cout << "La diferencia entre ambos es: " << maximo - minimo << endl;
    }

    while (maximo-minimo < 10) {
        if (n > maximo) {
            maximo = n;
            cout << "Nuevo maximo: " << maximo << endl;
            cout << "La diferencia entre ambos es: " << maximo - minimo << endl;
        } else if (n<minimo) {
            minimo = n;
            cout << "El mínimo es: " << minimo << endl;
            cout << "La diferencia entre ambos es: " << maximo - minimo << endl;
        }
        cout << endl;
        if (maximo - minimo < 10) {
            cout << "Ingrese un numero: ";
            cin >> n;
        }
    }





	return 0;
}
