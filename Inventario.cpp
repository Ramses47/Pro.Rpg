//
// Created by Alumnos on 13/06/2024.
//

#include "Inventario.h"
Inventario::Inventario() {

}
void Inventario::agregarItem(const std::string& item) {
    items.push_back(item);
    std::cout << "Item " << item << " agregado al inventario" << std::endl;
}

void Inventario::eliminarItem(const std::string& item) {
    auto it = std::find(items.begin(), items.end(), item);
    if (it != items.end()) {
        items.erase(it);
        std::cout << "Item " << item << " eliminado" << std::endl;
    } else {
        std::cout << "Item " << item << " no encontrado" << std::endl;
    }
}

void Inventario::usarItem(const std::string& item) {
    auto it = std::find(items.begin(), items.end(), item);
    if (it != items.end()) {
        std::cout << "Se utilizó " << item << std::endl;
    } else {
        std::cout << "Item " << item << " no encontrado" << std::endl;
    }
}

void Inventario::mostrarItems() const {
    std::cout << "Items en el inventario:" << std::endl;
    for (const auto& item : items) {
        std::cout << "- " << item << std::endl;
    }
}

Inventario::~Inventario() {

}