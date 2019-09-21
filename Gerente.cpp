//
// Created by Alonso Chaves  on 2019-09-20.
//

#include "Gerente.h"

Gerente::Gerente() : bono(0.0) {
}

Gerente::Gerente(std::string id, int horasLab, float precioHora, int annosLaborados, float bono) :
Trabajador(id, horasLab, precioHora, annosLaborados), bono(bono) {
}

Gerente::~Gerente() {
}

float Gerente::calcularSalarioBase() {
    return Trabajador::getPrecioHora() * 48;
}

float Gerente::calcularHorasExtra() {
    int contador = Trabajador::getHorasLab() * 0.05;
    return Trabajador::getHorasLab() + contador;
}

float Gerente::calcularAnualidades() {
    return (calcularSalarioBase() *(0.05 * Trabajador::getAnnosLaborados()));
}

float Gerente::calcularSalariobruto() {
    return (calcularSalarioBase() + calcularAnualidades() + (Trabajador::getPrecioHora() * calcularHorasExtra())) +bono;
}

float Gerente::calcularCargas() {
    return calcularSalariobruto() - (calcularSalariobruto() * 0.09);
}

float Gerente::calcularSalarioNeto() {
    return calcularSalariobruto() - calcularCargas();
}

std::string Gerente::toString() {
    std::string reporte = Trabajador::toString();
    reporte = reporte + "\n" + "Bono: " + std::to_string(getBono()) + "\n";
    return reporte;

}

void Gerente::setBono(float bono) {
    this->bono = bono;
}

float Gerente::getBono() {
    return bono;
}

