//
// Created by lonix on 13/09/2025.
//

#include <iostream>
using namespace std;
#include "ejercicio4.h"

void ejercicio4() {
    double precio;
    int cantidad;

    cout << "Ingrese precio unitario: ";
    cin >> precio;
    cout << "Ingrese cantidad: ";
    cin >> cantidad;

    double total = precio * cantidad;
    double descuento = 0;

    if (cantidad >= 11 && cantidad <= 20) descuento = 0.05;
    else if (cantidad >= 21 && cantidad <= 50) descuento = 0.10;
    else if (cantidad > 50) descuento = 0.15;

    double totalFinal = total - (total * descuento);

    cout << "\nTotal sin descuento: " << total << endl;
    cout << "Descuento aplicado: " << descuento * 100 << "%\n";
    cout << "Total a pagar: " << totalFinal << endl;
}
