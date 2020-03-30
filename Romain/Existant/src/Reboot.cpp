#include "../defs/Reboot.h"

Reboot::Reboot() {
    dateHour = "0000/00/00 00:00:00";
    number = 0;
}

Reboot::Reboot(int anbreReboot, string adateHeure) {
    dateHour = adateHeure;
    number = anbreReboot;
}

Reboot::~Reboot() {

}

string Reboot::getDateHour() {
    return this->dateHour;
}

void Reboot::setDateHour(string adateHour) {
    this->dateHour = adateHour;
}

int Reboot::getNumber() {
    return this->number;
}

void Reboot::setNumber(int anumber) {
    this->number = anumber;
}

void Reboot::systemeReboot() {
    system("sudo reboot");
}