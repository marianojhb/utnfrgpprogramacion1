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
    mayor = ingreso;
    cout << "2) Ingrese un numero: ";
    cin >> ingreso;
    segundoMayor = ingreso;
    if (ingreso > mayor) {
        segundoMayor = mayor;
        mayor = ingreso;
    }

    for (int i=3;i<=5;i++) {
        cout << i << ") Ingrese un numero: ";
        cin >> ingreso;
        if (ingreso > segundoMayor) {
            segundoMayor=ingreso;
        }
        if ( segundoMayor > mayor ) {
            ingreso = mayor;
            mayor = segundoMayor;
            segundoMayor = ingreso;

        }
    }
    cout << "Mayor es: " << mayor << " y segundo mayor es: " << segundoMayor << endl;



	return 0;
}
