#pragma once
#include "Dispositivo.h"

// Clase concreta que representa la Radio
class Radio : public Dispositivo {
private:
    int volumen;
    Canal canalActual;

public:
    Radio(Implementacion* imp);
    void encender() override;
    void apagar() override;
    void setVolumen(int volumen) override;
    int getVolumen() override;
    void setCanal(Canal& canal) override;
    Canal getCanal() override;
};

