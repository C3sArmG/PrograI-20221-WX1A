#include <iostream>
using namespace std;

//Implementar una función que devuelva la suma 
//de los dígitos de un número entero.

int sumadigitos(int numero) {
	int suma = 0;
	while (numero >= 1) {
		suma = suma + numero % 10;
		numero = numero / 10;
	}
	return suma;
}

void main() {
	int num;
	cout << "Ingrese num: ";
	cin >> num;
	cout << sumadigitos(num);
}