#include "../defs/Mesure.h"

Mesure::Mesure() {
    unit = "Celsius";
}

Mesure::~Mesure() {
}

Mesure::Mesure(float valeur) {
    value = valeur;
}

void Mesure::setDateHour(string dateHour) {
    this->dateHour = dateHour;
}

string Mesure::getUnite() {
    return unit;
}

string Mesure::getDateHour() {
    return dateHour;
}

float Mesure::getMesure() {
    return value;
}

