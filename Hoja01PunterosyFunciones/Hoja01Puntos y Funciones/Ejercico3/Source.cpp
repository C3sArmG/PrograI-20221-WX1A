#include <iostream>
#include <Windows.h>
using namespace std;

void DibujaCuadrado(char caracter, int ancho, int x, int y) {
	for (int filas = 0; filas < ancho + x; filas++)
	{
		if (filas > x + filas) {
			system("Color B5");
			cout << caracter;
		}
		else {
			system("Color B5");
			cout << ' ';
		}
		for (int columnas = 0; columnas < ancho; columnas++)
		{
			if (columnas < y) {
				system("Color B5");
				cout << ' ';
			}
			else {
				system("Color B5");
			cout << caracter;
			}
			
		}
		cout << endl;
	}
}

void main() {
	system("Color B5"); //el primer valor es el fondo de la pantalla y el segundo valor es la letra
	DibujaCuadrado('A',10,1,1);
}