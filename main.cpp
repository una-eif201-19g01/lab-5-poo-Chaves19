//
// Created by Alonso Chaves  on 2019-09-20.
//

#include "Secretaria.h"
#include "Gerente.h" 
#include "Vendedor.h"
#include<iostream>
using std::cout;
using std::cin;

int main() {
    Trabajador * vector[3];
    Secretaria sec1("001", 50, 1436.50, 3);
    Vendedor vend1("002", 70, 1248.32, 4, 0.15, 12);
    Gerente ger1("003", 36, 1892.68, 5, 25000);
    vector[0] = &sec1;
    vector[1] = &vend1;
    vector[2] = &ger1;
    for (int cont = 0; cont < 3; cont++) {
        cout << vector[cont]->toString();
    }
    cin.get();



};

