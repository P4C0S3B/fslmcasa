#include <iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;

void llenardatos(float v[], int ne)
{
    float num, s;
    srand(time(NULL));
    for(int i=0; i<ne;i++)
    {
        v[i]=rand()%20+1;
        num = (rand() % 99 + 1 )/100.0;
        s = v[i] + num;
        v[i]= s;
    }
}

void verDatos(float v[],int ne)
{
    cout<<"Los elemntos del vector son: ";
    for(int i=0;i<ne;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

float sumaPromediocifras(float v[],int ne)
{
    int i,suma=0;
    for(i=0;i<ne;i++)
    {
        suma+=v[i];
    }
    return (float)suma/ne;
}

int contardebajopromedio(float v[], int ne , float promedio)
{
    int contador=0;
    for(int i=0;i<ne;i++)
    {
         if(v[i]<promedio)
        {
        contador++;
        }

    }
   
    return contador;

}
void guardaelementosmenores(float v[],int ne, float promedioNumeros,float lista[])
{

    int i, j=0;
    if(v[i]<promedioNumeros)
    {
        lista[j]=v[i];
        j++;
    }
}


main()
{
    int ne,menores;
    float promedioNumeros;
    cout<<"Cuantos elementos tiene el vector: ";
    cin>>ne;
    float vector[ne];
    llenardatos(vector,ne);
    verDatos(vector,ne);
    promedioNumeros=sumaPromediocifras(vector,ne);
    cout<<"El promedio de los datos generados es "<<promedioNumeros<<endl;
    menores= contardebajopromedio(vector,ne,promedioNumeros);
    cout<<"Los elementos debajo del promedio son: "<<menores;
    float listamenores[menores];
    guardaelementosmenores(vector,ne,promedioNumeros,listamenores);
    verDatos(listamenores,menores);

}