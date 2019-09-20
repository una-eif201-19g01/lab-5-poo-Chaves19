/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Trabajador.h
 * Author: ESCINF
 *
 * Created on 13 de septiembre de 2019, 8:08
 */

#ifndef TRABAJADOR_H
#define TRABAJADOR_H

class Trabajador {
private:
    std::string id;
    int horasLab;
    float precioHora;
    int annosLaborados;
public:
    Trabajador();
    Trabajador(std::string, int, float, int);
    virtual float calcularSalarioBase();
    virtual float calcularHorasExtra();
    virtual float calcularAnualidades();
    virtual float calcularSalariobruto();
    virtual float calcularCargas();
    virtual float calcularSalarioNeto();
    virtual std::string toString();
    virtual ~Trabajador();
    void setAnnosLaborados(int);
    int getAnnosLaborados();
    void setPrecioHora(float);
    float getPrecioHora();
    void setHorasLab(int);
    int getHorasLab();
    void setId(std::string);
    std::string getId();

};

#endif /* TRABAJADOR_H */

