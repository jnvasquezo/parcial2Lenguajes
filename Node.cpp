#include "Node.h"

//Constructor

Nodo::Nodo(int numDocument, string nombre) {
    this->numeroDocumento = numDocument;
    this->nombre = nombre;
    this->next = nullptr;
}
//getter y setter
int Nodo::getNumeroDocumento() {
    return this->numeroDocumento;
}

string Nodo::getNombre() {
    return this->nombre;
}

Nodo* Nodo::getNext() {
    return this->next;
}

void Nodo::setNext(Nodo* next) {
    this->next = next;
}