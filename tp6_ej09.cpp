#include <iostream>

using namespace std;

int EsPerfecto(int a) {
    int sd=0;
    for(int i=1; i<a; i++) {
        if (a%i==0) {
            sd+=i;
        }
    }
    if (a == sd) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    cout << "INGRESE NUM ";
    cin >> num;
    if (EsPerfecto(num)) {
        cout << "Es Perfecto" << endl;
    } else {
        cout << "No es Perfecto" << endl;
    }
    cout << endl;
    return 0;
}
