#include "LinkedList.h"

//creamos la lista verificando que sea nula
Lista::Lista() {
    this->head = nullptr;
}

bool Lista::estaVacia() {
    return this->head == nullptr;
}
//insertamos un nuevo nodo en la lista
void Lista::insertar(int numDocument, string nombre) {
    if (estaVacia()) {
        this->head = new Nodo(numDocument, nombre);
    } else {
        Nodo* actual = this->head;
        while (actual->getNext() != nullptr) {
            actual = actual->getNext();
        }
        actual->setNext(new Nodo(numDocument, nombre));
    }
}
//mostramos los valores de la lista
void Lista::mostrar() {
    Nodo* actual = this->head;
    int contador = 1;
    while (actual != nullptr) {
        cout << "Turno " << contador++ << ":" << endl;
        cout << "Numero de documento: " << actual->getNumeroDocumento() << endl;
        cout << "Nombre: " << actual->getNombre() << endl;
        actual = actual->getNext();
    }
}