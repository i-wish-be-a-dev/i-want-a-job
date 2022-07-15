#ifndef LISTASE_H
#define LISTASE_H
#include "nodo.h"
#include <iostream>
template <class T>

class ListaSE
{
    Nodo<T> * lista;


public:


    ListaSE(){

        this->lista = nullptr;
    }


    void agregarNodo(T tDato){

        Nodo <T> * nuevo_nodo = new Nodo<T> (tDato);

        nuevo_nodo->setDato(tDato);


     Nodo<T> * aux1 = lista;
     Nodo<T> * aux2;

while (aux1 != nullptr && aux1->getDato() < tDato){

    aux2 = aux1;
    aux1 = aux1->getLink();

}

if (aux1 == lista){

    lista = nuevo_nodo;

}else {


     aux2->setLink(nuevo_nodo);

}
nuevo_nodo->setLink(aux1);
    }



    bool busqueda(T tDato){

        Nodo <T>* aux = lista;


        while ((aux->getDato() != tDato) && (aux != nullptr)){

    aux= aux->getLink();
        }
        return (aux->getDato() == tDato)? true: false;


    }


    void mostrarLista(){

        Nodo <T> *aux = lista;

           while (aux != nullptr){

               std::cout<<aux->getDato()<<"-> ";


               aux = aux->getLink();
           }


    }

    void eliminarNodo(T tDato){

    if (this->lista != nullptr){

        Nodo<T> * aux_borrar = this->lista;
        Nodo <T> * anterior = nullptr;


        while (aux_borrar != nullptr && aux_borrar->getDato() != tDato){

            anterior = aux_borrar;
            aux_borrar= aux_borrar->getLink();

        }

if (aux_borrar == nullptr){

std::cout<<"EL elemento no existe: "<<std::endl;
}else  if (anterior == nullptr){



    this->lista = lista->getLink();

    delete aux_borrar;

}else {


anterior->setLink(aux_borrar->getLink());
delete aux_borrar;
}


    }
}







};

#endif // LISTASE_H
