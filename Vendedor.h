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
    Vendedor(std::string, int, float, int, float, int);
    ~Vendedor();
    float calcularSalarioBase();
    float calcularHorasExtra();
    float calcularAnualidades();
    float calcularSalariobruto();
    float calcularCargas();
    float calcularSalarioNeto();
    std::string toString();
    void setVentas(int ventas);
    int getVentas();
    void setComision(float comision);
    float getComision();

};

#endif /* VENDEDOR_H */

