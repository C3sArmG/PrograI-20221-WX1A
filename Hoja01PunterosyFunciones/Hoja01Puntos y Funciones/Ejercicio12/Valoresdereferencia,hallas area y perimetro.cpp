#include <iostream>

#include <Windows.h>

#include <string>

using namespace std;

void AreaYperimetro(float& area, float& perimetro) {
	float radio;
	cout << "ingrese radio GAA: " << endl;
	cin >> radio;
	area = 3.1415 * (radio * radio);
	perimetro = 2 * (3.1415) * radio;

}

void main() {
	float area, perimetro;
	AreaYperimetro(area, perimetro);
	cout << "area: " << area << endl << "perimetro: " << perimetro << endl;

}