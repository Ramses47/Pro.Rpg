//
// Created by Ramsés on 11/06/2024.
//

#ifndef PRACTICAS_ENEMIGO_H
#define PRACTICAS_ENEMIGO_H
#include <iostream>
#include <string>

class Enemigo {
public:
    Enemigo(float vidaa, float ataquee);
    ~Enemigo();
    float getvidaa()const;
    void setvidaa(float vidaa);
    float getataquee()const;
    void setataquee(float ataquee);
private:
    float vidaa, ataquee;

};


#endif //PRACTICAS_ENEMIGO_H
