// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int maximo;
    // pido ingresar 10 numeros
    // ingreso 10 numeros
    cout << "1) Ingrese un numero: ";
    cin >> ingreso;
    maximo = ingreso;
    for (int i=2;i<=4;i++) {
        cout << i << ") Ingrese un numero: ";
        cin >> ingreso;
        if (ingreso>maximo) {
        maximo = ingreso;
        }
    }
    cout << "El numero mas alto es el " << maximo;
	return 0;
}
