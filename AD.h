//
// Created by Alumnos on 11/06/2024.
//

#ifndef PRACTICAS_AD_H
#define PRACTICAS_AD_H
#include <iostream>
#include <string>
#include "Personaje.h"
#include "Inventario.h"

class AD : public Personaje,public Inventario{
public:
    AD(float ataque, float defenza, float vida, std::string nombre,int VelicidadAtaque, int Criticos);
    ~AD();
int getVelicidadAtaque()const;
void setVelicidadAtaque(int VelicidadAtaque);
int getCriticos()const;
void setCriticos(int Criticos);

private:
    int VelicidadAtaque, Criticos;

};


#endif //PRACTICAS_AD_H
