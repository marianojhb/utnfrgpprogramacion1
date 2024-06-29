#include <iostream>

using namespace std;

int Redondear(float &a) {
    if (a-(int(a))<0.5) {
        return (int)a;
    } else {
        return (int)a+1;
    }

}
int main() {
    float num;
    int res;
    cout << "INGRESE NUM ";
    cin >> num;
    res = Redondear(num);
    cout << "El numero redondeado es " << res << endl;

    cout << endl;
    return 0;
}
