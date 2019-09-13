#ifndef __ISUBJECT_H__
#define	__ISUBJECT_H__

#include "IObserver.h"

class ISubject {
public:
	virtual ~ISubject() {};								
	virtual void adjuntar(IObserver *observer) = 0;
	virtual void despegar(IObserver *observer) = 0;
	virtual void notify() = 0;
};

#endif