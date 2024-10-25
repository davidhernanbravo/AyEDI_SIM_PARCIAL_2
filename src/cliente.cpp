#include "../include/cliente.hpp"

using namespace std;

Cliente::Cliente(string codigo, string nombre, string domicilio)
    : codigo(codigo), nombre(nombre), domicilio(domicilio) {}

string Cliente::obtenerCodigo()
    {
        return codigo;
    }

string Cliente::obtenerNombre()
    {
        return nombre;
    }

string Cliente::obtenerDomicilio()
    {
        return domicilio;
    }