#include <iostream>

using namespace std;

int CalcularMaximoAbsoluto(int &a, int &b) {
    int num1=a,num2=b;
    if (a<0)
        a *= -1;
    if (b<0)
        b *= -1;
    if (a<b) {
        return num2;
    } else {
        return num1;
    }
}

int main() {
    const int TAM=10;
    int v[TAM];
    int num;
    int maximo_absoluto;


    for(int i=0; i<TAM; i++) {
        cout << "INGRESE EL NUMERO ";
        cin >> num;
        v[i]=num;
    }

    for (int i=0;i<TAM;i++) {
        if (i==0) {
            maximo_absoluto=v[i];
        } else {
            maximo_absoluto = CalcularMaximoAbsoluto(maximo_absoluto,v[i]);
        }

    }

    cout << "Maximo absoluto=" << maximo_absoluto << endl;

    cout << endl;
    return 0;
}
