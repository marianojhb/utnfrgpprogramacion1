// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Hacer un programa para ingresar una lista de 13 números. Se pide luego determinar e informar:
A) La cantidad de ternas de valores positivos consecutivos.
B) La cantidad de ternas de valores negativos consecutivos y ordenados en forma creciente.

Ejemplo si la lista fuera: 10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10 entonces el programa detectará una terna de positivos consecutivos (10, 5, 4) y una terna de negativos consecutivos ordenados (-8, -3, -1)

Nota: Si el número ingresado es cero, no se lo considera ni negativo ni positivo.
Nota: La terna (-5, -8, -10) no es contabilizada ya que no se encuentra ordenada crecientemente.
*/

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    bool primero=true;
    bool segundo=true;
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
