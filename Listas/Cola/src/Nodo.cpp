#include "Nodo.h"
#include<iostream>

using namespace std;

/**
 * Constructor por parametro de la clase Nodo
 */
Nodo::Nodo(int elemento){
    this->elemento = elemento;
    this->siguiente = nullptr;
}

/**
 * Destructor de la clase Nodo
 */
Nodo::~Nodo(){
    // La clase Lista es la que se debe encargar de llamar al destructor de cada Nodo
    cout << "Nodo " << this->elemento << " destruido" << endl;
}

/**
 * Se modifica el elemento del Nodo 
 * 
 * @param elemento
 */
void Nodo::set_elemento(int elemento){
    this->elemento = elemento;
}

/**
 * Se devuelve el elemento contenido en el Nodo
 * 
 * @return int con el contenido del Nodo
 */
int Nodo::get_elemento(){
    return this->elemento;
}

/**
 * Se modifica el puntero siguiente
 * 
 * @param siguiente es un puntero al Nodo siguiente
 */
void Nodo::set_siguiente(Nodo* siguiente){
    this->siguiente = siguiente;
}

/**
 * Se devuelve un puntero al Nodo siguiente
 * 
 * @return puntero del Nodo siguiente
 */
Nodo* Nodo::get_siguiente(){
    return this->siguiente;
}
