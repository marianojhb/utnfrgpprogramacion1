#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];
    int pares=0;

    for(int i=0; i<TAM; i++) {
        cout << "INGRESE UN NUMERO ";
        cin >> v[i];
    }

    cout << endl;

    cout << "Pares=[";
    for(int i=0; i<TAM; i++) {
        if(v[i]%2==0) {
            cout << v[i] << ", ";
            pares++;
        }
    }
    cout << "]" << endl;
    cout << endl;
    cout << "Pares=" << pares << endl;

    cout << endl;
    system("pause");

    return 0;
}
