// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int i,num1,num2,menor,mayor;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2 ;
    mayor = num1;
    menor = num2;
    if(num1<num2) {
    mayor = num1;
    menor = num2;
    }
    for (i = menor; i <= mayor; i++) {
    cout << i << endl;
    }


	return 0;
}
