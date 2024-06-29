#include <iostream>

using namespace std;

bool EsPrimo(int a) {
    bool res=false;
    int divisores=0;
    for (int i=1;i<=a;i++){
        if (a%i==0) {
            divisores++;
        }
    }
    if (divisores == 2) {
        res=true;
    }
    return res;
}

int main() {
    int num;
    bool res;
    cout << "INGRESE UN NUMERO ";
    cin >> num;
    res = EsPrimo(num);
    if(res) {
        cout << "Es Primo" << endl;
    } else {
        cout << "No es Primo" << endl;
    }

    cout << endl;
    return 0;
}
