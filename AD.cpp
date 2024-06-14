//
// Created by Alumnos on 11/06/2024.
//

#include "AD.h"
AD::AD(float ataque, float defenza, float vida, std::string nombre,int VelicidadAtaque, int Criticos) : Personaje (ataque, defenza, vida, nombre){
    this -> VelicidadAtaque = VelicidadAtaque;
    this -> Criticos = Criticos;
}
int AD::getVelicidadAtaque() const {
    return VelicidadAtaque;
}
void AD::setVelicidadAtaque(int VelicidadAtaque){
    this -> VelicidadAtaque = VelicidadAtaque;
}
int AD::getCriticos() const{
    return Criticos;
}
void AD::setCriticos(int Criticos) {
    this -> Criticos = Criticos;
}
AD::~AD(){

}