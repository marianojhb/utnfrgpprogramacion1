#include <iostream>

using namespace std;

bool EsPar(int num) {
        return num%2==0;
}

int main() {
    const int TAM=10;
    int v[TAM];
    int num;
    int mayorPar;
    int menorImpar;
    bool primerPar=true;
    bool primerImpar=true;
    int posMayorPar;
    int posMenorImpar;


    for(int i=0; i<TAM; i++) {
        cout << "INGRESE EL NUMERO ";
        cin >> num;
        v[i]=num;
    }

    for (int i=0; i<TAM; i++) {

        if (EsPar(v[i])==true) {
            if (primerPar==true) {
                mayorPar=v[i];
                posMayorPar=i;
                primerPar=false;
            } else {
                if (v[i] > mayorPar) {
                    mayorPar=v[i];
                    posMayorPar=i;
                }
            }
        } else {
            if (primerImpar==true) {
                menorImpar=v[i];
                primerImpar=false;
                posMenorImpar=i;
            } else {
                if (v[i]<menorImpar) {
                    menorImpar=v[i];
                    posMenorImpar=i;
                }
            }
        }
    }

    cout << endl;
    cout << "Maximo Par=" << mayorPar << " Posicion=" << posMayorPar << endl;
    cout << "Menor Impar=" << menorImpar << " Posicion=" << posMenorImpar << endl;

    cout << endl;
    return 0;
}
