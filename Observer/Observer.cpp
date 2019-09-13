#include "Observer.h"
#include <iostream>


using namespace std;

int Observer::_numeroEstatico = 0;

//-----------------------------------------------------------------------------
// Constructor
//-----------------------------------------------------------------------------
Observer::Observer(Subject &subject) : _sujeto(subject) {
	_sujeto.adjuntar(this);
	cout << "Nuevo Observer \""	<< ++Observer::_numeroEstatico << "\"." << endl;
	_numero = Observer::_numeroEstatico;	// aumenta cada vez que se crea un nuevo observador
}

//-----------------------------------------------------------------------------
// Destructor
//-----------------------------------------------------------------------------
Observer::~Observer() {
	cout << "El Observer \""<< _numero << "\" se fue." << endl;
}

//-----------------------------------------------------------------------------
// Elimina al observador de la lista de observadores.
//-----------------------------------------------------------------------------
void Observer::removerDeLaLista() {
	_sujeto.despegar(this);
	cout << "Observer \"" << _numero << "\" eliminado de la lista." << endl;
}

//-----------------------------------------------------------------------------
// Recupera el nuevo mensaje del Sujeto.
//-----------------------------------------------------------------------------
void Observer::actualizar(const string &mensajeDelSujeto) {
	_mensajeDelSujeto = mensajeDelSujeto;
	printInfo();
}

//-----------------------------------------------------------------------------
// Muestra un mensaje para alertar que ha llegado un nuevo mensaje.
//-----------------------------------------------------------------------------
void Observer::printInfo() {
	cout	<< "Observer \"" << Observer::_numero << "\": Nuevo mensaje disponible --> " << _mensajeDelSujeto << endl;
}
