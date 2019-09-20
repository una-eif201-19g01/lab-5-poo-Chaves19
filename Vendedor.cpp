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

Vendedor::Vendedor( std::string id, int horasLab, float precioHora, int annosLaborados, float comision, int ventas) :
Trabajador(id, horasLab, precioHora, annosLaborados), comision(comision), ventas(ventas) {}

Vendedor::~Vendedor() {
}

float Vendedor::calcularSalarioBase() {
    return Trabajador::getPrecioHora() * 48;
}

float Vendedor::calcularHorasExtra() {
   int contador = Trabajador::getHorasLab() * 0.05;
    return Trabajador::getHorasLab() + contador;
}

float Vendedor::calcularAnualidades() {
    return (calcularSalarioBase() *(0.05 * Trabajador::getAnnosLaborados()));
}

float Vendedor::calcularSalariobruto() {
    return calcularSalarioBase() + calcularAnualidades() + (Trabajador::getPrecioHora() * calcularHorasExtra());
}

float Vendedor::calcularCargas() {
    return calcularSalariobruto() - (calcularSalariobruto() * 0.09);
}

float Vendedor::calcularSalarioNeto() {
    return calcularSalariobruto() - calcularCargas();
}

std::string Vendedor::toString(){
    
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

