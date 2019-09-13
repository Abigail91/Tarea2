//
// Created by abigail on 12/9/19.
//

#ifndef TAREA2_TARDE_H
#define TAREA2_TARDE_H


#include "../Saludo.h"

class Tarde : public Saludo{
public:
    std::string dameSaludo() {
        
        std::cout << "Buenas tardes";
    }

};



#endif //TAREA2_TARDE_H
