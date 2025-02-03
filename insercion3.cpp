#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
 
void llenarvector(int v[], int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        //v[i] = rand()%20+1;//
        cin>>v[i];
    }
}

void muestravector(int v [], int n)
{
	for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }    
}

int insercion(int v[], int n){
    int cont = 0, aux;
    for(int i = 1;i < n - 1;i++){
        aux = v[i];
        int j = i - 1;
        while(j >= 0){
            cont++;
            if(aux < v[j]){
                v[j + 1] = v[j];
                v[j] = aux;
            }
            j--;
        }
    }
    return cont;
}

int main(){
    int ne, comparaciones;
    cout << "Ingrese el numero de elementos: "; cin >> ne;
    int vec[ne];
    llenarvector(vec, ne);
    cout << "Vector original:" << endl;
    muestravector(vec, ne);
    comparaciones = insercion(vec, ne);
    cout << "\nVector Ordenado: " << endl;
    muestravector(vec, ne);
    cout << "\nEl numero de comparaciones = " << comparaciones;
    return 0; 
}