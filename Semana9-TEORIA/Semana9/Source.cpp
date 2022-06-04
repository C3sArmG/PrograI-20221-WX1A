#include <iostream>
using namespace std;

void main() {
	int numero = 14;
	int* ptrnumero = &numero; //se le pone & para decir que el ptrnumero tiene un valor que sería un numero., esto tambien sirve para saber el luygar de memoria.
	cout << numero << endl;
	cout << ptrnumero << endl;
	//int* no es igual a int.
	//* significa para que nos devuelva el valor...
}