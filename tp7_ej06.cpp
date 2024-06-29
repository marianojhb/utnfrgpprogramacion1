#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];
    bool ultimoPar=true;
    bool anteultimoPar=true;

    for (int i=0; i<TAM; i++) {
        cout << "INGRESE UN NUMERO ";
        cin >> v[i];
    }
    cout << endl;
    for (int i=TAM-1;i>=0;i--) {
        if(v[i]%2==0) {
                if (ultimoPar) {
                    cout << "Ultimo par=" << v[i] << " Posicion=" << i << endl;
                    ultimoPar=false;
                } else if (anteultimoPar) {
                    cout << "Anteultimo par=" << v[i] << " Posicion=" << i << endl;
                    anteultimoPar=false;
                    i=-1;
                }
        }
    }

    return 0;
}
