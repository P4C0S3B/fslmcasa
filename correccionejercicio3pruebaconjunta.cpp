#include <iostream>
using namespace std; 

main(){
    int p=0, m=0, a=2, b=1, n;//p es el contenedor 1 para a, la parte de arriba; m  es el contenedor 2, para la parte de abajo//
    double d=0.00, j=0.00, k= 0.00, l= 0.00, x=0.00; //d es donde se suman las fracciones positivas, j el repositorio de d; l es donde se suman las fracciones negativas, l su repositorio//
    cout<<"Ingrese el numero de terminos: ";
    cin>>n;
            while (b < 2*n)
            {
                p=a;
                m=b;
                if (p%2 == 0){
                    cout<<" + "<<a<<"/"<<b;
                }
                else{
                    cout<<" - "<<a<<"/"<<b;
                }
                b=2+m;
                a=p+m;
                if (p%2 == 0){
                    d=j;
                    j=d+(p/m);
                }
                else{
                    k=l;
                    l=-1*(p/m)+k;
                }
            }
            cout<<"El valor de d es: "<<d<<endl;
            cout<<"El valor de j es: "<<j<<endl;
            cout<<"El valor de k es: "<<k<<endl;
            cout<<"el valor de l es: "<<l<<endl;
            x=j+l;
            cout<<"El valor de x es:"<<x<<endl;
}