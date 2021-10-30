/*
Ricardo Andres Caceres Villibord A01706972
Archivo con algortimos para implementar estructura lineal
y para implementar ordenamiento.

*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>


using namespace std;



template <class T> class List;

template <class T> 
class Link{
    private:
        Link(T);
        Link(T, Link<T>*);
        Link(const Link<T>&);

        T       value;
        Link<T> *next;

        friend class List<T>;
        //friend class Sorts<T>;
      
};


template <class T>
Link<T>::Link(T val) : value(val), next(0) {}

template <class T>
Link<T>::Link(T val, Link* nxt) : value(val), next(nxt) {}

template <class T>
Link<T>::Link(const Link<T> &source) : value(source.value), next(source.next) {}


template <class T>
class List{
    public:
        List();
        List(const List<T>&);

        void insertion(T);
        void insertFirst(T);
        int search(T) const;
        void update(int, T);
        T deleteFirst();
        T deleteAt(int);
        std::string toString() const;
        bool empty() const;

        void insertionSort(Link<T> *headref);
        void sortedInsert(Link<T> *newnode);
        Link<T> *head;
    private:
        //Link<T> *head;
        Link<T> *sorted;
        int size;

    
};



template <class T>
bool List<T>::empty() const {
	return (head == 0);
}

template <class T>
List<T>::List() : head(0), size(0) {}

template <class T>
void List<T>::insertionSort(Link<T> *headref){

    if(empty()){
        std::cout<<"Todavia no hay ningun tiempo en la lista"<<std::endl;
    } else{
        sorted = NULL;
        Link<T> *current = headref;

        while(current != NULL){
            Link<T> *next = current->next;
            sortedInsert(current);
            current = next;
        }
        head = sorted;
        std::cout<<"La lista de tiempos ha sido ordenada correctamente!"<<std::endl;
    }
}

template <class T>
void List<T>::sortedInsert(Link<T> *newnode){
    if (sorted == NULL || sorted->value >= newnode->value){
        newnode ->next = sorted;
        sorted = newnode;
    } else{
        Link<T> *current = sorted;
        while (current->next != NULL && current->next->value < newnode->value){
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}

template <class T>
void List<T>::insertFirst(T val){
	Link<T> *newLink;

	newLink = new Link<T>(val);
	if (newLink == 0) {
		std::cout<<"OutOfMemory";
	}
	newLink->next = head;
	head = newLink;
	size++;
}


template <class T>
void List<T>::insertion(T val){
    Link<T> *newLink, *p;
    

    newLink = new Link<T>(val);
    if (newLink == 0){
        std::cout<<"OutOfMemory";
    }
    

    if (empty()){
        insertFirst(val);
        return;
    }


    p = head;
    while (p->next != 0){
        p = p->next;
    }

    newLink->next = 0;
    p->next = newLink;
    size++;
}

template <class T>
int List<T>::search(T val) const{
    Link<T> *p;

    p = head;
    int index = 0;
    while (p != 0){
        if(p->value == val){
            //return 1;
            return index;
        }
        p = p->next;
        index++;
    }
    //return -1;
    std::cout<<"El tiempo ingresado no se encuentra en la lista";
    
} 


template <class T>
void List<T>::update(int index, T val){
    Link<T> *p;

    p = head;
    int pos = 0;
    while(pos != index){
        p = p->next;
        pos++;
    }
    p->value = val;

    std::cout<<"Lista Actualizada Correctamente!"<<std::endl;
}

template <class T>
T List<T>::deleteFirst(){
	T val;
	Link<T> *p;

	if (empty()) {
		std::cout<<"NoSuchElement";
	}

	p = head;

	head = p->next;
	val = p->value;

	delete p;
	size--;

	return val;
}


template <class T>
T List<T>::deleteAt(int index){
    Link<T> *p, *q;
    T val;
    int pos = 0;
    
    if (index < 0 || index >= size) {
        std::cout << "Invalid index";
    }
    
    if(index==0){
        return deleteFirst();
    }

    p = head;
    q = 0;
    while (pos != index) {
        q = p;
        p = p->next;
        pos++;
    }
    val = p->value;
    q->next = p->next;
    
    delete p;
    std::cout<<"Tiempo Eliminado Correctamente!"<<std::endl;
    size--;
    
}


template <class T>
std::string List<T>::toString() const {
	std::stringstream aux;
	Link<T> *p;

	p = head;
	aux << "[";
	while (p != 0) {
		aux << p->value;
		if (p->next != 0) {
			aux << ", ";
		}
		p = p->next;
	}
	aux << "]";
	return aux.str();
}




