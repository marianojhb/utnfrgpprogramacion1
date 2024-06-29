#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];


    for(int i=0;i<TAM;i++){
        cout << "INGRESE UN NUMERO ";
        cin >> v[i];
    }

    int num;
    cout << endl;
    cout << "INGRESE NUM A BUSCAR ";
    cin >> num;

    int i;
    for(i=0;i<TAM;i++){
        if(v[i]==num){
            cout << "Indice=" << i << endl;
            i=TAM;
        }
    }
    if (i==TAM) {
        cout << "Indice=-1" << endl;
    }

    return 0;
}
