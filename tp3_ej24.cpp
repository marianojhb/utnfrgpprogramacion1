// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

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

    cout << "Ingrese sueldo 1: ";
    cin >> ingreso;
    sueldoMaximo = ingreso;
    sueldoMinimo = ingreso;
    cuentaSueldos++;
    acumulaSueldos += ingreso;
    if (ingreso > 50000) {
        cuentaSueldos50k++;
    }

    for (int i = 2; i <= 10; i++) {
        cout << "Ingrese sueldo " << i << ": ";
        cin >> ingreso;
        cuentaSueldos++;
        acumulaSueldos += ingreso;
        if (ingreso>sueldoMaximo) {
            sueldoMaximo = ingreso;
        }
        if (ingreso < sueldoMinimo) {
            sueldoMinimo = ingreso;
        }
        if (ingreso > 50000) {
            cuentaSueldos50k++;
        }
    }
    sueldoPromedio = (float)acumulaSueldos/cuentaSueldos;

    cout << "Sueldo maximo=" << sueldoMaximo << endl;
    cout << "Sueldo minimo=" << sueldoMinimo << endl;
    cout << "Sueldo promedio=" << sueldoPromedio << endl;
    cout << "Cantidad de sueldos mayores a 50000=" << cuentaSueldos50k << endl;


	return 0;
}
