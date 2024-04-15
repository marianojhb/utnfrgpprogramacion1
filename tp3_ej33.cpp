// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    bool primero=true;
    bool segundo=true;
    bool tercero=true;
    int anteultimo;
    int ultimo;
    int contarTernas = 0;
    int contarTernasNegativasConsecutivas=0;
    for (int i=1; i<=13; i++) {

        cout << i << ") Ingrese un numero: ";
        cin >> ingreso;

        if (primero) {
            anteultimo=ingreso;
            primero = false;
        } else if (segundo) {
            ultimo = ingreso;
            segundo = false;
        } else {
            if (ingreso>0 && ultimo>0 && anteultimo>0 ) {
                contarTernas++;
                primero = true;
                segundo = true;
            } else if (ingreso<0 && ultimo<0 && anteultimo<0 && ingreso>ultimo && ultimo >anteultimo) {
                contarTernasNegativasConsecutivas++;
                primero = true;
                segundo = true;
            }

            anteultimo = ultimo;
            ultimo = ingreso;
        }

    }

    cout << "La cantidad de ternas de valores positivos consecutivos es: " << contarTernas << endl;
    cout << "La cantidad de ternas de valores negativos consecutivos y ordenadas es: " << contarTernasNegativasConsecutivas << endl;

	return 0;
}
