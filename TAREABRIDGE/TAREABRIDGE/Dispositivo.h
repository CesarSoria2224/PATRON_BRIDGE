#pragma once
#include <string>
#include "Implementacion.h"
using namespace std;
struct Canal
{
    int nro;
    string nombre;
};
class Dispositivo
{
protected:
    Implementacion* implementacion; // Referencia a la interfaz de implementación

public:
    Dispositivo(Implementacion* imp);
    virtual void encender() = 0;
    virtual void apagar() = 0;
    virtual void setVolumen(int volumen) = 0;
    virtual int getVolumen() = 0;
    virtual void setCanal( Canal& canal) = 0;
    virtual Canal getCanal() = 0;
    virtual ~Dispositivo();
};

