#include <iostream>

using namespace std;

int ContarDigitos(int a) {
    int divisor=1;
    int digitos=0;
    while ((float)a/divisor >=1 ) {
        digitos++;
        divisor*=10;
    }
    return digitos;
}

int main() {
    int num;
    cout << "INGRESE NUM ";
    cin >> num;
    cout << "Tiene " << ContarDigitos(num) << " digitos" << endl;
    cout << endl;
    return 0;
}
