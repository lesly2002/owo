//
// Created by utec on 23/10/19.
//

#ifndef OWO_SECCION_H
#define OWO_SECCION_H
#include "type.h"
#include "alumno.h"

class seccion_t {
    alumno_t* lista_alumnos;
    size_t cantidad;
public:
    seccion_t(size_t n);
    seccion_t(seccion_t& seccion);
    void set_alumno(size_t indice,const alumno_t& alumno);
    void imprimir_lista();
    ~seccion_t();


};


#endif //OWO_SECCION_H
