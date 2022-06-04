#include <iostream>
using namespace std;

bool esCuadratica (int a, int b, int c, int x){
	int resultado = (a * (x * x)) + (b * x) + c;
	return resultado == 0; 
}

/*Otra forma de hacerlo es con int
int esCuadratica(int a, int b, int c, int x) {
	int resultado = (a * (x * x)) + (b * x) + c;
	return resultado;
}
*/


void main (){
	int a = 1, b = -1, c = -12;
	int x = 100;
	for (int i = 1; i <= x; i++)
	{
	cout << "Evaluando x" << x << i << " " << esCuadratica(a, b, c, i) << endl;
	}
}