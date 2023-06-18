#include "Radio.h"


Radio::Radio(Implementacion* imp) : Dispositivo(imp) {
    volumen = 50;  // Volumen inicial: 50
    canalActual.nro = 1;  // Canal inicial: 1
    canalActual.nombre = "Canal 1";
}

void Radio::encender() {
    implementacion->configurarCanal(canalActual.nro); // Configurar el canal actual
}

void Radio::apagar() {
    implementacion->configurarCanal(0); // Sin canal
}

void Radio::setVolumen(int volumen) {
    this->volumen = volumen;
    implementacion->ajustarVolumen(volumen);
}

int Radio::getVolumen() {
    return volumen;
}

void Radio::setCanal(Canal& canal) {
    canalActual = canal;
    implementacion->configurarCanal(canal.nro);
}

Canal Radio::getCanal() {
    return canalActual;
}