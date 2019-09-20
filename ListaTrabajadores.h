//
// Created by Alonso Chaves  on 2019-09-20.
//
#ifndef LISTATRABAJADORES_
#define LISTATRABAJADORES_


#include <ostream>
#include "Nodo.h"

class ListaTrabajadores {
    Nodo *primero;
    Nodo *actual;

public:
    ListaTrabajadores();

    virtual ~ListaTrabajadores();

    void insertarInicio(const Trabajador& _trabajador);
    void insertarFinal(const Trabajador& _trabajador);
    bool eliminarInicio();
    int totalNodos();
    bool listaVacia();

    Nodo *getPrimero() const;

    void setPrimero(Nodo *primero);

    Nodo *getActual() const;

    void setActual(Nodo *actual);

    std::string toString();
};


#endif //LISTATRABAJADORES_
