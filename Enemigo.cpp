//
// Created by Ramsés on 11/06/2024.
//

#include "Enemigo.h"
Enemigo::Enemigo(float vidaa, float ataquee) {
    this-> vidaa = vidaa;
    this-> ataquee = ataquee;
}
float Enemigo::getvidaa() const {
    return vidaa;
}
void Enemigo::setvidaa(float vidaa) {
    this-> vidaa = vidaa;
}
float Enemigo::getataquee() const {
    return ataquee;
}
void Enemigo::setataquee(float ataquee) {
    this-> ataquee = ataquee;
}
Enemigo::~Enemigo(){

}