#include "Subject.h"
#include <iostream>


using namespace std;

// Constructor
Subject::Subject() {
}

// Destructor
Subject::~Subject() {
	cout << "El sujeto se fue..." << endl;
}

// Crea un nuevo mensaje y notifica a todos los observadores.
void Subject::crearMensaje(string mensaje) {
	_mensaje	= mensaje;
	cout << "Mensaje del sujeto: " << mensaje << endl;
	notify();
}

// Muestra cuántos observadores hay en la lista.
void Subject::cuantosObservadores() {
	cout 	<< "Existen " << _listObserver.size() << " observadores en la lista." << endl;
}

// adjuntar un nuevo observador en la lista.
void Subject::adjuntar(IObserver *observer) {
	_listObserver.push_back(observer);
}

// despegar un observador de la lista.
void Subject::despegar(IObserver *observer) {
	_listObserver.remove(observer);
}

//Notifica a todos los observadores que ha llegado un nuevo mensaje.
void Subject::notify() {
	list<IObserver *>::iterator iterator = _listObserver.begin();

	cuantosObservadores();
	while (iterator != _listObserver.end()) {
		(*iterator)->actualizar(_mensaje);
		++iterator;
	}
}