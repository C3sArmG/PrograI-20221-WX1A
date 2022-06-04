#include <iostream>

#include <Windows.h>

#include <string>

using namespace std;

void AreaYperimetro() {

	float radio;
	cout << "ingrese radio GAA: " << endl;
	cin >> radio;
	float area = 3.1415 * (radio * radio);
	float perimetro = 2 * (3.1415) * radio;
	cout << "area: " << area << endl << "perimetro: " << perimetro << endl;
}

void main() {

	AreaYperimetro();

}