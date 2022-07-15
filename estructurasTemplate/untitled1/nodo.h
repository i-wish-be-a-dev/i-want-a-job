#ifndef NODO_H
#define NODO_H

template <class T>
class Nodo
{
    T dato;
    Nodo * link = nullptr;


public:
    Nodo();
    Nodo(T dato){

        this->dato = dato;
    }


    void setLink(Nodo * newLink){

        this->link = newLink;

    }

    Nodo * getLink(){
        return this->link;
    }




    const T& getDato() const{

        return this->dato;
    }

    void setDato(T& newDato){

        this->dato = newDato;
    }





};

#endif // NODO_H
