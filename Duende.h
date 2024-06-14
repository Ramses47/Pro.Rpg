//
// Created by Ramsés on 11/06/2024.
//

#ifndef PRACTICAS_DUENDE_H
#define PRACTICAS_DUENDE_H

#include "Enemigo.h"
class Duende : Enemigo{
public:
    Duende(float vidaa, float ataquee,int letalidad, int criticoo);
    ~Duende();
    int getletalidad()const;
    void setletalidad(int letalidad);
    float getcritico()const;
    void setcritico(float criticoo);
private:
    int letalidad;
    float criticoo;
};


#endif //PRACTICAS_DUENDE_H
