#ifndef LISTA_H244
#define LISTA_H244

#include <iostream>
#include "Nodo.h"

/**
 * Clase de lista, posee un puntero a un primer Nodo y metodos para agregar y borrar 
 * 
 */
class Lista {
   public:
      Lista();
      Lista(int);
      virtual ~Lista();
      int get_tamanio();
      int get_primero();
      void agregar_primero(int);
      void agregar_final(int);
      void agregar_tras(int, int);
      void borrar(int);
      void mostrar();

   private:
      Nodo* primero; // Puntero al primer Nodo de la Lista
};

#endif
