// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {

    int num; // Los ingresos
    int pos; // Contador de posicion
    bool primero = true; // Bandera para el primero ingreso
    int maximo; // guardo el maximo
    int ubicacionMaximo;

    while (num != 0) {

        if (num > maximo) {
            maximo = num;
            ubicacionMaximo = pos;
            }


        cout << "Ingrese un numero: " ;
        cin >> num;
        pos++;
        if (primero) {
            pos=1;
            maximo = num;
            ubicacionMaximo = pos;
            primero = false;

        }

    } // Fin while

    cout << "Maximo=" << maximo << endl;
    cout << "Posición=" << ubicacionMaximo << endl;

	return 0;
}
