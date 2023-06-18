#pragma once
#include "Implementacion.h"
#include <iostream>
using namespace std;
// Implementación concreta de la interfaz de implementación para Radio
class ImplementacionRadio : public Implementacion {
public:
    void configurarCanal(int canal) override;
    void ajustarVolumen(int volumen) override;
};
