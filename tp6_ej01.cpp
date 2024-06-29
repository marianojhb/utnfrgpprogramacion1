#include <iostream>

using namespace std;

bool esPar(int num) {
    return num%2==0;
}

int main() {
    int num;
    cout << "INGRESE NUM ";
    cin >> num;
    if (esPar(num)) {
        cout << "El numero es par";
    } else {
        cout << "El numero es impar";
    }
    cout << endl;
    system("pause");

    return 0;
}
