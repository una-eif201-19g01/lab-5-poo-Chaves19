//
// Created by Alonso Chaves  on 2019-09-20.
//

#ifndef SECRETARIA_H
#define SECRETARIA_H

class Secretaria : public Trabajador {
public:
    Secretaria();
    Secretaria(std::string, int, float, int);
    ~Secretaria();
    float calcularSalarioBase();
    float calcularHorasExtra();
    float calcularAnualidades();
    float calcularSalariobruto();
    float calcularCargas();
    float calcularSalarioNeto();
    std::string toString();

};

#endif /* SECRETARIA_H */

