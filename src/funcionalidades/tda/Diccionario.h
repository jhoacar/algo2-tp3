#ifndef DICCIONARIO_H
#define DICCIONARIO_H

#include "AVL.h"

template < class Llave, class Dato>
class Diccionario{

    AVL<Llave,Dato> avl;
    unsigned long tamano;

    public:
        Diccionario();
        ~Diccionario();
        //Pre: Una llave a encontrar el dato, y una funcion de comparacion para el tipo de dato de la llave
        //Esta funcion debe devolver un numero entero que representa
        // 0 : son iguales
        // 1 : si el primer argumento es mayor al segundo
        // -1: si el primer argumento es menor al segundo 
        //Post: Si no encuentra la llave, crea un nuevo espacio y devuelve la referencia del dato donde se encontro
        Dato& buscar_dato(Llave llave, int (*comparar_llaves)(Llave A , Llave B)=comparacion);
        //Pre: Una llave a encontrar el dato, el tipo de dato de la llave debera tener sobrecargado los operadores ==,> y <
        //Post: Si no encuentra la llave, crea un nuevo espacio y devuelve la referencia del dato donde se encontro
        Dato& operator[](const Llave llave);
        //Pre: Una funcion para la comparacion de las llaves
        //Esta funcion debe devolver un numero entero que representa
        // 0 : son iguales
        // 1 : si el primer argumento es mayor al segundo
        // -1: si el primer argumento es menor al segundo 
        //Post: Devuelve una lista con las llaves del diccionario, ordenadas de menor a mayor
        Lista<Llave> obtener_llaves();
        //Pre: Una funcion para la comparacion de las llaves
        //Esta funcion debe devolver un numero entero que representa
        // 0 : son iguales
        // 1 : si el primer argumento es mayor al segundo
        // -1: si el primer argumento es menor al segundo 
        //Post: Devuelve una lista con las claves del diccionario
        Lista<Dato> obtener_valores();
        //Post: Devuelve el tamaño del diccionario
        unsigned long obtener_tamano();
};
template <class Llave, class Dato>
Diccionario<Llave,Dato>::Diccionario():avl(){
    tamano=0;
}
template <class Llave, class Dato>
Diccionario<Llave,Dato>::~Diccionario(){
}
template <class Llave, class Dato>
Dato& Diccionario<Llave,Dato>::buscar_dato(Llave llave, int (*comparar_llaves)(Llave A , Llave B)){
    bool se_agrego = false;
    Dato &dato = avl.buscar(llave,se_agrego,comparar_llaves);
    tamano+=(unsigned long)se_agrego;
    return dato;
}
template <class Llave, class Dato>
Dato& Diccionario<Llave,Dato>::operator[](const Llave llave){
    return buscar_dato(llave);
}
template <class Llave, class Dato>
Lista<Llave> Diccionario<Llave,Dato>::obtener_llaves(){
    Lista<Llave> llaves;
    avl.obtener_llaves(avl.obtener_arbol(),llaves);
    return llaves;
}
template <class Llave, class Dato>
Lista<Dato> Diccionario<Llave,Dato>::obtener_valores(){
    Lista<Dato> claves;
    avl.obtener_valores(avl.obtener_arbol(),claves);
    return claves;
}
template <class Llave, class Dato>
unsigned long Diccionario<Llave,Dato>::obtener_tamano(){
    return tamano;
}


#endif