//
// Created by lonix on 13/09/2025.
//

#include <iostream>
using namespace std;
#include "ejercicio6.h"

void ejercicio6() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int a = 0, b = 1;
    cout << "Secuencia Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}
