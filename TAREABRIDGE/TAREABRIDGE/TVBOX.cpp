#include "TVBOX.h"
#include <iostream>

TVBOX::TVBOX() {
    volumen = 50;

    // Configurar el canal por defecto
    canal.nombre = "canal 1";
    canal.peliculas = { "Pelicula 1", "Pelicula 2" };

    pelicula = "Película por defecto";
}

void TVBOX::configurarCanal(int canal) {
    std::cout << "Configurando canal de TVBOX: " << canal << std::endl;
}

void TVBOX::ajustarVolumen(int volumen) {
    std::cout << "Ajustando volumen de TVBOX: " << volumen << std::endl;
}