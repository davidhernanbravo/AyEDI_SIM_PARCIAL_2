#include "../include/pedido.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

Pedido::Pedido(string codigo, Cliente* cliente)
    : codigo(codigo), cliente(cliente) {}

string Pedido::obtenerCodigo()
    {
        return codigo;
    }

void Pedido::adjuntar(Articulo* articulo) 
    {
        articulos.push_back(articulo);
    }

void Pedido::mostrar()
    {
        cout << "Pedido: " << codigo << endl;
        cout << "Cliente: " << cliente->obtenerNombre() << " (" << cliente->obtenerDomicilio() << ")" << endl;
        cout << "Articulos:" << endl;

        for (auto& articulo : articulos) 
            {
                cout << "  - " << articulo->obtenerNombre() << " (" << articulo->obtenerCodigo() << ") - $" << fixed << setprecision(2) << articulo->obtenerPrecio() << endl;
            }
        cout << "............................................" << endl;
        cout << endl;
    }