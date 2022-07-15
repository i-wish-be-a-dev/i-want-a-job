#ifndef STACK_H
#define STACK_H
#include "nodo.h"
#include <iostream>
template <class T>

class Stack
{

  Nodo<T> * fin;

public:

  Stack(){
     this->fin = nullptr;
    }



  void agregarNodo(T tDato){

   Nodo<T> * nuevo_nodo = new Nodo(tDato);
    nuevo_nodo->setDato(tDato);
    nuevo_nodo->setLink(fin);
    fin = nuevo_nodo;

  }


  T quitarNodo(){


      if (fin != nullptr){

          T dato = fin->getDato();

          fin = fin->getLink();

        return dato;

      }

  }



  void vaciarPila(){

      while (this->fin != nullptr){

          std::cout<<this->fin->getDato()<<std::endl;

          fin = fin->getLink();
      }



  }


};

#endif // STACK_H
