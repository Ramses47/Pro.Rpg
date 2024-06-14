//
// Created by Alumnos on 11/06/2024.
//

#include "AP.h"
AP::AP(float ataque, float defenza, float vida, std::string nombre,int mana, int sanacion): Personaje (ataque, defenza, vida, nombre){
    this -> mana = mana;
    this -> sanacion = sanacion;
}
int AP::getmana() const {
    return mana;
}
void AP::setmana(int mana){
    this -> mana = mana;
}
int AP::getsanacion() const{
    return sanacion;
}
void AP::setsanacion(int sanacion) {
    this -> sanacion = sanacion;
}
AP::~AP(){

}