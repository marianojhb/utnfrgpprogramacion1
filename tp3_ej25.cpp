// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int legajo;
    int maximo;
    int ingreso_sueldo;
    int ingreso_legajo;
    cout << "Ingrese legajo y sueldo: ";
    cin >> legajo >> maximo;

    for (int i=2; i<=10; i++) {
        cout << "Ingrese legajo y sueldo " << i << ": ";
        cin >> ingreso_legajo >> ingreso_sueldo;
        if (ingreso_sueldo>maximo) {
            maximo = ingreso_sueldo;
            legajo = ingreso_legajo;
        }
    }
    cout << "El legajo=" << legajo << " con sueldo=" << maximo << " es el mayor." << endl;

	return 0;
}
