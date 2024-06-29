#include <iostream>

using namespace std;

int CalcularPotencia(int a, int b) {
    int acumulador=1;
    for(int i=1; i<=b;i++) {
        if (b==0) {
            acumulador=1;
        } else {
            acumulador*=a;
        }
    }
    return acumulador;
}

int main() {
    int num,pot,res;
    cout << "INGRESE NUMERO Y POTENCIA ";
    cin >> num >> pot;
    res = CalcularPotencia(num,pot);
    cout << num << " elevado a la " << pot << " es " << res << endl;

    cout << endl;
    return 0;
}
