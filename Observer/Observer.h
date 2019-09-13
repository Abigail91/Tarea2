#ifndef __OBSERVER_H__
#define	__OBSERVER_H__

#include "IObserver.h"
#include "Subject.h"

class Observer : public IObserver
{
public:
	Observer(Subject &subject);
	virtual ~Observer();

	void actualizar(const string &mensajeDelSujeto);
	void removerDeLaLista();
	void printInfo();

private:
	string		_mensajeDelSujeto;
	Subject&	_sujeto;
	static int	_numeroEstatico;
	int			_numero;
};

#endif