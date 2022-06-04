1.    1    	4
2.   1 2 	3
3.  1 2 3	2
4. 1 2 3 4 	1
5.1 2 3 4 5	0
//usar el número 5


#include <iostream>
using namespace std;

int main() {
    int base;
    cout << "ingresa un numero ENTERO: ";  cin >> base; cout << endl;

    int e = base - 1;

    for (int i = 1; i <= base; i++) {
        for (int j = 0; j < e; j++) {
            cout << " ";
        }

        for (int ini = 1; ini <= i * 2 / 2; ini++) {
            cout << ini << " ";
        }
        cout << endl;
        e--;
    }
}