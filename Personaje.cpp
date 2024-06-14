//
// Created by Alumnos on 11/06/2024.
//

#include "Personaje.h"
Personaje::Personaje(float ataque, float defenza, float vida, std::string nombre)
{
    this -> ataque = ataque;
    this -> defenza = defenza;
    this -> vida = vida;
    this -> nombre = nombre;
}

float Personaje::getataque() const {
    return ataque;
}
void Personaje::setataque(float ataque){
    this -> ataque = ataque;
}
float Personaje::getdefenza() const {
    return defenza;
}
void Personaje::setdefenza(float defenza){
    this -> defenza = defenza;
}
float Personaje::getvida() const {
    return vida;
}
void Personaje::setvida(float vida){
    this -> vida = vida;
}
std::string Personaje::getnombre()const {
    return nombre;
}
void Personaje::setnombre(std::string nombre){
    this -> nombre = nombre;
}
Personaje::~Personaje(){

}