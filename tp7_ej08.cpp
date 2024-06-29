#include <iostream>

using namespace std;


int main() {
    const int TAM=5;
    int v[TAM];
    int num;

    for (int i=0; i<TAM; i++) {

        cout << "INGRESE UN NUMERO ";
        cin >> num;
        int maximo;
        bool primero=true;
        while (num!=0) {
            if (primero) {
                maximo = num;
                primero=false;
            } else {
                if (num>maximo) {
                    maximo=num;
                }
            }
            cout << "INGRESE UN NUMERO ";
            cin >> num;
        }
        v[i]=maximo;
    }
    cout << endl;
    cout << "Vector con los maximos: [";
    for(int i=0; i<TAM; i++) {
        cout << v[i] << ", ";
    }
    cout << "]" << endl;


    return 0;
}
