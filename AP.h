//
// Created by Alumnos on 11/06/2024.
//

#ifndef PRACTICAS_AP_H
#define PRACTICAS_AP_H
#include <iostream>
#include <string>
#include "Personaje.h"
#include "Inventario.h"

class AP : Personaje, public Inventario{
public:
    AP(float ataque, float defenza, float vida, std::string nombre,int mana, int sanacion);
    ~AP();
    int getmana() const;
    void setmana(int mana);
    int getsanacion() const;
    void setsanacion(int sanacion);

private:
    int mana, sanacion;

};


#endif //PRACTICAS_AP_H
