//
// Created by Alonso Chaves  on 2019-09-20.
//

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

