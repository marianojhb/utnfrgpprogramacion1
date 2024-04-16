// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int maximoNegativo;
    int minimoPositivo;
    int primeroPositivo = true;
    int primeroNegativo = true;

    while(ingreso != 0) {

        if (ingreso > 0) {
            if (primeroPositivo == false) {
                if (ingreso < minimoPositivo) {
                    minimoPositivo = ingreso;
                }
            }

        } else if (primeroNegativo == false){
            if (primeroNegativo == false) {
                if (ingreso > maximoNegativo) {
                    maximoNegativo = ingreso;
                }
            }
        }

        cout << "Ingrese un numero: ";
        cin >> ingreso;

        if (ingreso > 0) {
            if (primeroPositivo) {
                minimoPositivo = ingreso;
                primeroPositivo = false;
            }
        } else if (ingreso < 0) {
            primeroNegativo = false;
            maximoNegativo = ingreso;
        }

    } // fin While

    cout << "Maximo negativo=" << maximoNegativo << endl;
    cout << "Minimo positivo=" << minimoPositivo << endl;
	return 0;
}
