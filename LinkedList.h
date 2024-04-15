#include <iostream>
#include "Node.h"

using namespace std;
// creamoos la clase lista para almacenar las funciones
class Lista {
public:
    Lista();
    bool estaVacia();
    void insertar(int, string);
    void mostrar();

private:
    Nodo* head;
};
