#include "ImplementacionTV.h"
#include "ImplementacionRadio.h"
#include "TV.h"
#include "Radio.h"
#include "TVBOX.h"

int main() {
    ImplementacionTV implementacionTV;
    ImplementacionRadio implementacionRadio;
    TV tv(&implementacionTV);
    Radio radio(&implementacionRadio);
    TVBOX tvbox;

    tv.encender();
    tv.setVolumen(75);
    Canal canalTV = { 5, "Canal 5" };
    tv.setCanal(canalTV);
    tv.apagar();

    radio.encender();
    radio.setVolumen(60);
    Canal canalRadio = { 10, "Canal 10" };
    radio.setCanal(canalRadio);
    radio.apagar();

    tvbox.configurarCanal(2);
    tvbox.ajustarVolumen(80);

    return 0;
}