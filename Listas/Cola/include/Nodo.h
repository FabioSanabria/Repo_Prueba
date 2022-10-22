#ifndef NODO_H
#define NODO_H

/**
 * Clase Nodo el cual posee un elemento int y un puntero a Nodo
 * 
 */
class Nodo {
   public:
      Nodo(int);
      virtual ~Nodo();
      void set_elemento(int);
      int get_elemento();
      void set_siguiente(Nodo*);
      Nodo* get_siguiente();

   private:
      int elemento; // Valor entero contenido en el Nodo
      Nodo* siguiente; // Puntero al siguiente Nodo

};

#endif
