#ifndef MESURE_H
#define MESURE_H

#include "../../Nouveau/defs/Librairie.h"

class Mesure {
public:
    Mesure();
    Mesure(float valeur);
    virtual ~Mesure();
    void setDateHour(string dateHour);
    string getUnite();
    float getMesure();
    string getDateHour();
private:
    float value;
    string dateHour;
    string unit;

};

#endif /* MESURE_H */

