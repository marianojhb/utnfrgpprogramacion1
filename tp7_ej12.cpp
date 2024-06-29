#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];
    int repeticiones=0;

    for(int i=0; i<TAM; i++) {
        cout << "INGRESE UN NUMERO ";
        cin >> v[i];
    }

    int num;
    cout << endl;
    cout << "INGRESE UN NUMERO A BUSCAR ";
    cin >> num;

    for(int i=0; i<TAM; i++) {
        if(v[i]==num) {
            repeticiones++;
        }
    }


    cout << "Repeticiones=" << repeticiones << endl;

    cout << endl;
    system("pause");

    return 0;
}
