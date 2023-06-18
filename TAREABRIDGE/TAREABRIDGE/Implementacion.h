#pragma once
class Implementacion
{
public:
    virtual void configurarCanal(int canal) = 0;
    virtual void ajustarVolumen(int volumen) = 0;
    virtual ~Implementacion() {}
};

