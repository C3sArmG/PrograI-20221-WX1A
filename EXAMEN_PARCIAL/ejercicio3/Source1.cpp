#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int x;
    cout << "Ingrese un ancho (menor a 41): ";
    cin >> x;

    if (x >= 2 && x < 41 && x == int(x)) {

    }
    else {
        cout << "El valor ingresado no es válido, inténtelo de nuevo." << endl;
    }

    int y;
    cout << "Ingrese un alto (menor a 16): ";
    cin >> y;

    if (y >= 2 && y < 16 && y == int(y)) {
        
    }
    else {
        cout << "El valor ingresado no es válido, inténtelo de nuevo." << endl;
    }

    int z;
    cout << "Ingrese un ancho (menor a 41): ";
    cin >> z;

    if (z >= 1 && z < y && z == int(z)) {

    }
    else {
        cout << "El valor ingresado no es válido, inténtelo de nuevo." << endl;
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (j == 0  j == y - 1  i % z == 0)
            {
                cout << "* ";
            }
            else { cout << "  "; }
        }
        cout << endl;
    }



    system("pause");
    return 0;

}