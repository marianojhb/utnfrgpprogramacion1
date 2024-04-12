// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int contarPares=0;
    int primerPar;
    int ubicacionPrimerPar;
    int divisores=0;
    int ultimoPrimo;
    int ubicacionUltimoPrimo;
    for(int i=1;i<=7;i++) {
        cout << "Ingresa un numero: ";
        cin >> ingreso;
        if (ingreso %2 ==0 ) {
            contarPares++;
            if (contarPares == 1 ) {
                primerPar = ingreso;
                ubicacionPrimerPar = i;
            }
        }
        for (int j = 1; j < ingreso; j++) {
            if (ingreso % j == 0) {
                divisores++;


            }
        }

        if (divisores < 3) {
            ultimoPrimo = ingreso;
            ubicacionUltimoPrimo = i;
        }
        divisores=0;



    }

    cout << "Primer par=" << primerPar << endl;
    cout << "Ubicacion primer par="<< ubicacionPrimerPar << endl;
    cout << "Ultimo primo="<< ultimoPrimo << endl;
    cout << "ubicacion ultimo primo="<< ubicacionUltimoPrimo << endl;


	return 0;
}
