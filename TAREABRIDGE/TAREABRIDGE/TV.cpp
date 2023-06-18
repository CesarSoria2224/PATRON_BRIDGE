#include "TV.h"
#include <vector>
#include <string>
TV::TV(Implementacion* imp) : Dispositivo(imp) {
    volumen = 50;  // Volumen inicial: 50
    canalActual.nro = 1;  // Canal inicial: 1
    canalActual.nombre = "Canal 1";
}

void TV::encender() {
    implementacion->configurarCanal(canalActual.nro); // Configurar el canal actual
}

void TV::apagar() {
    implementacion->configurarCanal(0); // Sin canal
}

void TV::setVolumen(int volumen) {
    this->volumen = volumen;
    implementacion->ajustarVolumen(volumen);
}

int TV::getVolumen() {
    return volumen;
}

void TV::setCanal( Canal& canal) {
    canalActual = canal;
    implementacion->configurarCanal(canal.nro);
}

Canal TV::getCanal() {
    return canalActual;
}