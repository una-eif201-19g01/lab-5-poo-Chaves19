//
// Created by Alonso Chaves  on 2019-09-20.
//

#include "Secretaria.h"
#include "Trabajador.h"

Secretaria::Secretaria() {
}

Secretaria::Secretaria( std::string id, int horasLab, float precioHora, int annosLaborados):
Trabajador(id, horasLab, precioHora, annosLaborados) {}

Secretaria::~Secretaria() {
}

float Secretaria::calcularSalarioBase() {
    return Trabajador::getPrecioHora() * 48;
}

float Secretaria::calcularHorasExtra() {
    int contador = Trabajador::getHorasLab() * 0.05;
    return Trabajador::getHorasLab() + contador;
}

float Secretaria::calcularAnualidades() {
    return (calcularSalarioBase() *(0.05 * Trabajador::getAnnosLaborados()));
}

float Secretaria::calcularSalariobruto() {
    return calcularSalarioBase() + calcularAnualidades() + (Trabajador::getPrecioHora() * calcularHorasExtra());
}

float Secretaria::calcularCargas() {
    return calcularSalariobruto() - (calcularSalariobruto() * 0.09);
}

float Secretaria::calcularSalarioNeto() {
    return calcularSalariobruto() - calcularCargas();
}

std::string Secretaria::toString() {
    std::string reporte = Trabajador::toString();
    return reporte; 
}
