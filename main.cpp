#include <iostream>
#include <fstream>
#include <windows.h>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>

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
    ofstream aux;
    char contenido[100];
    //archivo.open("numeros.txt", ios::in);
    //aux.open("auxiliar.txt", ios::out);
    long double largo, sumar=0;
    int y,aux2;

    if (archivo.fail())
    {
        cout<< "Error al abrir el archivo"<<endl;
        exit(1);
    }

    while(!archivo.eof())
    {
        //getline(archivo, contenido);
        archivo>>contenido;
        //largo= contenido.lenght();
       //char *x =strdup(contenido.c_str());

        if( contenido[1]==',')
         {
          contenido[1]='.';
         }
       //cout<< contenido<<endl;
        sumar=sumar+ atof(contenido);
        y++;
       // cout<<y<<endl;
     // aux<<x<<endl;

    }
    cout<<" Suma total de datos: "<<sumar<<endl;
    cout<<"Cantidad de elementos: "<<y<< " elementos"<<endl;
    cout<<"Media es: "<< sumar/y<<endl;

    archivo.close();
}
