#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];
    int num;
    int i;
    float promedio;

    for(i=0; i<TAM; i++) {
        cout << "INGRESE EL NUMERO #" << i+1 << " ";
        cin >> num;
        v[i]=num;
    }

    int acumulador=0;
    for (i=0; i<TAM; i++) {
        acumulador += v[i];
    }

    promedio = (float) acumulador / TAM;

    cout << "Listado de numeros mayores al promedio (" << promedio << "):" << endl;
    for (int i=0; i<TAM; i++) {
        if (v[i] > promedio) {
            cout << i  << " ... "<<  v[i] << endl;
        }
    }

    cout << endl;
    return 0;
}
