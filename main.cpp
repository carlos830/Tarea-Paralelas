#include <iostream>
#include <fstream>
#include <windows.h>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
void leer();

int main()
{
    leer();

    return 0;
}

void leer()
{
    ifstream archivo("numeros.txt");
    char contenido[100];
    double largo, sumar=0, desv_est=0, y,aux2;

    if (archivo.fail())
    {
        cout<< "Error al abrir el archivo"<<endl;
        exit(1);
    }

    while(!archivo.eof())
    {
        archivo>>contenido;//lee por linea
        if( contenido[1]==',')//cambia las comas por puntos
         {
          contenido[1]='.';
         }
        sumar=sumar+ atof(contenido); //suma lo valores transformados
        desv_est=desv_est + pow(atof(contenido)-3.99994,2); //calculo varianza (se calculo previamente el promedio)
        y++;//contador para saber cuantos datos son

    }


    cout<<" Suma total de datos: "<<sumar<<endl;
    cout<<"Cantidad de elementos: "<<y<< " elementos"<<endl;
    cout<<"Media es: "<< sumar/y<<endl;
    cout<< "La desviacion estandar es: "<< pow((desv_est/y),0.5)<<endl;

    archivo.close();
}
