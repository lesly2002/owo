#include <iostream>
#include "type.h"
#include "alumno.h"
using namespace std;
alumno_t::alumno_t():
nombre(), apellido(),edad(0){
    cout <<__PRETTY_FUNCTION__<<endl;

}

alumno_t::alumno_t(texto n, texto a, numerico e):
    nombre(n), apellido(a), edad(e){cout <<__PRETTY_FUNCTION__<<endl;


}

alumno_t::alumno_t(alumno_t &alumno) {
    cout <<__PRETTY_FUNCTION__<<endl;
    nombre=alumno.nombre;
    apellido=alumno.apellido;
    edad=alumno.edad;

}

texto alumno_t::get_nombre() {
    return texto(nombre);
}

texto alumno_t::get_apellido() {
    return texto(apellido);
}

numerico alumno_t::get_edad() {
    return edad;
}
//
// Created by utec on 23/10/19.
//

