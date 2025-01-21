/*Escribe un programa que pida el limite inferior y superior de un intervalo. Si el limite inferior es mayor al superior lo tiene que
volver a pedir
    while(true){
        cout<<"Ingrese un numero";
        cin>>numeros;
        if (numeros>=1 && numeros <=5)
        break;
*/
#include <iostream>
using namespace std;

main(){
    int Ninf, Nsup, numn,numv, Suma=0, contar;
    char op;
    bool ban=true;
    cout<<"Escriba el limite inferior del intervalo: ";
    cin>>Ninf;
    cout<<"Escriba el limite superior del intervalo: ";
    cin>>Nsup;
    while(Ninf>Nsup){
        cout<<"Limite incoherente. Por favor vuelva a ingresar los datos correctamente."<<endl;
        cout<<"Escriba el limite inferior del intervalo: ";
        cin>>Ninf;
        cout<<"Escriba el limite superior del intervalo: ";
        cin>>Nsup;
    }
    cout<<"Ingrese los numeros dentro del intervalo <<S>> <<N>>";
    while(ban=true){
        op= getchar();
        cin>>op;
        if (op=='s' || op== 'S'){
            cout<<"Ingresar numero: "<<endl;
            cin>>numn;
            contar=numn;
            if (numn != 0){
                cout<<"¿Ingresar otro valor?<<S>><<N>>";
                op= getchar();
            }
        }
        else{
            numv=contar;
            !ban;
            Suma=contar+numn;
            cout<<"La suma de los datos ingresados es: "<<Suma<<endl;
        }
        cin.ignore();
    }
}