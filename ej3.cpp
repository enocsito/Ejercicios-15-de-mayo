#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingrese el valor del angulo en grados: \n";
    cin>>n;
    
    if (n<90)
    {
        cout<<"El angulo es agudo\n";
    }
    else if (n>90)
    {
        cout<<"El angulo es obtuso\n";
    }
    else if (n==90)
    {
        cout<<"El angulo es recto";
    }

    return 0;
    
}