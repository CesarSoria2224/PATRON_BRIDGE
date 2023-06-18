#pragma once
#include <vector>
#include <string>
#include "Dispositivo.h"
using namespace std;

class TV : public Dispositivo {
private:
    int volumen;
    Canal canalActual;

public:
    TV(Implementacion* imp);
    void encender() override;
    void apagar() override;
    void setVolumen(int volumen) override;
    int getVolumen() override;
    void setCanal( Canal& canal) override;
    Canal getCanal() override;
};
