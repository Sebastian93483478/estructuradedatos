#pragma once
#include "Nodo.h"

class ListaEnlazada {
private:
	Nodo* cabeza;

public:
	ListaEnlazada();
	~ListaEnlazada();
	void insertar(int dato);                                                                                                                                    void quitar();
void mostrar() const;
};
