/*Crear un programa que calcule la media de las estaturas de una clase. Deducir
cuántos son más altos que la media y cuantos son más bajos que la media. Utilizando
arreglos.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    int suma;
    float promedio;
    int arribadepromedio=0;
    int abajodepromedio=0;
    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>n;
    int estaturas[n];
    for (int i = 0; i < n; i++){
        cout<<"Ingrese la estatura del alumno: ";
        cin>>estaturas[i];
        suma+=estaturas[i];
    }
    promedio=(float)suma/n;
    cout<<promedio<<"\n";
    for (int i = 0; i < n; i++){
        if (estaturas[i]>promedio){
            arribadepromedio++;
        } else if (estaturas[i]<promedio)
        {
            abajodepromedio++;
        }  
    }
    cout<<"Alumnos con estatura mayor del promedio: "<<arribadepromedio<<"\n";
    cout<<"Alumnos con estatura menor del promedio: "<<abajodepromedio<<"\n";
    


    return 0;
}