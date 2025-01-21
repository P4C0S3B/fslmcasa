#include <iostream>
using namespace std; 

main(){
    int p=0, m=0, a=2, b=1, n;//p es el contenedor 1 para a, la parte de arriba; m  es el contenedor 2, para la parte de abajo//
    cout<<"Ingrese el numero de terminos: ";
    cin>>n;
    
        if (n==1){
            cout<<a<<"/"<<b<<endl;
        } else{
            while (b < 2*n)
            {
                p=a;
                m=b;
                /*cout<<"-----------------------"<<endl;
                cout<<"El valor de p ahora es: "<<p<<endl;
                cout<<"El valor de m ahora es: "<<m<<endl;
                cout<<"El valor de b ahora es: "<<b<<endl;
                cout<<"El valor de a ahora es: "<<a<<endl;*/
                if (a%2 == 0){
                    cout<<" + "<<a<<"/"<<b;
                }
                else{
                    cout<<" - "<<a<<"/"<<b;
                }
                b=2+m;
                a=p+m;
                /*(a%2 == 0)?cout<<" + "<<a<<"/"<<b:cout<<" - "<<a<<"/"<<b;*/
            }   
        }     
}