//
// Created by utec on 23/10/19.
//

#include "seccion.h"
#include <iostream>
seccion_t::seccion_t(size_t n):cantidad(n) {
    lista_alumnos = new alumno_t[cantidad];


}

seccion_t::seccion_t(seccion_t &seccion) {
    cantidad=seccion.cantidad;
    lista_alumnos=new alumno_t[cantidad];
    for(int i=0; i<cantidad;i++){
        lista_alumnos[i]=seccion.lista_alumnos[i];
    }

}

void seccion_t::set_alumno(size_t indice, const alumno_t& alumno) {
        lista_alumnos[indice]=alumno;
}

void seccion_t::imprimir_lista() {
    for(int i=0; i < cantidad ;++i){
               cout<< lista_alumnos[i].get_apellido()<<", "
                   << lista_alumnos[i].get_nombre()<<", "
                   << lista_alumnos[i].get_edad()<<endl;
    }

}

seccion_t::~seccion_t() {
delete[] lista_alumnos;
}
