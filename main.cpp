#include "arreglo.h"
#include<iostream>

using namespace std;
int main()
{
    Arreglo<string>arreglo;

    arreglo.insertar_final("5_SEPTIEMBRE");
    arreglo.insertar_final("6_OCTUBRE");
    arreglo.insertar_final("7_NOVIENBRE");
    arreglo.insertar_final("8_DIECIEMBRE");
    arreglo.insertar_inicio("4_AGOSTO");
    arreglo.insertar_inicio("3_JULIO");
    arreglo.insertar_inicio("2_JUNIO");
    arreglo.insertar_inicio("1_MAYO");
    arreglo.insertar("citlalli",2);

     for(size_t i=0; i<arreglo.size(); i++)
     {
         cout<< arreglo[i]<<" ";
         cout<<endl;

     }
     cout<<endl;
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    for(size_t i=0; i<arreglo.size(); i++)
     {
         cout<< arreglo[i]<<" ";
         cout<<endl;

     }
}
