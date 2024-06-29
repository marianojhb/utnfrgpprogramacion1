#include <iostream>

using namespace std;


int main() {
    const int TAM=11;
    int v[TAM];
    int rupturas=0;

    for(int i=0;i<TAM;i++){
        cout << "INGRESE UN NUMERO ";
        cin >> v[i];
    }

    for(int i=0;i<TAM;i++){
        if(i>0){
            if(v[i]<v[i-1]) {
                rupturas++;
            }
        }
    }

    cout << "Rupturas=" << rupturas << endl;

    cout << endl;
    system("pause");

    return 0;
}
