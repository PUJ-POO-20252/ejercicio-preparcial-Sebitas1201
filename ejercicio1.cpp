//
// Created by lonix on 13/09/2025.
//

#include <iostream>
using namespace std;
#include "ejercicio1.h"

void ejercicio1() {
    int aprobados = 0, reprobados = 0, excelentes = 0;
    double suma = 0, nota;

    cout << "Ingrese las 8 notas:\n";
    for (int i = 1; i <= 8; i++) {
        cout << "Nota " << i << ": ";
        cin >> nota;
        suma += nota;

        if (nota >= 4.5) {
            aprobados++;
            excelentes++;
        } else if (nota >= 3.0) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    cout << "\nResultados:\n";
    cout << "Aprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;
    cout << "Excelentes: " << excelentes << endl;
    cout << "Promedio: " << suma / 8 << endl;
}
