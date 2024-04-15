// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    bool alternados = true;
    bool primerIngreso = true;
    int ultimoIngreso;

    for (int i=1;i<=10;i++) {
        cout << "Ingrese un numero: ";
        cin >> ingreso;

        if (primerIngreso) {
            ultimoIngreso = ingreso;
            primerIngreso = false;
        }

        if (alternados && i > 1) {
            if ( (ultimoIngreso %2 == 0 && ingreso %2 != 0 ) || (ultimoIngreso %2 != 0 && ingreso %2 == 0) ) {
            ultimoIngreso = ingreso;

            } else {
                alternados = false;
                ultimoIngreso = ingreso;
            }
        }



    }
    if (alternados) {
        cout << "Estan alternados" << endl ;

    } else {
        cout << "No estan alternados" << endl ;
    }
	return 0;
}
