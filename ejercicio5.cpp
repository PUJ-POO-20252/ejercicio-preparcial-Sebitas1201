//
// Created by lonix on 13/09/2025.
//

#include <iostream>
#include <string>
using namespace std;
#include "ejercicio5.h"

void ejercicio5() {
    string palabra;
    cout << "Ingrese una palabra en minusculas: ";
    cin >> palabra;

    bool encontrado = false;
    for (int i = 0; i < palabra.size(); i++) {
        char c = palabra[i];
        int contador = 0;
        for (int j = 0; j < palabra.size(); j++) {
            if (palabra[j] == c) contador++;
        }
        if (contador == 1) {
            cout << "El primer caracter que no se repite es: " << c << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Todos los caracteres se repiten.\n";
    }
}
