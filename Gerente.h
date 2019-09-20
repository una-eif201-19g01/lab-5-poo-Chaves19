/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gerente.h
 * Author: ESCINF
 *
 * Created on 13 de septiembre de 2019, 8:26
 */

#ifndef GERENTE_H
#define GERENTE_H

class Gerente  : public Trabajador  {
private:
    float bono;
public:
    Gerente();
    Gerente(std::string, int, float, int, float);
    ~Gerente();
    float calcularSalarioBase();
    float calcularHorasExtra();
    float calcularAnualidades();
    float calcularSalariobruto();
    float calcularCargas();
    float calcularSalarioNeto();
    std::string toString();
    void SetBono(float bono);
    float GetBono();

};

#endif /* GERENTE_H */

