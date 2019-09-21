//
// Created by Alonso Chaves  on 2019-09-20.
//

#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(const Trabajador &trabajador, Nodo *siguiente) : trabajador(trabajador), siguiente(siguiente) {}

Nodo::~Nodo() {

}

const Trabajador &Nodo::getTrabajador() const {
    return trabajador;
}

void Nodo::setTrabajador(const Trabajador &trabajador) {
   this->trabajador = trabajador;
}

Nodo *Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente) {
    Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
    return trabajador.toString();
}
