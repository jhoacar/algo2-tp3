#include "Vanessa.h"
#include <iostream>
using std::cout;
using std::endl;
Vanessa::Vanessa():Cazador(){
    
}
Vanessa::Vanessa(Casilla *casilla,char nombre,string ID):Cazador(casilla,nombre,ID)
{
}
void Vanessa::mostrar(){
    cout<<"Objeto: Vanessa"<<endl;
}
Vanessa::~Vanessa()
{
	
}
void Vanessa::defender(){

}

void Vanessa::atacar(Casilla *casilla){
    
}
void Vanessa::regenerar_energia() {
    this -> energia += 10;
}



/*void Vanessa::validacion_ataque(Ataque* ataque, int posicion_x_elegida, int posicion_y_elegida, string arma_elegida){

    bool energia_suficiente = ataque -> energia_suficiente(8, energia);
    bool tiene_arma = tiene_arma(arma_elegida);

    if(arma_elegida == NOMBRES_STRING[ESCOPETA]) {
        validacion_rango = ataque->validacion_rango_ataque(posicion_x_elegida, posicion_y_elegida, 2);
        bool tiene_suficientes_balas = tiene_balas(2);
    }
    else if(arma_elegida == NOMBRES_STRING[AGUA])
        validacion_rango = ataque -> validacion_rango_ataque(posicion_x_elegida, posicion_y_elegida, 1);

    else(arma_elegida == NOMBRES_STRING[ESTACA])
        validacion_rango = ataque -> validacion_rango_ataque_estaca(posicion_x_elegida, posicion_y_elegida, 1);


    if(arma_elegida == NOMBRES_STRING[ESCOPETA]){
        if(validacion_rango && energia_suficiente && tiene_arma && tiene_suficientes_balas)
            ataque -> validacion_ataque = true;
        else
            ataque -> validacion_ataque = false;
    }
    else{
        if(validacion_rango && energia_suficiente && tiene_arma)
            ataque -> validacion_ataque = true;
        else
            ataque -> validacion_ataque = false;
    }
}


void Vanessa::atacar(Tablero* tablero, int posicion_x_elegida, int posicion_y_elegida, string arma_elegida) {

    int posicion_x = casilla -> posicion.obtener_x();
    int posicion_y = casilla -> posicion.obtener_y();

    bool validacion_rango;

    Ataque* ataque = new Ataque_vanessa(tablero, posicion_x, posicion_y, fuerza);

    validacion_ataque(ataque, posicion_x_elegida, posicion_y_elegida, arma_elegida);

    if(ataque -> validacion_ataque){

        Coordenada posicion(posicion_x_elegida, posicion_y_elegida);
        Casilla* casilla = tablero -> obtener_casilla(posicion);
        Lista<Objeto*> lista_objetos = casilla.obtener_objetos();

        consumir_energia(6);

        if(arma_elegida == NOMBRES_STRING[ESCOPETA])
            bajar_cantidad_objeto(2, NOMBRES_STRING[BALAS]);
        else if(arma_elegida == NOMBRES_STRING[AGUA])
            bajar_cantidad_objeto(1, NOMBRES_STRING[AGUA]);

        ataque -> bajar_vida(lista_objetos, casilla);
    }
    delete ataque;
}*/