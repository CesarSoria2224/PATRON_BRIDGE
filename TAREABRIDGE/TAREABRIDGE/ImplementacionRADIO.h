#pragma once
#include "Implementacion.h"
#include <iostream>
using namespace std;
// Implementaci�n concreta de la interfaz de implementaci�n para Radio
class ImplementacionRadio : public Implementacion {
public:
    void configurarCanal(int canal) override;
    void ajustarVolumen(int volumen) override;
};
