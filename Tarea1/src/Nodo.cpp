#include "Nodo.hpp"
#include<iostream>

using namespace std;

/**
 * Constructor con parametros
 * 
 * Encargado de crear el primer nodo con un valor y un puntero al siguiente nodo
 */
Nodo::Nodo(int elemento){
    this->elemento = elemento;
    this->siguiente = nullptr;
}

/**
 * Destructor
 * 
 * Libera el espacio que acaparan los punteros
 */
Nodo::~Nodo(){
    // La clase Lista es la que se debe encargar de llamar al destructor de cada Nodo
    cout << "Nodo " << this->elemento << " destruido" <<endl;
}

/**
 * Funcion set_elemento
 * 
 * Se obtiene un elemento nuevo y se cambia el anterior =
 * 
 * @param elemento
 */
void Nodo::set_elemento(int elemento){
    this->elemento = elemento;
}

/**
 * Funcion get_elemento
 * 
 * Se retorna el elemento que contiene el nodo
 * 
 * @return elemento 
 */
int Nodo::get_elemento(){
    return this->elemento;
}

/**
 * Funcion set_siguiente
 * 
 * Cambiar la direccion del puntero siguiente
 * 
 * @param siguiente: Direccion que se pasa para cambiar el siguiente
 */
void Nodo::set_siguiente(Nodo* siguiente){
    this->siguiente = siguiente;
}

/**
 * Funcion get siguiente
 * 
 * Obtener la direccion del siguiente nodo.
 * 
 * @return siguiente: La direccion que apunta al siguiente nodo
 */
Nodo* Nodo::get_siguiente(){
    return siguiente;
}
