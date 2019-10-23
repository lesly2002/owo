#include <iostream>
#include "alumno.h"
#include "seccion.h"

int main() {
    alumno_t a1("Pedro","Picapiedra",40);
    alumno_t a2("Homero","Sympson",20);
    alumno_t a3;
    alumno_t a4 = a2;

    //cout<<"Alumnos: "<<endl;
    //cout<<a1.get_apellido()<<", "<<a1.get_nombre()<<", "<<a1.get_edad()<<endl;
    //cout<<a2.get_apellido()<<", "<<a2.get_nombre()<<", "<<a2.get_edad()<<endl;
    //cout<<a3.get_apellido()<<", "<<a3.get_nombre()<<", "<<a3.get_edad()<<endl;
    //cout<<a4.get_apellido()<<", "<<a4.get_nombre()<<", "<<a4.get_edad()<<endl;

    seccion_t poo1_lab204(4);
    poo1_lab204.set_alumno(0,a1);
    poo1_lab204.set_alumno(1,a2);
    poo1_lab204.set_alumno(2,a3);
    poo1_lab204.set_alumno(3,a4);
    poo1_lab204.imprimir_lista();


    return 0;
}