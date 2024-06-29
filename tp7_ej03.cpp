#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];
    int maximo;
    int num;
    int posicion=0;


    for(int i=0; i<TAM; i++) {
        cout << "INGRESE EL NUMERO ";
        cin >> num;
        v[i]=num;
    }

    for (int i=0; i<TAM; i++) {
        if(i==0) {
            maximo = v[i];
        } else {
            if (v[i]>maximo) {
                posicion=i;
                maximo=v[i];
            }
        }
    }
    cout << endl;
    cout << "Valor maximo y posicion dentro del vector: " << endl;
    cout << "Maximo=" << maximo << endl;
    cout << "Posicion=" << posicion << endl;

    cout << endl;
    return 0;
}
