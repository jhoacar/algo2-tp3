//
// Created by franco on 7/7/2021.
//

#ifndef FUNCIONALIDADES_ATAQUE_H
#define FUNCIONALIDADES_ATAQUE_H

#include "../objetos/seres/ser"
#include "../mapa/Tablero.h"
#include "../funcionalidades/Datos.h"
#include "../objetos/Objeto.h"
#include "../funcionalidades/tda/Lista.h"
class Ataque {

protected:

    Tablero* tablero;
    int coordenada_x_actual;
    int coordenada_y_actual;
    int energia_actual;
    int valor_ataque;
    bool validacion_ataque;

public:

    Ataque();

    Ataque(Tablero* tablero, int coordenada_x, int coordenada_y, int fuerza_actual);

    bool energia_suficiente(int minimo);

    bool validacion_rango_ataque(int coord_x, int coord_y, int max_rango) = 0;
    
    virtual void bajar_vida(Lista<Objeto*> lista_objetos, Casilla* casilla);

    int obtener_ataque();

    bool validacion_rango_ataque_estaca(int coord_x, int coord_y, int max_rango);


};


#endif //FUNCIONALIDADES_ATAQUE_H