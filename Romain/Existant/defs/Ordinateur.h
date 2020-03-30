#ifndef ORDINATEUR_H
#define ORDINATEUR_H

#include "../../Nouveau/defs/Librairie.h"

//#include "../defs/Stockage.h"
#include "Stockage.h"
#include "../defs/Reboot.h"

using namespace std;

class Ordinateur {
public:
    Ordinateur();
    virtual ~Ordinateur();
    void obtenirStatus();
    Stockage * getStockage();
    float getTemperatureProcessor();
    Reboot* getReboot();
private:
    Stockage* leStockage;
    Reboot* leReboot;
    float temperatureProcessor;
    void calculerStockage();
    void obtenirTemperature();
};

#endif /* ORDINATEUR_H */
