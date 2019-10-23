//
// Created by utec on 23/10/19.
//

#ifndef OWO_PROFESOR_H
#define OWO_PROFESOR_H
#include "type.h"

class profesor_t {
    texto nombre;
    texto apellido;
    numerico edad;
public:
    profesor_t();
    profesor_t(texto nombre,texto apellido, numerico edad);
    profesor_t(profesor_t& profesor);
    texto get_nombre();
    texto get_apellido();
    numerico get_edad();
};


#endif //OWO_PROFESOR_H
