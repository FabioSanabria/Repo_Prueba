#include "Cola.h"
#include<iostream>

using namespace std;

int main(){
   Cola cola1;

   cola1.agregar(2);
   cola1.agregar(3);
   cout << "cola1.get_primero() " << cola1.get_primero() << endl;
   cout << "cola1.get_tamanio() " << cola1.get_tamanio() << endl;

   Cola cola2(4);

   cola2.agregar(5);
   cola2.agregar(6);
   cout << "cola2.sacar() " << cola2.sacar() << endl;
   cout << "cola2.get_tamanio() " << cola2.get_tamanio() << endl;

   return 0;
}