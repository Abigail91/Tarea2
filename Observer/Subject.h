#ifndef __SUJETO_H__
#define	__SUJETO_H__

#include <list>
#include "ISubject.h"

class Subject : public ISubject
{
public:
	Subject();
	virtual ~Subject();

	void adjuntar(IObserver *observer);
	void despegar(IObserver *observer);
	void notify();

	void crearMensaje(string mensaje = "Vacío");
	void cuantosObservadores();

private:
	list<IObserver *> _listObserver;
	string	_mensaje;
};

#endif