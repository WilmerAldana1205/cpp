#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
int nota = 0;

cout << "Ingrese la nota que obtuvo: ";
cin >> nota;

 if (nota > 100 || nota < 0) {
	
    cout << "Ingrese una nota que entre 0 - 100";
    return 0;
}

if (nota >=100 && nota <=100) {
    cout << "Obtuviste una A++";
}
    

if (nota >=94 && nota <= 95) {
    cout << "Obtuviste una A+";
    
}

if (nota >=86 && nota <= 90) {
    cout << "Obtuviste una A";
}

if (nota >=80 && nota <= 84) {
    cout << "Obtuviste una A-";
    
}

if (nota >=80 && nota <= 84) {
    cout << "Obtuviste una B+";
    
}

if (nota >=70 && nota <= 74) {
    cout << "Obtuviste una B";
    
}

if (nota >=66 && nota <= 70) {
    cout << "Obtuviste una B-";
    
}

if (nota >=61 && nota <= 65) {
    cout << "Obtuviste una C+";
}
    

if (nota >=56 && nota <= 60) {
    cout << "Obtuviste una C";
}
    

if (nota >=51 && nota <= 55) {
    cout << "Obtuviste una C-";
}

if (nota >=46 && nota <= 50) {
    cout << "Obtuviste una D+";
}
    
    if (nota >=41 && nota <= 45) {
    cout << "Obtuviste una D";
}
    
    if (nota >=36 && nota <= 40) {
    cout << "Obtuviste una D-";
}
    
    if (nota >=31 && nota <= 35) {
    cout << "Obtuviste una E+";
}

  if (nota >=26 && nota <= 30) {
    cout << "Obtuviste una E";
}
    
    if (nota >=21 && nota <= 25) {
    cout << "Obtuviste una E-";
}
    
    if (nota >=16 && nota <= 20) {
    cout << "Obtuviste una F+";
    
}
    if (nota >=10 && nota <= 15) {
    cout << "Obtuviste una F";
}

    if (nota >=6 && nota <= 10) {
    cout << "Obtuviste una F-";
}
    
    if (nota >=0 && nota <=0) {
    cout << "Obtuviste una F--";
}

return 0;

}

