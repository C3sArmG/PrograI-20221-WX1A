#include <iostream>
using namespace std;
void main() {
	int ventas, dosmil = 1, i = 1;
	float comision;
	while (true) {
		cout << "\nIngrese las ventas totales del empleado";
		if (i == 1) {
			cout << "(Ingrese 0 para finalizar)" << endl;
		}
		else {
			cout << endl;
		}
		cin >> ventas;
		if (ventas < 50000) {
			comision = ventas * 0.01;
		}
		else if (ventas >= 50000 && ventas <= 150000) {
			comision = (50000 * 0.01) + ((ventas - 50000) * 0.02);
		}
		else {
			comision = (50000 * 0.01) + (100000 * 0.02) + ((ventas - 150000) * 0.03);
		}
		if (comision >= 2000) {
			dosmil++;
		}
		if (ventas == 0) {
			break;
		}
		cout << "la comision del empleado " << i << ": " << comision << endl;
		i++;
	}
	cout << "Cantidad de empleados que recibieron una comision de por lo menos 2000: " << dosmil << endl;
}