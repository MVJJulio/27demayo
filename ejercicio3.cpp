/*Crear un programa, que solicite números y que evalué si un número es impar y si es
impar que lo guarde en un arreglo y que imprima el arreglo.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int numero;
    int j=0;
    cout<<"Introduzca la cantidad de datos que tendra el arreglo: ";
    cin>>n;
    int impares[n];
    do{
        cout<<"Introduzca el numero: ";
        cin>>numero;
        if (numero%2==1){
            impares[j]=numero;
            j++;
        }
        
    } while (j<n);
    
    for (int i = 0; i < j; i++)
    {
        cout<<impares[i]<<"\n";
    }
    
    return 0;
}