#include <iostream>
using namespace std;

//creamos una función, llamada intercambiar  
//& es para ahorrar espacio en la memoria, se pondría en el int&A y int&B
void intercambiar(int A, int B) {
	if (A > B) {
		cout << "Error" << endl;
	}
	else if (A < B) {
		int AInicial = A;
		A = B;
		B = AInicial;
		cout << "Valor de A luego de intercambio : " << A << endl;
		cout << "Valor de B luego de intercambio : " << B << endl;
	}
	else {
		cout << "Valor de A luego de intercambio : " << A << endl;
		cout << "Valor de B luego de intercambio : " << B << endl;
	}
}

void main() {
	int B;
	int A;
	cout << "Ingrese el valor de A" << endl;
	cin >> A;
	cout << "Ingrese el valor de B" << endl;
	cin >> B;
	intercambiar(A, B);
}
	

//2da forma
/*
#include <iostream>
using namespace std;
void main() {
	int V1, V2;
	cout << "Inserte su primer valor" << endl;
	cin >> V1;
	cout << "Inserte su segundo valor" << endl;
	cin >> V2;
	if (V1 < V2) {
		cout << "Valor Mayor" << V2 << endl;
		cout << "Valor Menor" << V1 << endl;
	}
	else if (V1 > V2) {
		cout << "Proceso no válido" << endl;
	}
	else if (V1 == V2) {
		cout << "Proceso ya concretado" << endl;
	}
}
*/



