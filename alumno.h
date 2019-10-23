//
// Created by utec on 23/10/19.
//

#ifndef OWO_ALUMNO_H
#define OWO_ALUMNO_H
#include "type.h"



class alumno_t {
    texto nombre;
    texto apellido;
    numerico edad;
public:
    alumno_t();
    alumno_t(texto nombre, texto apellido, numerico edad);
    alumno_t(alumno_t& alumno);
    texto get_nombre();
    texto get_apellido();
    numerico get_edad();

};


#endif //OWO_ALUMNO_H
