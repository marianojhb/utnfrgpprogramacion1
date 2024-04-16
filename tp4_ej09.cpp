
// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int maximoPar;
    bool primero=true;

    while (ingreso != 0 ) {

        // resto de los ingresos
        if (ingreso%2==0) {
            if (ingreso>maximoPar) {
                maximoPar=ingreso;
            }
        }

        // pido nuevo ingreso
        cout << "Ingrese un numero: " ;
        cin >> ingreso;

        // primero ingreso
        if (ingreso%2==0) {
            if(primero) {
                maximoPar=ingreso;
                primero=false;
            }
        }
    }
    cout << "Maximo par=" << maximoPar << endl;
	return 0;
}
