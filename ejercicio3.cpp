//
// Created by lonix on 13/09/2025.
//

#include <iostream>
using namespace std;
#include "ejercicio3.h"

void ejercicio3() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    int num, anterior;
    bool ascendente = true;

    if (n > 0) {
        cout << "Numero 1: ";
        cin >> anterior;
    }

    for (int i = 2; i <= n; i++) {
        cout << "Numero " << i << ": ";
        cin >> num;

        if (num <= anterior) {
            ascendente = false;
        }
        anterior = num;
    }

    if (ascendente) cout << "La secuencia es estrictamente ascendente.\n";
    else cout << "La secuencia NO es ascendente.\n";
}
