/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vendedor.h
 * Author: ESCINF
 *
 * Created on 13 de septiembre de 2019, 8:26
 */

#ifndef VENDEDOR_H
#define VENDEDOR_H

class Vendedor : public Trabajador  {
private:
    float comision;
    int ventas;
public:
    Vendedor();
    Vendedor(float, int);
    ~Vendedor();
    float Trabajador::calcularSalarioBase();
    float Trabajador::calcularHorasExtra();
    float Trabajador::calcularAnualidades();
    float Trabajador::calcularSalariobruto();
    float Trabajador::calcularCargas();
    float Trabajador::calcularSalarioNeto();
    std::string Trabajador::toString();
    void SetVentas(int ventas);
    int GetVentas();
    void SetComision(float comision);
    float GetComision();

};

#endif /* VENDEDOR_H */

