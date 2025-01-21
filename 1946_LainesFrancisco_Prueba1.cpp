#include <iostream>
using namespace std;

main(){
    float a,b,c,d;
    cout << "Ingrese un número a"<<endl;
    cin >> a;
    cout << "El valor de a es "<<a<<endl;
    cout << "Ingrese un número b"<<endl;
    cin >> b;
    cout << "El valor de b es "<<b<<endl;
    cout <<"El valor de c es "<<endl;
    cin >> c;
    cout << "El valor de c es "<<c<<endl;
    cout <<"Desplazar los valores hacia arriba"<<endl;
    d=a;
    a=c;
    c=b;
    b=d;
    cout<<"Ahora el valor de a es "<< a <<endl;
    cout<<"Ahora el valor de b es "<< b <<endl;
    cout<<"Ahora el valor de c es "<< c <<endl;
}
