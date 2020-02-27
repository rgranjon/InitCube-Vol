#ifndef ORDINATEUR_H
#define ORDINATEUR_H

#include "../defs/Stockage.h"
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


protected:

private:
    Stockage* leStockage;
    Reboot* leReboot;
    float temperatureProcessor;
    void calculerStockage();
    void obtenirTemperature();
};

#endif /* ORDINATEUR_H */
