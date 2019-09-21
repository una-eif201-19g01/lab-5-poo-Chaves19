//
// Created by Alonso Chaves  on 2019-09-20.
//

#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <string>

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

