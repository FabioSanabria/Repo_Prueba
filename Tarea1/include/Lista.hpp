#ifndef LISTA_H
#define LISTA_H

#include "Nodo.hpp"

/**
 * Descripcion breve
 * 
 * Descripcion larga
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
