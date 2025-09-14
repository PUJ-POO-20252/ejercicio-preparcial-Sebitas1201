//
// Created by lonix on 13/09/2025.
//

#include <iostream>
using namespace std;
#include "ejercicio2.h"

void ejercicio2() {
    int edad, total = 0, jovenes = 0, perfectas = 0;
    double suma = 0, nota;

    cout << "Ingrese edad (0 para terminar): ";
    cin >> edad;

    while (edad != 0) {
        cout << "Ingrese nota (1 a 10): ";
        cin >> nota;

        total++;
        suma += nota;

        if (edad >= 18 && edad <= 25) {
            jovenes++;
            if (nota == 10) {
                perfectas++;
            }
        }

        cout << "\nIngrese edad (0 para terminar): ";
        cin >> edad;
    }

    if (total > 0) {
        cout << "\nResultados:\n";
        cout << "Total encuestados: " << total << endl;
        cout << "Promedio calificaciones: " << suma / total << endl;
        cout << "Jovenes (18-25): " << jovenes << endl;
        cout << "Calificaciones perfectas (10): " << perfectas << endl;
    } else {
        cout << "No se ingresaron datos.\n";
    }
}
