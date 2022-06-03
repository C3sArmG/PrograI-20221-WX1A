#include <iostream>

using namespace std;


void main() {

	float porcentaje_registros_mañana = 0, promedio_venta = 0;
	string material = " ";
	float mayor_monto = 0;
	float monto_promedio = 0;

	int material, hora, monto;
	char tipo_servicio;

	while (true) {
		cout << "Tipo de material (L: Libro; A: Artículo; M: Monografía):";
		cin >> material;
		if (material == 'L' || material == 'A' || material == 'M'{
			break;
		}
		cout << "opción invalida" << endl;
	}

		cout << "Hora de registro: ";
		cin >> hora;

do {
	cout << "Tipo de servicio (P: Préstamo; V: Venta): "; cin >> tipo_servicio;
	if ((tipo_servicio == 'P') || (tipo_servicio == 'V')) {

	}
}

		cout << "Monto del servicio";
		cin >> monto;

	

		return 0;
}