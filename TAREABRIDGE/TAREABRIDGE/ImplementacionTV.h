#pragma once
#include <iostream>
#include "Implementacion.h"
using namespace std;
// Implementaci�n de los m�todos de Dispositivo

class ImplementacionTV : public Implementacion {
public:
    void configurarCanal(int canal) override;
    void ajustarVolumen(int volumen) override;
};