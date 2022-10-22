#ifndef COLA_H
#define COLA_H

#include <iostream>
#include "Nodo.h"

/**
 * Clase Cola, se usa una copia de la clase Lista con los nuevos metodos necesarios
 * para implementar la estructura de datos en forma cola
 * 
 */
class Cola {
   public:
      Cola();
      Cola(int);
      virtual ~Cola();
      void agregar(int);
      int sacar();
      int get_tamanio();
      int get_primero();
      void agregar_primero(int);
      void agregar_final(int);
      void agregar_tras(int, int);
      void borrar(int);
      void mostrar();

   private:
      Nodo* primero; // Puntero al primer Nodo de la Cola
};

#endif
