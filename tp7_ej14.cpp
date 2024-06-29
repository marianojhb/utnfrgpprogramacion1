#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];
    int primos=0;

    for(int i=0; i<TAM; i++) {
        cout << "INGRESE UN NUMERO ";
        cin >> v[i];
    }

    cout << endl;
    cout << "Primos=[";
    int divisores = 0;
    for (int i=0; i<TAM; i++) {

        divisores=0;
        for(int j=1; j<=v[i]; j++) {
            if(v[i]%j==0) {
                divisores++;
            }
        }
        if (divisores==2) {
            cout << v[i] << ", ";
            primos++;
        }

    }
    cout << "]" << endl;
    cout << endl;
    cout << "Primos=" << primos << endl;


    cout << endl;
    system("pause");

    return 0;
}
