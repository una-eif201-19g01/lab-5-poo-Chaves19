//
// Created by Alonso Chaves  on 2019-09-20.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_NODO_H
#define LAB_6_LISTAS_ENLAZADAS_NODO_H


#include <ostream>
#include "Trabajador.h"

class Nodo {
    Trabajador trabajador;
    Nodo *siguiente;

public:
    Nodo();

    Nodo(const Trabajador &trabajador, Nodo *siguiente);

    virtual ~Nodo();

    const Trabajador &getTrabajador() const;

    void setLibro(const Trabajador &trabajador);

    Nodo *getSiguiente() const;

    void setSiguiente(Nodo *_siguiente);

    std::string toString();

};


#endif //LAB_6_L