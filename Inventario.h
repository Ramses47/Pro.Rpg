//
// Created by Alumnos on 13/06/2024.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef PRACTICAS_INVENTARIO_H
#define PRACTICAS_INVENTARIO_H


class Inventario {
public:
Inventario();
void agregarItem(const std::string& item);
void eliminarItem(const std::string& item);
void usarItem(const std::string& item);
void mostrarItems() const;
~Inventario();
private:
    std::vector<std::string> items;

};


#endif //PRACTICAS_INVENTARIO_H
