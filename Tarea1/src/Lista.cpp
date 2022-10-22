#include "Lista.hpp"
#include<iostream>

using namespace std;

/**
 * Descripcion breve
 * 
 * Descripcion larga
 */
Lista::Lista(){
    this->primero = nullptr;
}

/**
 * Descripcion breve
 * 
 * Descripcion larga
 * 
 * @param elemento
 */
Lista::Lista(int elemento){
this->primero = new Nodo(elemento);    
}

/**
 * Descripcion breve
 * 
 * Descripcion larga
 */
Lista::~Lista(){

}

/**
 * Descripcion breve
 * 
 * Descripcion larga
 * 
 * @return
 */
int Lista::get_tamanio(){
    
}
/**
 * Descripcion breve
 * 
 * Descripcion larga
 * 
 * @return
 */
int Lista::get_primero(){
    
}

/**
 * Descripcion breve
 * 
 * Descripcion larga
 * 
 * @param elemento
 */
void Lista::agregar_primero(int elemento){

}

/**
 * Descripcion breve
 * 
 * Descripcion larga
 * 
 * @param elemento
 */
void Lista::agregar_final(int elemento){
    if(primero == nullptr){
        primero = new Nodo(elemento);        
    }
    else{
        if(primero->get_siguiente() == nullptr){
            Nodo* nuevo_nodo = new Nodo(elemento);
        }
        else{
            Nodo* iter = primero;
            while(iter != nullptr){
                iter = iter->get_siguiente();
            }
            Nodo* nuevo_nodo = iter;
            nuevo_nodo = new Nodo(elemento);
        }
    }
}

/**
 * Descripcion breve
 * 
 * Descripcion larga
 * 
 * @param nuevo
 * @param anterior
 */
void Lista::agregar_tras(int nuevo, int anterior){

}

/**
 * Descripcion breve
 * 
 * Descripcion larga
 * 
 * @param elemento
 */
void Lista::borrar(int elemento){

}

/**
 * Descripcion breve
 * 
 * Descripcion larga
 */
void Lista::mostrar(){
    Nodo* iter = this-> primero;
    while(iter != nullptr){
        cout << iter->get_elemento() << ", ";
        iter = iter->get_siguiente();
    }
}
