#include "../defs/Instrument.h"

Instrument::Instrument() {
    status = new Status();
    mesure = new Mesure();
}

Instrument::Instrument(const Instrument& orig) {
}

Instrument::~Instrument() {
}

list<Mesure*> Instrument::getMesures() {
    return listedemesures;
}
;

void Instrument::clearMesures() {
    this->listedemesures.clear();
}

void Instrument::clearLastMesures() {
    this->listedemesures.pop_back();
}

int Instrument::obtenirStatus() {
    obtenirMode();
    obtenirTempInst();
    return 0;
}

Status * Instrument::getStatus() {
    return status;
}

void Instrument::addMesure(Mesure * auneMesure) {
    listedemesures.push_back(auneMesure);
}

void Instrument::setDateMesure(string adateHour) {
    listedemesures.back()->setDateHour(adateHour);
}

