#include <iostream>

using namespace std;

void main() {

long long int num1, num2;

cout << "Inserte dos números enteros";

cin >> num1;

cin >> num2;

	if (num1 < num2) {

		while (num1 <= num2) {

			cout << num1 << "," << endl;

			num1++;

		}

	}

	else if (num1 > num2) {

		while (num1 >= num2) {

			cout << num1 << "," << endl;

			num1 = num1 - 1;

		}

	}

	else if (num2 == num1) {

		cout << num2;

	}

}