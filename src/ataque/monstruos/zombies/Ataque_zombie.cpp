#include "Ataque_zombie.h"

Ataque_zombie::Ataque_zombie(Zombie *personaje):Ataque(personaje){

}

void Ataque_zombie::consumir_energia(){
    personaje->asignar_energia(personaje->obtener_energia()-GASTO_ENERGIA[ZOMBIE]);
}


bool Ataque_zombie::puede_atacar(){
    return personaje->obtener_energia()>=GASTO_ENERGIA[ZOMBIE];
}

void Ataque_zombie::atacar(Coordenada posicion, Tablero *tablero, char arma){

    atacar_casilla(tablero->obtener_casilla(posicion));

    consumir_energia();
}
bool Ataque_zombie::esta_en_rango_ataque(Coordenada posicion,char arma){
    Coordenada centro = personaje->obtener_posicion();
    if(centro == POSICION_INVALIDA)
        return false;
    else
        return obtener_cruz(centro,1).existe(posicion);
}

bool Ataque_zombie::se_puede_atacar(Coordenada posicion, Tablero *tablero, char arma){
    return  puede_atacar() &&
            esta_en_rango_ataque(posicion) &&
            tiene_humano(tablero->obtener_casilla(posicion));    
}

void Ataque_zombie::atacar_casilla(Casilla *casilla_ataque){

    Humano *humano =  (Humano*)casilla_ataque->obtener_objetos().filtrar_datos(0,es_tipo_humano)[0];

    humano->asignar_nombre(NOMBRES_CHAR[ZOMBIE]);
}