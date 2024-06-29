#include <iostream>

using namespace std;


int main() {
    const int TAM=20;
    int v[TAM];
    bool ordenado=true;

    for (int i=0; i<TAM; i++) {

        cout << "INGRESE UN NUMERO ";
        cin >> v[i];

    }

    for (int i=0; i<TAM; i++) {
        if (i>0) {
            if(v[i]<v[i-1]) {
                ordenado=false;
                i=TAM;
                cout << "No esta ordenado" << endl;
            }
        }
    }
    if (ordenado) {
        cout << "Esta ordenado" << endl;
    }



    return 0;
}
