#include <iostream>
using namespace std;
#include <iomanip>


void funcion(int &loquequiera)
{
    loquequiera += 2;
}

int main() {

int a = 10;


funcion(a);

cout << a ;





}

