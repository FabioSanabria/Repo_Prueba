#include "Lista.hpp"
#include<iostream>

using namespace std;

int main(){
   Lista mi_lista;

   mi_lista.agregar_final(1);
   //mi_lista.agregar_primero(3);
   cout << "mi_lista.get_primero(): " << mi_lista.get_primero() << endl;
   //mi_lista.agregar_tras(4, 3);
   mi_lista.mostrar();


   Lista mi_lista2(2);

   mi_lista2.agregar_tras(2, 7);
   mi_lista2.agregar_final(1);
   mi_lista2.mostrar();
   cout << "mi_lista2.get_tamanio() " << mi_lista2.get_tamanio() << endl;
   mi_lista2.borrar(7);
   mi_lista2.mostrar();

   return 0;
}
