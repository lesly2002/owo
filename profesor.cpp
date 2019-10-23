//
// Created by utec on 23/10/19.
//
#include <iostream>
#include "type.h"
#include "profesor.h"

profesor_t::profesor_t():
    nombre(), apellido(),edad(0){
        cout <<__PRETTY_FUNCTION__<<endl;
}

profesor_t::profesor_t(texto n, texto a, numerico e):
        nombre(n), apellido(a), edad(e)
{

}

profesor_t::profesor_t(profesor_t &profesor) {
nombre=profesor.nombre;
apellido=profesor.apellido;
edad=profesor.edad;
}

texto profesor_t::get_nombre() {
    return texto(nombre);
}

texto profesor_t::get_apellido() {
    return texto(apellido);
}

numerico profesor_t::get_edad() {
    return edad;
}
