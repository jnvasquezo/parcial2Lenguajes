#include "LinkedList.h"

int main() {
    Lista lista;
    int numDocument;
    string nombre;
    cout << "Bienvenido al servicio de comidas rapidas DeliEAFIT" << endl;
    cout << "Se atendera en orden de llegada" << endl;
    //con este ciclo limito a 5 los clientes
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el numero de documento: ";
        cin >> numDocument;
        cout << "Ingrese el nombre: ";
        cin.ignore();
        getline(cin, nombre);
        lista.insertar(numDocument, nombre);
    }

    lista.mostrar();

    return 0;
}