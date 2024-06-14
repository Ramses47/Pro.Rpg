#include <iostream>
#include <string>
//
// Created by Alumnos on 11/06/2024.
//

#ifndef PRACTICAS_PERSONAJE_H
#define PRACTICAS_PERSONAJE_H


class Personaje {
public:
    Personaje(float ataque, float defenza, float vida, std::string nombre);
    ~Personaje();

    float getataque()const;
    void setataque(float ataque);
    float getdefenza()const;
    void setdefenza(float defenza);
    float getvida()const;
    void setvida(float vida);
    std::string  getnombre()const;
    void setnombre(std::string nombre);
private:
    float ataque, defenza, vida;
    std::string nombre;
};


#endif //PRACTICAS_PERSONAJE_H
