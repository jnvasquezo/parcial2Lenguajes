#include <iostream>

using namespace std;

//clase nodo para almancenar los datos
//establezco los tipos de datos para cada variable
class Nodo {
public:
    Nodo(int, string);
    int getNumeroDocumento();
    string getNombre();
    Nodo* getNext();
    void setNext(Nodo*);

private:
    int numeroDocumento;
    string nombre;
    Nodo* next;
};
