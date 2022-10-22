#ifndef Pila_H
#define Pila_H

#include <iostream>
#include "Nodo.h"

/**
 * Clase Pila, se usa una copia de la clase Lista con los nuevos metodos necesarios
 * para implementar la estructura de datos en forma pila
 * 
 */
class Pila {
   public:
      Pila();
      Pila(int);
      virtual ~Pila();
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
      Nodo* primero; // Puntero al primer Nodo de la Pila
};

#endif
