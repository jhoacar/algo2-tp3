#ifndef CRUZ_H
#define CRUZ_H

#include "Elemento.h"

class Cruz : public Elemento
{
	public:
		Cruz();
		Cruz(Casilla *casilla,char nombre,int cantidad,string ID);
		void mostrar();
		~Cruz();
	protected:
};

#endif
