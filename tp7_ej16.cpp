#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];

    for(int i=0; i<TAM; i++) {
        cout << "INGRESE UN NUMERO ";
        cin >> v[i];
    }

    for(int i=0; i<TAM; i++) {
        for(int j=0; j<TAM;j++){
            if (j!=i) {
                if (v[j]==v[i]) {
                    cout << "Hay repetidos" << endl;
                    i=TAM;
                }
            }
        }
    }



    cout << endl;
    system("pause");

    return 0;
}
