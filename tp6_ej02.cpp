#include <iostream>

using namespace std;

int CalcularMaximo(int a, int b) {
    if (a>b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1,num2, res;
    cout << "INGRESE DOS NUMEROS ";
    cin >> num1 >> num2;
    res = CalcularMaximo(num1,num2);
    cout << "El numero mas alto es " << res;


    cout << endl;

    return 0;
}
