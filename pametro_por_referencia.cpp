#include <iostream>

using namespace std;

int cambio (int &a) {
    a=a+1;
    return a;
}

int main()
{
    int x;
    x=5;
    cambio(x);
    cout << x << endl;
    return 0;
}
