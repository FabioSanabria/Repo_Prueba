#include "Pila.h"
#include<iostream>

using namespace std;

int main(){
   Pila pila1;

   pila1.agregar(2);
   pila1.agregar(1);
   cout << "pila1.get_primero() " << pila1.get_primero() << endl;
   cout << "pila1.get_tamanio() " << pila1.get_tamanio() << endl;

   Pila pila2(5);

   pila2.agregar(4);
   pila2.agregar(3);
   cout << "pila2.sacar() " << pila2.sacar() << endl;
   cout << "pila2.get_tamanio() " << pila2.get_tamanio() << endl;

   return 0;
}