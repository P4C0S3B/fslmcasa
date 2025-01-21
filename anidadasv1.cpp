#include <iostream>
using namespace std;

main(){
    int a, b, c;
    cout<<"Ingrese el valor 1: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor 2: "<<endl;
    cin>>b;
    cout<<"Ingrese el valor 3: "<<endl;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"El mayor es: "<<a<<endl;
        }
        else{
        cout<<"El mayor es "<<a<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"Es mayor es: "<<b<<endl;
        }
        else {
            if(c>a){
                cout<<"El mayor es: "<<c<<endl;
            }
            else{
                cout<<"Son iguales.";
            }
        }
    }
}