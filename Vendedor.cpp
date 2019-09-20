//
// Created by Alonso Chaves  on 2019-09-20.
//

#include "Vendedor.h"

Vendedor::Vendedor() : comision(0.0), ventas(0) {
}

Vendedor::Vendedor(std::string id, int horasLab, float precioHora, int annosLaborados, float comision, int ventas) :
Trabajador(id, horasLab, precioHora, annosLaborados), comision(comision), ventas(ventas) {
}

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

std::string Vendedor::toString() {
    std::string reporte = Trabajador::toString();
    reporte = reporte + "\n" +
            "Comision: " + std::to_string(getComision()) + "\n" +
            "Ventas: " + std::to_string(getVentas()) + "\n";
    return reporte;
}

void Vendedor::setVentas(int ventas) {
    this->ventas = ventas;
}

int Vendedor::getVentas() {
    return ventas;
}

void Vendedor::setComision(float comision) {
    this->comision = comision;
}

float Vendedor::getComision() {
    return comision;
}

