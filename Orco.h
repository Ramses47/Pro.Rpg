//
// Created by Ramsés on 11/06/2024.
//

#ifndef PRACTICAS_ORCO_H
#define PRACTICAS_ORCO_H
#include "Enemigo.h"

class Orco : Enemigo{
public:
    Orco(float vidaa, float ataquee,float armaduraa,int curacionn);
    ~Orco();
    float getarmaduraa()const;
    void setarmaduraa(float armadura);
    int getcuracionn()const;
    void setcuracionn(int curacionn);

private:
    float armaduraa;
    int curacionn;
};


#endif //PRACTICAS_ORCO_H
