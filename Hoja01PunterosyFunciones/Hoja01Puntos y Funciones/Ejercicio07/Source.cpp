#include <iostream>

using namespace std;

bool EsBisiesto(int year) {

	if (year % 4 == 0 && year % 100 != 0 or year % 400 == 0) {
//significa: divisible por 4, no divisible por 100 pero divisible por 400
		return true;
	}
	else {
		return false;
	}
//tambien se puede hacer con return year % 4 == 0 && year % 100 != 0 or year % 400 == 0
}

void main() {
	cout<< (EsBisiesto(2004) ? "Es bisiesto" : "No es bisiesto" )<< endl ;
}
//	la linea de arriba, resume todo unas lineas de codigo en vez de if y else, solo seria así...
//1 es verdadero, 0 es falso