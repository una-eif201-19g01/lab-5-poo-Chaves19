/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vendedor.cpp
 * Author: ESCINF
 * 
 * Created on 13 de septiembre de 2019, 8:26
 */

#include "Vendedor.h"

Vendedor::Vendedor() : comision(0.0), ventas(0) {}

Vendedor::Vendedor(float comision, int ventas) : comision(comision), ventas(ventas) {}

Vendedor::~Vendedor() {
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

std::string toString(){
    
}

void Vendedor::SetVentas(int ventas) {
    this->ventas = ventas;
}

int Vendedor::GetVentas() {
    return ventas;
}

void Vendedor::SetComision(float comision) {
    this->comision = comision;
}

float Vendedor::GetComision() {
    return comision;
}

