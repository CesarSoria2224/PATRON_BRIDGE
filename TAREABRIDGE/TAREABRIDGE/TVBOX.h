#pragma once
#include <string>
#include <list>
#include "Implementacion.h"

using namespace std;

struct Servicio {
    string nombre;
    list<std::string> peliculas;
};

// Clase que representa la TVBOX
class TVBOX : public Implementacion {
private:
    int volumen;
    Servicio canal;
    string pelicula;

public:
    TVBOX();
    void configurarCanal(int canal);
    void ajustarVolumen(int volumen);
};
