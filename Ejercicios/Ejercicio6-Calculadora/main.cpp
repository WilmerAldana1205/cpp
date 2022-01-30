#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
	
	
int main(int argc, char** argv) {
	
	using namespace std;
	
	
//Datos de entrada
int a = 0;
int b= 0;
int resultado =0;
int Suma =0;
int Resta =0;
int Multiplicacion =0;
int Division =0;


cout <<"Ingrese el valor del Primer Numero (A): ";
cin >> a;

cout <<endl;

cout <<"Ingrese el valor del Segundo Numero (B): ";
cin >> b;

//Proceso
Suma = a + b;
Resta = a - b;
Multiplicacion = a * b;
Division  = a / b;
cout <<endl;




//Salida
cout <<endl;
cout << "La suma de a + b es: " << Suma;
cout <<endl;
cout << "La resta de a - b es: " << Resta;
cout <<endl;
cout << "La Multiplicacion de a * b es: " << Multiplicacion;
cout <<endl;
cout << "La Division de a / b es: " << Division;
cout <<endl;
	
	return 0;
}
