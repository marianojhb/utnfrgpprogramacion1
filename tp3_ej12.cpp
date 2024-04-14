// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int mp; // minimo de los positivos
    int mn; // maximo de los negativos
    int ingreso;
    int i;
    cout << "1) Ingrese un numero: ";
    cin >> ingreso;
    mp = ingreso;
    mn = ingreso;
    for (i=2;i<=10;i++) {
        cout << i << ") Ingrese un numero: ";
        cin >> ingreso;
        if (ingreso > 0 && ingreso < mp) {
            mp = ingreso;
        }
        if (ingreso < 0 && ingreso > mn) {
            mn = ingreso;
        }
    }
    cout << "El maximo de los positivos es " << mp << " y el minimo de los negativos es " << mn;
	return 0;
}
