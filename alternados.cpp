#include <iostream>

using namespace std;

int main() {
    int n,sumaDivisores;
    int ultimo,anteultimo;
    bool perfecto;
    bool alterna=true;

    for (int j=1;j<5;j++) {
        cout << "INGRESO: ";
        cin >> n;
        sumaDivisores=0;
        for (int i=1;i<n-1;i++) {
            if (n%i==0) {
                sumaDivisores+=i;
            }
        }
        if (sumaDivisores==n) {
            cout << "Numero perfecto" << endl;
            perfecto=true;

        } else {
            cout << "Numero normal" << endl;
            perfecto=false;
            }
        if (j==1) {
            ultimo=perfecto;
        } else {
            anteultimo=ultimo;
            ultimo=perfecto;
            if (anteultimo == ultimo) {
                alterna = false;
            }
        }

    }
    cout << "alternados=" << alterna << endl;

return 0;

}

