#include <iostream>
#include "productos.h"
#include "factura.h"

using namespace std;

 extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "***************" << endl;
            cout << "1 - Capuccino" << endl;
            cout << "2 - Expresso" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Capucciono - L 40.00", 1, 40);
                break;
              case 2:
                agregarProducto("1 Expresso - L 30.00", 1, 30);
                break;
            default:
            {
              cout << "opcion no valida";
              return;
               break;
            }
       }
		
     cout << endl;
     cout <<"Producto agregado" << endl << endl;
     system("pause");
     
      break;
      
        {
     case 2:
        {
		 
    cout << "BEBIDAS FRiAS" << endl;
    cout << "***************" << endl;
    cout << "1 - Mochaccino Supreme" << endl;
    cout << "2 - Bandera Azul" << endl;
    cout << "3 - Granita De Cafe" << endl;
    cout << endl;
    cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Mochaccino Supreme - L 55.00", 1, 55);
                break;
              case 2:
                agregarProducto("1 Bandera Azul - L 40.00", 1, 40);
                break;
                case 3:
                agregarProducto("1 Granita De Cafe - L 36.00" , 1,36);
                break;
            default:
            {
              cout << "opcion no valida";
              return;
               break;
           }
        }
        
        
		break;
     cout << endl;
     cout <<"Producto agregado" << endl << endl;
     system("pause");
      break;
    }
    case 3:
    {
    cout << "REPOSTERIA" << endl;
    cout << "***************" << endl;
    cout << "1 -  Quesadilla" << endl;
    cout << "2 - Pastelitos De Pi?a" << endl;
    cout << "3 - Galletas De Avena" << endl;
    cout << endl;
    cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProducto("1 Quesadilla - L 25", 1, 25);
                break;
              case 2:
                agregarProducto("1 Pastelitos De Pi?a - L 22.00", 1, 22);
                break;
                case 3:
                agregarProducto("1 Galleta De Avena - L 10" , 1, 10);
                break;
            default:
            {
              cout << "opcion no valida";
              return;
               break;
            }
       }
		break;
        
     cout << endl;
     cout <<"Producto agregado" << endl << endl;
     system("pause");
      break;
    }
    system("pause");
        break;
    
    default:
    break;
    }
}

