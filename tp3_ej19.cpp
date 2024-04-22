// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    cout << "Ingrese un numero: ";
    cin >> ingreso;
    int cuentaDivisores = 0;
    for (int i=1; i<=ingreso; i++ ) {
        if (ingreso % i == 0 ) {
            cuentaDivisores++;
        }
    }
    cout << "Tiene " << cuentaDivisores << " divisores." << endl;
	return 0;
}
