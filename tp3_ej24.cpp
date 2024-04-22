// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
    • El sueldo máximo.
    • El sueldo mínimo.
    • El sueldo promedio.
    • Cantidad de sueldos mayores a $50000.
*/

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int sueldoMaximo;
    int sueldoMinimo;
    int sueldoPromedio;
    int cuentaSueldos = 0;
    int cuentaSueldos50k = 0;
    int acumulaSueldos = 0;


    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese sueldo " << i << ": ";
        cin >> ingreso;
        cuentaSueldos++;
        acumulaSueldos += ingreso;
        if (ingreso > 50000) {
            cuentaSueldos50k++;
        }
        if (i==1) {
            sueldoMaximo = ingreso;
            sueldoMinimo = ingreso;
        } else {
            if (ingreso>sueldoMaximo) {
                sueldoMaximo = ingreso;
            }
            if (ingreso < sueldoMinimo) {
                sueldoMinimo = ingreso;
            }
        }
    }
    sueldoPromedio = (float)acumulaSueldos/cuentaSueldos;

    cout << "Sueldo maximo=" << sueldoMaximo << endl;
    cout << "Sueldo minimo=" << sueldoMinimo << endl;
    cout << "Sueldo promedio=" << sueldoPromedio << endl;
    cout << "Cantidad de sueldos mayores a 50000=" << cuentaSueldos50k << endl;


	return 0;
}
