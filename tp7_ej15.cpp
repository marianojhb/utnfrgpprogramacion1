#include <iostream>

using namespace std;


int main() {
    const int TAM=5;
    int v[TAM];

    for(int i=0; i<TAM; i++) {
        cout << "INGRESE UN NUMERO ";
        cin >> v[i];
    }

    float w[9];

    int i=0;
    for (int j=0; j<9; j++) {
        if(j==0) {
            w[0]=v[0];
            i++;
        } else if (j%2!=0) {
            w[j]= (float)(v[i]+v[i-1])/2;
        } else {
            w[j]=v[i];
            i++;
        }
    }

    cout << endl;
    cout << "VECTOR w=[ " << endl;
    for (int j=0; j<9; j++) {
        cout << w[j] << endl;
    }
    cout << " ]" << endl;

    cout << endl;
    system("pause");

    return 0;
}
