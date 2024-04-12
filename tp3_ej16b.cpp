// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int mayor;
    int segundoMayor;
    cout << "1) Ingrese un numero: ";
    cin >> ingreso;
    segundoMayor = ingreso;

    for (int i=2;i<=5;i++) {
        cout << i << ") Ingrese un numero: ";
        cin >> ingreso;
        if (ingreso > segundoMayor) {
            mayor=ingreso;
        } else {
            segundoMayor = ingreso;
        }

        }

    cout << "Mayor es: " << mayor << " y segundo mayor es: " << segundoMayor << endl;



	return 0;
}
