#include <iostream>

using namespace std;

bool EsPrimoSophieGermain(int a) {
    bool res = false;
    int divisores = 0;
    if (a > 0) {
        for (int i = 1; i <= a; i++) {
            if (a%i == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            divisores = 0;
            a = 2 * a + 1;
            for (int i = 1; i <= a ; i++) {
                if (a%i == 0) {
                    divisores++;
                }
            }
            if (divisores == 2) {
                res = true;
            }
        }
    }
    return res;
}

int main() {
    int num;
    cout << "INGRESE UN NUM ";
    cin >> num;
    if (EsPrimoSophieGermain(num)) {
        cout << "Es Primo Sophie Germain" << endl;
    } else {
        cout << "No es Primo Sophie Germain" << endl;
    }

    cout << endl;

    return 0;
}
