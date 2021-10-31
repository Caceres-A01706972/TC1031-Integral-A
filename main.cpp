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

#include "algorithms.h"
#include "tiemposBase.h"


using namespace std;

int main(){

    List<int> h1;
    BST<int> edades;

    int resp;

    while(true){

        cout<<"\nMENU"<<endl;
        cout<<"1. Ordenar los Tiempos de mas Rapido a mas Lento"<<endl;
        cout<<"2. Ver si algun Nadador tiene alguna Marca Tecnica"<<endl;
        cout<<"3. Agregar tiempos a la lista"<<endl;
        cout<<"4. Mostrar mi Lista"<<endl;
        cout<<"5. Actualizar o Borrar uno de los tiempos"<<endl;
        cout<<"6. Agregar un Nadador"<<endl;
        cout<<"7. Checar si hay algun Nadador de cierta edad"<<endl;
        cout<<"8. Imprimir todas las edades de los Nadadores"<<endl;
        cout<<"9. SALIR"<<endl;
        cin>>resp;
    
        if(resp == 1){
            
            h1.insertionSort(h1.head);

        } else if(resp == 2){

            int gender;
            float tiempoBase;
            std::cout<<"Introduce la distancia de la prueba de la que quieres buscar un tiempo base (50, 100, 200)"<<std::endl;
            std::cin>>resp;
            std::cout<<"De hombre o mujer? (1=hombre/0=mujer)"<<std::endl;
            std::cin>>gender;
            if (resp==50){
              tiempoBase = _short_cincuentaLibre[gender]; 
            } else if(resp==100){
                tiempoBase = _short_cienLibre[gender];
            } else if(resp==200){
                tiempoBase = _short_dosLibre[gender];
            }
            if(h1.search(tiempoBase) == 1){
                std::cout<<"Hay un nadador con tiempo base!"<<std::endl;
            } else if(h1.search(tiempoBase) == -1){
                std::cout<<"No hay ningun nadador con tiempo base :("<<std::endl;
            }

        } else if(resp == 3){

            bool continua = true;
            while(continua){
                std::cout<<"Ingresa el tiempo que deseas agregar: (whole numbers)"<<std::endl;
                std::cin>>resp;
                h1.insertion(resp);
                std::cout<<"Tu lista es la siguiente por el momento: "<<std::endl;
                std::cout<<h1.toString()<<std::endl;
                std::cout<<"Deseas continuar agregando tiempos a la lista? (1=Si/0=No)"<<std::endl;
                std::cin>>resp;
                if (resp==0){
                    continua = false;
                }
            }

        } else if(resp == 4){

            std::cout<<"Mostrando tu lista"<<std::endl;
            std::cout<<h1.toString()<<std::endl;

        } else if(resp == 5){

            std::cout<<"Deseas borrar o actualizar algun tiempo? (1=actualizar/0=borrar)"<<std::endl;
            std::cin>>resp;
            if(resp == 1){
                std::cout<<"Que valor deseas reemplazar?"<<std::endl;
                int oldVal;
                std::cin>>oldVal;
                std::cout<<"Cual es el nuevo valor?"<<std::endl;
                int newVal;
                std::cin>>newVal;
                h1.update(h1.search(oldVal), newVal);
            } else if(resp == 0){
                std::cout<<"Que valor deseas borrar?"<<std::endl;
                int oldVal;
                std::cin>>oldVal;
                h1.deleteAt(h1.search(oldVal));

            }
        } else if(resp == 6){
            std::cout<<"Ingresa la edad del nadador: "<<std::endl;
            std::cin>>resp;
            edades.add(resp);

        } else if(resp == 7){
            std::cout<<"Ingresa la edad que quieres buscar: "<<std::endl;
            std::cin>>resp;
            edades.find(resp);

        } else if(resp == 8){
            std::cout<<"Imprimiendo todas las edades de los Nadadores: "<<std::endl;
            std::cout<<edades.inorder()<<std::endl;

        } else if(resp == 9){
            break;
        }
    }  
}