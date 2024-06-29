#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];
    int num;

    for(int i=0; i<TAM; i++) {
        cout << "INGRESE EL NUMERO #" << i << " ";
        cin >> num;
        v[i]=num;
    }

    int acumulador=0;
    for (int i=0; i<TAM; i++) {
        acumulador += v[i];
    }
    cout << endl;
    cout << "SUMA=" << acumulador;

    cout << endl;
    return 0;
}
