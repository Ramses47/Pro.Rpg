//
// Created by Ramsés on 11/06/2024.
//

#include "Orco.h"
Orco::Orco(float vidaa, float ataquee, float armaduraa, int curacionn) : Enemigo(vidaa, ataquee) {
    this -> armaduraa = armaduraa;
    this -> curacionn = curacionn;
}
float Orco::getarmaduraa() const {
    return armaduraa;
}
void Orco::setarmaduraa(float armadura) {
    this -> armaduraa = armadura;
}
int Orco::getcuracionn() const {
    return curacionn;
}
void Orco::setcuracionn(int curacionn) {
    this ->curacionn = curacionn;
}