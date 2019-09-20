
//
// Created by Alonso Chaves  on 2019-09-20.
//

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
    void setBono(float bono);
    float getBono();

};

#endif /* GERENTE_H */

