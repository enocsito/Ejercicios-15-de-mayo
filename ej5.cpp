#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, x;
    
    cout<<"Ingrese el valor de a:\n";
    cin>>a;
    cout<<"Ingrese el valor de b:\n";
    cin>>b;
    cout<<"Ingrese el valor de c:\n";
    cin>>c;

    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    x=-c/b;

    float i=b*b-4*a*c;

    if (i<0)
    {
        cout<<"La solucion no se encuentra en los numeros reales";
    }
    else if (a==0)
    {
        cout <<"La ecuacion solo tiene una solucion y es: "<< x; 
    }
    else
    {
        cout<<"Las soluciones son: "<< x1 << " y " << x2;
    }
    return 0;
}