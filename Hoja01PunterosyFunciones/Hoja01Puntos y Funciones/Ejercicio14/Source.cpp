#include <iostream>
using namespace std;

int factorial(int numero) {
	int factorial = 1;
	for (int i = 1; i <= numero; i++)
	{
		factorial = factorial * i;
	}
	return factorial;
}

void main() {
	int N = 5;
	int K = 3;
	int resultado = factorial(N) / (factorial(K) * factorial(N - K));
	cout << "Combinatorio " << resultado;
}