// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    cout << "Ingrese la cantidad de numeros: ";
    int N;
    int cp = 0; // cp: "contador positivo"
    int num;
    cin >> N;
    cout << endl;
    for (int i=1; i<= N;i++) {
    cout << i << ") Ingrese un número: ";
    cin >> num;
    if (num > 0) {cp+=1;}
    }
    cout << "De los " << N << " valores ingresados, " << cp << " son positivos." << endl;



	return 0;
}
