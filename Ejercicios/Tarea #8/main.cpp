#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float num=0, rad = 2, resultado = 0;
    
	//Proceso
    
    cout << "Ingrese El Valor Al Cual Desea Calcular La Raiz: " << endl;
    cin >> num;
    resultado = pow(num,(1/rad));
    system ("color 04");
    cout << "La Raiz Cuadrada Del Valor Ingresado Es " << num << " Es : " << resultado << endl;
    
    return 0;
}
