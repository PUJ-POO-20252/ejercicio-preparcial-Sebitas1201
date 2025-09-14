#include <iostream>
using namespace std;

// Declaración de funciones de los ejercicios
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();

int main() {
    int opcion;

    do {
        cout << "\n===== MENU DE EJERCICIOS =====\n";
        cout << "1. Ejercicio 1\n";
        cout << "2. Ejercicio 2\n";
        cout << "3. Ejercicio 3\n";
        cout << "4. Ejercicio 4\n";
        cout << "5. Ejercicio 5\n";
        cout << "6. Ejercicio 6\n";
        cout << "0. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) ejercicio1();
        else if (opcion == 2) ejercicio2();
        else if (opcion == 3) ejercicio3();
        else if (opcion == 4) ejercicio4();
        else if (opcion == 5) ejercicio5();
        else if (opcion == 6) ejercicio6();
        else if (opcion == 0) cout << "Saliendo...\n";
        else cout << "Opcion invalida\n";

    } while (opcion != 0);

    return 0;
}