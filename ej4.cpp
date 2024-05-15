#include <iostream>
using namespace std;

int main()
{
    float c1, c2, p1, p2, l, py, pr;
    string nombre;
    cout<<"Ingrese su nombre:";
    cin>> nombre;
    cout << "Ingrese la nota del Corto 1:\n";
    cin >> c1;
    cout << "Ingrese la nota del Corto 2:\n";
    cin >> c2;
    cout << "Ingrese la nota del Parcial 1:\n";
    cin >> p1;
    cout << "Ingrese la nota del Parcial 2:\n";
    cin >> p2;
    cout << "Ingrese la nota del Laboratorio:\n";
    cin >> l;
    cout << "Ingrese la nota del Proyecto:\n";
    cin >> py;

    pr=c1*0.1+c2*0.1+p1*0.15+p2*0.2+l*0.2+py*0.25;

    if (pr>=6)
    {
        cout<<"Su promedio es: " << pr << " y usted aprobo la materia";
    }
    else
    {
        cout<<"Su promedio es: " << pr << " y usted reprobo la materia";
    }

    return 0;

}