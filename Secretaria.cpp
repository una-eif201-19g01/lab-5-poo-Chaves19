/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Secretaria.cpp
 * Author: ESCINF
 * 
 * Created on 13 de septiembre de 2019, 8:26
 */

#include "Secretaria.h"

Secretaria::Secretaria() {
}

Secretaria::Secretaria() {
}

Secretaria::~Secretaria() {
}
float Trabajador::calcularSalarioBase() {
    return precioHora * 48;
}

float Trabajador::calcularHorasExtra() {
    int contador = horasLab * 0.05;
    return horasLab + contador;
}

float Trabajador::calcularAnualidades() {
    return (calcularSalarioBase() *(0.05 * annosLaborados));
}

float Trabajador::calcularSalariobruto() {
    return calcularSalarioBase() + calcularAnualidades() + ( precioHora * calcularHorasExtra() );
}

float Trabajador::calcularCargas() {
    return calcularSalariobruto() - (calcularSalariobruto() * 0.09);
}

float Trabajador::calcularSalarioNeto() {
    return calcularSalariobruto() - calcularCargas();
}

std::string Trabajador::toString(){
    
}
