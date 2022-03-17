#include <iostream>
#include "factura.h"
using namespace std;

double subtotal;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{
    system("cls");
    cout << "*********" << endl;
    cout << "Factura" << endl;
    cout << "*********" << endl;
    cout <<endl;

    cout << "Productos:" << endl;
    cout << listaProductos;

    cout <<endl;
    cout << "Subtotal: " << subtotal;
    cout << "Impuesto 15%: " << subImpuesto << endl;
    cout << "Total: " << total << endl;
    cout << endl;
    cout << endl;
    system("Pause");

}
