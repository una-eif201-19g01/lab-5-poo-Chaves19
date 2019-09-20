/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Trabajador.cpp
 * Author: ESCINF
 * 
 * Created on 13 de septiembre de 2019, 8:08
 */

#include "Trabajador.h"

Trabajador::Trabajador() : id(""), horasLab(0), precioHora(0.0), annosLaborados(0) {
}

Trabajador::Trabajador(std::string id, int horasLab, float precioHora, int annosLaborados) :
id(id), horasLab(horasLab), precioHora(precioHora), annosLaborados(annosLaborados) {
}

Trabajador::~Trabajador() {
}

virtual float Trabajador::calcularSalarioBase() {
    return precioHora * 48;
}

virtual float Trabajador::calcularHorasExtra() {
    int contador = horasLab * 0.5;
    return horasLab + contador;
}

virtual float Trabajador::calcularAnualidades() {
    return (calcularSalarioBase() * (0.05 * annosLaborados));
}

virtual float Trabajador::calcularSalariobruto() {
    return calcularSalarioBase() + calcularAnualidades() + (precioHora * calcularHorasExtra());
}

virtual float Trabajador::calcularCargas() {
    return calcularSalariobruto() - (calcularSalariobruto() * 0.09);
}

virtual float Trabajador::calcularSalarioNeto() {
    return calcularSalariobruto() - calcularCargas();
}

virtual std::string Trabajador::toString() {
    std::string reporte = "";
    reporte = reporte + "Los datos del trabajador son: \n" + "Identificacion: " + id + "\n" +
            "Horas laboradas: " + std::to_string(getHorasLab()) + "\n" +
            "PrecioPorHora: " + std::to_string(getPrecioHora()) + "\n" +
            "Annos Laborados: " std::to_string(getAnnosLaborados());
    return reporte;

}

void Trabajador::setAnnosLaborados(int annosLaborados) {
    this->annosLaborados = annosLaborados;
}

int Trabajador::getAnnosLaborados() {
    return annosLaborados;
}

void Trabajador::setPrecioHora(float precioHora) {
    this->precioHora = precioHora;
}

float Trabajador::getPrecioHora() {
    return precioHora;
}

void Trabajador::setHorasLab(int horasLab) {
    this->horasLab = horasLab;
}

int Trabajador::getHorasLab() {
    return horasLab;
}

void Trabajador::setId(std::string id) {
    this->id = id;
}

std::string Trabajador::getId() {
    return id;
}

