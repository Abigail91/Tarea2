#ifndef __IOBSERVER_H__
#define	__IOBSERVER_H__

#include <string>

using namespace std;

class IObserver {
public:

	virtual ~IObserver() {};
	virtual void actualizar(const string &mensajeDelSujeto) = 0;	// VP
};

#endif