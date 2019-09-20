/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gerente.cpp
 * Author: ESCINF
 * 
 * Created on 13 de septiembre de 2019, 8:26
 */

#include "Gerente.h"

Gerente::Gerente(): bono(0.0) {
}

Gerente::Gerente(float bono): bono(bono) {
}

Gerente::~Gerente() {
}

virtual float Trabajador::calcularSalarioBase() {
    return precioHora * 48;
}

virtual float Trabajador::calcularHorasExtra() {
    int contador = horasLab * 0.05;
    return horasLab + contador;
}

virtual float Trabajador::calcularAnualidades() {
    return (calcularSalarioBase() *(0.05 * annosLaborados));
}

virtual float Trabajador::calcularSalariobruto() {
    return calcularSalarioBase() + calcularAnualidades() + ( precioHora * calcularHorasExtra() );
}

virtual float Trabajador::calcularCargas() {
    return calcularSalariobruto() - (calcularSalariobruto() * 0.09);
}

virtual float Trabajador::calcularSalarioNeto() {
    return calcularSalariobruto() - calcularCargas();
}

virtual std::string toString(){
    
}

void Gerente::SetBono(float bono) {
    this->bono = bono;
}

float Gerente::GetBono(){
    return bono;
}

