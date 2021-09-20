/*
Ricardo Andres Caceres Villibord A01706972
Archivo con Sort y Busqueda

*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>


using namespace std;

void bubbleSort(int a[], int n){
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            if(a[j-1] > a[j]){
                int aux = a[j-1];
                a[j-1] = a[j];
                a[j] = aux;
            }
        }
    }
}

void laneAssignment(int a[], int aux[]){
    aux[3] = a[0];
    aux[4] = a[1];
    aux[2] = a[2];
    aux[5] = a[3];
    aux[1] = a[4];
    aux[6] = a[5];
    aux[0] = a[6];
    aux[7] = a[7];
}


int busquedaBinaria_aux(int tiempos[], int low, int high, int marca) {
	int mid;

	if (low <= high) {
		mid = (high + low) / 2;
		if (marca == tiempos[mid]) {
            cout<<"Encontrado en la posicion: #";
			return mid;
		} else if (marca < tiempos[mid]) {
			return busquedaBinaria_aux(tiempos, low, mid - 1, marca);
		} else if (marca > tiempos[mid]) {
			return busquedaBinaria_aux(tiempos, mid + 1, high, marca);
		}
	}
    cout<<"Ningun nadador presente tiene la marca"<<endl;
	return -1;
}

int busquedaBinaria(int tiempos[], int size, int marca) {
	return busquedaBinaria_aux(tiempos, 0, size - 1, marca);
}




/*
class Nombres{
    public:
        string mmnombres[8] = {"Jorge", "Irving", "Ricardo", "Adrian", " Manuel", "Carlos", "Camilo", "Ernesto"};

};


float tiempos[] = {26.11, 24.55, 24.89, 27.12, 23.13, 24.11, 25.21, 26.77};

*/