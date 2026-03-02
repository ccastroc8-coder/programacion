#include <iostream>
#include <string>   
using namespace std;

//Carlos Daniel Castro Caceres
//Curso: Programación III
//Carnet: 9941-24-10004
//Hoja de Trabajo 2 - Estructura y Nodo

struct Producto {
    int codigo;
    string nombre;
    double precio;
};

struct Nodo {
    Producto data;
    Nodo* siguiente;
};

int main() {
    Nodo* primero = new Nodo;

    primero->data.codigo = 101;
    primero->data.nombre = "Laptop";
    primero->data.precio = 5500.50;
    primero->siguiente = nullptr;

    Nodo* segundo = new Nodo;
    segundo->data.codigo = 102;
    segundo->data.nombre = "Mouse";
    segundo->data.precio = 150.75;
    segundo->siguiente = nullptr;

    primero->siguiente = segundo;

    // Mostrar datos
    Nodo* actual = primero;
    while (actual != nullptr) {
        cout << "Codigo: " << actual->data.codigo << endl;
        cout << "Nombre: " << actual->data.nombre << endl;
        cout << "Precio: Q" << actual->data.precio << endl << endl;
        actual = actual->siguiente;
    }

    // Liberar memoria
    delete primero;
    delete segundo;

    return 0;
}