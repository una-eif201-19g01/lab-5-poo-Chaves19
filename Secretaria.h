/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Secretaria.h
 * Author: ESCINF
 *
 * Created on 13 de septiembre de 2019, 8:26
 */

#ifndef SECRETARIA_H
#define SECRETARIA_H

class Secretaria : public Trabajador {
private:
public:
    Secretaria();
    Secretaria(Trabajador &trabajador);
    ~Secretaria();
    float Trabajador::calcularSalarioBase();
    float Trabajador::calcularHorasExtra();
    float Trabajador::calcularAnualidades();
    float Trabajador::calcularSalariobruto();
    float Trabajador::calcularCargas();
    float Trabajador::calcularSalarioNeto();
    std::string Trabajador::toString();

};

#endif /* SECRETARIA_H */

