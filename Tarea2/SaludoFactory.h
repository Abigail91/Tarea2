//
// Created by abigail on 12/9/19.
//

#ifndef TAREA2_SALUDOFACTORY_H
#define TAREA2_SALUDOFACTORY_H


#include <string>
#include "Manana.h"
#include "cmake-build-debug/Tarde.h"

class SaludoFactory {
public: static std::string  crearSaludo(int tipo){
    if(tipo == 0){
        Manana m;
        m.dameSaludo();
    }else{
        Tarde t;
        t.dameSaludo();
    }
}

};


#endif //TAREA2_SALUDOFACTORY_H
