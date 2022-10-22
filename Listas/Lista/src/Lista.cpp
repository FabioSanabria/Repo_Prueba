#include "Lista.h"
#include<iostream>

using namespace std;

/**
 * Constructor por omision, el primer elemento es nulo
 */
Lista::Lista(){
    this->primero = nullptr;
}

/**
 * Constructor por parametro, se da el valor al primer elemento y un puntero nulo
 * 
 * @param elemento
 */
Lista::Lista(int elemento){
    primero = new Nodo(elemento);
}

/**
 * Destructor de lista
 */
Lista::~Lista(){
    Nodo* iter = primero;
    Nodo* borrado;
    while(iter != nullptr) {
        borrado = iter;
        iter = iter->get_siguiente();
        delete borrado;
    }
    cout << "Lista destruida" << endl;
}

/**
 * Consigue y devuelve el tamanio de la lista
 * 
 * @return int tamanio que es igual a la lista 
 */
int Lista::get_tamanio(){
    Nodo* iter = primero;
    int tamanio = 0;
    while(iter != nullptr) {
        tamanio++;
        iter = iter->get_siguiente();
    }

    return tamanio;
}

/**
 * Devuelve el primer elemento
 * 
 * @return int elemento de la variable primeo
 */
int Lista::get_primero(){
    return primero->get_elemento();
}

/**
 * Se da un valor al primer elemento de la lista
 * 
 * @param elemento
 */
void Lista::agregar_primero(int elemento){
    
    if(primero == nullptr){
        primero = new Nodo(elemento);        
    } 
    else{
        if(primero->get_siguiente() == nullptr){
            Nodo* nodo = new Nodo(primero->get_elemento());
            primero->set_siguiente(nodo);
            primero->set_elemento(elemento);
        }
        else{
            Nodo* nuevo_nodo = new Nodo(primero->get_elemento());
            nuevo_nodo->set_siguiente(primero->get_siguiente());
            primero->set_siguiente(nuevo_nodo);
            primero->set_elemento(elemento);
        }
    }    

}

/**
 * Se aniade elemento como contenido de un "nuevo" elemento al final de la lista
 * 
 * @param elemento
 */
void Lista::agregar_final(int elemento){
    if(primero == nullptr){
        primero = new Nodo(elemento);        
    }
    else{
        if(primero->get_siguiente() == nullptr){
            Nodo* nodo = new Nodo(elemento);
            primero->set_siguiente(nodo);
        }
        else{
            Nodo* iter = primero; // Apunta a primero
            while(iter->get_siguiente() != nullptr){
                iter = iter->get_siguiente();
            }
            Nodo* nuevo_nodo = new Nodo(elemento);
            iter->set_siguiente(nuevo_nodo);
        }
    }

}

/**
 * Se agrega un Nodo con contenido "nuevo" adelante de el Nodo con contenido "anterior" y se remplazan los punteros adecuadamente
 * 

 * @param nuevo 
 * @param anterior
 */
void Lista::agregar_tras(int nuevo, int anterior){
    if(primero == nullptr){
        cout << "La lista esta vacia." << endl;  
    }
    else{
        if(primero->get_siguiente() == nullptr && primero->get_elemento() == anterior){
            Nodo* nodo = new Nodo(nuevo);
            primero->set_siguiente(nodo);
        }
        else{
            Nodo* iter = primero; // Apunta a primero
            while(iter->get_siguiente() != nullptr && iter->get_elemento() != anterior){
                iter = iter->get_siguiente();
            }
            if(iter->get_siguiente() == nullptr && iter->get_elemento() == anterior) { //Si esta al final de la lista
                Nodo* nodo = new Nodo(nuevo);
                iter->set_siguiente(nodo);

            } else if(!(iter->get_siguiente() == nullptr) && iter->get_elemento() == anterior){ // No esta al final de la lista
                Nodo* nodo = new Nodo(nuevo);
                nodo->set_siguiente(iter->get_siguiente());
                iter->set_siguiente(nodo);
            } else {
                cout << "No se encontro un nodo con elemento *anterior*." << endl;
            }
        }
    }

    
    
}

/**
 * Se borran el Nodo con contenido "elemento" y se remplazan los punteros adecuadamente
 * 
 * @param elemento
 */
void Lista::borrar(int elemento){

    Nodo* iter = primero;
    Nodo* anterior_iter = nullptr;
    Nodo* final = nullptr;

    for (int i = 0; i < this->get_tamanio() ; i++)
    {
        iter = iter->get_siguiente();
    }

    final = iter;
    iter = primero;

    for (int i = 0; i <= this->get_tamanio(); i++)
    {
        if(iter->get_elemento() == elemento){

            if(iter == primero){
                primero = primero->get_siguiente();
                delete iter;


            } else if(iter == final){
                anterior_iter->set_siguiente(nullptr);
                delete iter;


            } else {
                anterior_iter->set_siguiente(iter->get_siguiente());
                delete iter;
            }
        break;
        }

        anterior_iter = iter;
        iter = iter->get_siguiente();

    }
            

            
}

/**
 * Se imprime la lista
 * 
 */
void Lista::mostrar(){
    Nodo* iter = this->primero;
    cout << "Lista = ";
    while(iter != nullptr){
        if(iter->get_siguiente() == nullptr) {
            cout << iter->get_elemento();

        } else {
            cout << iter->get_elemento() << ", ";

        }
        iter = iter->get_siguiente();
    }
    cout << "." << endl;

}
