#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout<<"Ingrese el primer angulo: \n";
    cin>>a;
    cout<<"Ingrese el segundo angulo: \n";
    cin>>b;

    c=180-(a+b);
    if (a+b<180)
    {
        cout<<"El angulo restante es: " << c;
    }
    else
    {
        cout<<"Los angulos ingresados no forman un triangulo\n";
    }
    
    

    return 0;

}