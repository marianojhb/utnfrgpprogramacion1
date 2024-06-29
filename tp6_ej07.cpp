#include <iostream>

using namespace std;

int CalcularMaximoAbsoluto(int &a, int &b) {
    if (a<0)
        a *= -1;
    if (b<0)
        b *= -1;
    if (a<b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int num1,num2,res;
    cout << "INGRESE DOS NUMEROS ";
    cin >> num1 >> num2;
    res=CalcularMaximoAbsoluto(num1,num2);
    cout << "El maximo absoluto es " << res << endl;

    cout << endl;
    return 0;
}
