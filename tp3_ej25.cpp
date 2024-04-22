// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
//    • El legajo del empleado con mayor sueldo

# include<iostream>

using namespace std;

int main() {
    int legajo;
    int maximo;
    int ingreso_sueldo;
    int ingreso_legajo;

    for (int i=1; i<=10; i++) {
        cout << "Ingrese legajo y sueldo " << i << ": ";
        if (i==1) {
            cin >> legajo >> maximo;
        } else {
            cin >> ingreso_legajo >> ingreso_sueldo;
        }
        if (ingreso_sueldo>maximo) {
            maximo = ingreso_sueldo;
            legajo = ingreso_legajo;
        }
    }
    cout << "El legajo=" << legajo << " con sueldo=" << maximo << " es el mayor." << endl;

	return 0;
}
