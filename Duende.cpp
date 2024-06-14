//
// Created by Ramsés on 11/06/2024.
//

#include "Duende.h"
Duende::Duende(float vidaa, float ataquee, int letalidad, int criticoo) : Enemigo(vidaa, ataquee) {
    this -> letalidad = letalidad;
    this -> criticoo = criticoo;
}

int Duende::getletalidad() const {
    return letalidad;
}
void Duende::setletalidad(int letalidad) {
    this -> letalidad = letalidad;
}
float Duende::getcritico() const {
    return criticoo;
}
void Duende::setcritico(float criticoo) {
    this -> criticoo = criticoo;
}
Duende::~Duende() {

}