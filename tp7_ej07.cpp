#include <iostream>

using namespace std;


int main() {
    const int TAM=10;
    int v[TAM];

    for (int i=0; i<TAM; i++) {
        if(i%2==0) {
            v[i]=1;
        } else {
            v[i]=0;
        }

    }

    for (int i=0; i<TAM; i++) {
        cout << v[i] << endl;
    }

    cout << endl;

    return 0;
}
