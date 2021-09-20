/*
Created by: Ricardo Andres Caceres Villibord A01706972
Clase: TC1031.2
Integral A
*/

#include <iostream>
#include <ostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <fstream>

#include "archivo.h"


using namespace std;



int main(){

    int resp;
    int tiempos[8] = {26, 25, 28, 30, 23, 24, 27, 29};
    int marcas[2]= {23, 25};
    int n = 8;
    int aux[8];

    cout<<"Lista de tiempos de los nadadores: "<<endl;
        for(int i = 0; i<n; i++){
            cout<<tiempos[i]<<" ";
        }
    cout<<endl;

    while(true){

        cout<<"\nMENU"<<endl;
        cout<<"1. Ordenar los Tiempos de mas Rapido a mas Lento"<<endl;
        cout<<"2. Ver si algun Nadador tiene alguna Marca Tecnica"<<endl;
        cout<<"3. SALIR"<<endl;

        cin>>resp;
    
        if(resp == 1){
            /*int tiempos[8] = {26, 25, 28, 30, 23, 24, 27, 29};
            int n = 8;*/

            bubbleSort(tiempos, n);
            cout<<"Sorted array: "<<endl;
            for(int i = 0; i<n; i++){
                cout<<tiempos[i]<<" ";
            }
            cout<<endl;

            cout<<"Deseas armar el heat?  (1=Si / 0=No)"<<endl;
            cin>>resp;
            if(resp==1){
                laneAssignment(tiempos, aux);
                cout<<"Lane Assignment: "<<endl;  
                for(int i = 0; i<n; i++){
                    cout<<"Lane "<<i+1<<": "<<aux[i]<<"\n";
                }
                cout<<endl;
            } else if(resp == 0){
                continue;
            }
        } else if(resp == 2){
            bubbleSort(tiempos, n);
            
            cout<<"La Marca que deseas buscar es de hombre o mujer?  (Hombre=1 / Mujer=0)"<<endl;
            cin>>resp;
            if(resp == 1){
                cout<<busquedaBinaria(tiempos, n, marcas[0])<<endl;
            } else if(resp == 0){
                cout<<busquedaBinaria(tiempos, n, marcas[1])<<endl;
            }
        } else if(resp == 3){
            break;
        }
    }  
}