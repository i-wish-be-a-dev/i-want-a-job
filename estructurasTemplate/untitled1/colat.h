#ifndef COLAT_H
#define COLAT_H
#include "nodo.h"
#include <iostream>
template <class T>
class ColaT
{
Nodo<T> * frente;
Nodo <T> * fondo;

public:
ColaT(){

    this->frente = nullptr;
    this->fondo = nullptr;

}

bool colaVacia(){

return (this->frente ==nullptr)? true:false;


}

void agregarNodo(T ndato){

Nodo<T> * aux = new Nodo<T>(ndato);

aux->setDato(ndato);

aux->setLink(nullptr);

if (this->colaVacia()){


    this->frente = aux;

}else {

    this->fondo->setLink(aux);
}
this->fondo = aux;

}


T obtenerNodo(){

    T tDat = frente->getDato();
    Nodo<T> * aux = frente;




    if (frente == fondo){
        frente = nullptr;
        fondo = nullptr;

    }else {
        frente = frente->getLink();

        //frente->setLink(frente->getLink());
    }
    delete aux;
    return tDat;
}




void vaciarCola(){

    while (frente!= NULL){


        std::cout<<this->frente->getDato()<<std::endl;

        this->frente= this->frente->getLink();
        //frente->setLink(frente->getLink());
    }


}




};

#endif // COLAT_H
