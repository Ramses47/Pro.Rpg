cmake_minimum_required(VERSION 3.24)
project(practicas)

set(CMAKE_CXX_STANDARD 17)

add_executable(practicas main.cpp Personaje.cpp Personaje.h AD.cpp AD.h AP.cpp AP.h
        Enemigo.cpp
        Enemigo.h
        Duende.cpp
        Duende.h
        Orco.cpp
        Orco.h)
