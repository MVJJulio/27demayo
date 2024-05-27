#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Dame el tamaño de arreglos: ";
    cin >> n;
    int arreglo[n];
    int pares[n];
    int j=0;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> arreglo[i];
        if (arreglo[i] % 2 == 0)
        {
            pares[j]=arreglo[i];
            j++;
        }
    }
    for (int k = 0; k <n; k++)
    {
        cout << arreglo[k]<< "\n";
    }
    for (int i = 0; i <j; i++)
    {
        cout << pares[i]<< "\n";
    }

    return 0;
}