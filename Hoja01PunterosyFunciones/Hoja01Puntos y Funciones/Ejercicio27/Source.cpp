#include <iostream>;
using namespace std;
//hallarnumerosprimos
bool esPrimo(int& numero) {
	if (numero == 0 || numero == 1) {
		return false;
	}
	bool primo = true;
	//5
	for (int i = 2; i < numero; i++)
	{
		if (numero % i == 0) {
			primo = false;
		}
	}
	return primo;
}

void main() {
	int cantidadNumeros = 20;
	int numero = 0;
	while (cantidadNumeros > 0) {
		if (esPrimo(numero)) {
			cantidadNumeros--;
			cout << numero << " , ";
		}
		numero++;
	}
}