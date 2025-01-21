#include <iostream>
using namespace std; 

main(){
    int p=0, m=0, a=2, b=1, n;//p es el contenedor 1 para a, la parte de arriba; m  es el contenedor 2, para la parte de abajo//
    cout<<"Ingrese el numero de terminos: ";
    cin>>n;
    switch (n)
    {
    case 1:
       if (n=1)
       {
         cout<<a<<"/"<<b<<endl;
         break;
       }
    case 2: 
        if(n>1)
        {
            p=a;
            m=b+(n++);
            b=m+2;
            cout<<"El valor de a es: "<<a<<endl;
            cout<<"El valor de m es: "<<m<<endl;
            cout<<"El valor de b es: "<<b<<endl;
            while (b < 2*n)
            {
                m=b;
                b=m+2;
                cout<<m<<endl;
                cout<<b<<endl;
                break;
            }
            
        }
        break;   
    default:
        break;
    }

}