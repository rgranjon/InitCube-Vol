#ifndef REBOOT_H
#define REBOOT_H

#include "../../Nouveau/defs/Librairie.h"

class Reboot {
public:
    Reboot();
    Reboot(int anbreReboot, string adateHeure);
    Reboot(const Reboot& orig);
    virtual ~Reboot();
    int getNumber();
    string getDateHour();
    void setDateHour(string adateHour);
    void setNumber(int anumber);
    void systemeReboot();
private:
    string dateHour;
    int number;
};

#endif /* REBOOT_H */
