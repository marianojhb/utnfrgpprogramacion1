// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int divisores = 0;
    int cuentaPrimos=0;
    for (int i=2 ; i<=1000; i++) { // el 1 no cuenta como primo y comenzamos con el 2
        divisores = 0;
        for (int j=1; j<i; j++){
            if (i%j == 0) {
                divisores++;
            }
        }
        if (divisores < 2) {
            cuentaPrimos++;
            cout << " " << i;
        }
    }
    cout << endl << "Cuenta primos=" << cuentaPrimos << endl;


	return 0;
}
