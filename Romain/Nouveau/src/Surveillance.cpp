#include "../defs/Surveillance.h"

Surveillance::Surveillance() {
}

Surveillance::Surveillance(const Surveillance& orig) {
}

Surveillance::~Surveillance() {
}

thread Surveillance::tSurveillerConstantes() {
    return thread([this] {
        surveillerConstantes();
    });
}

void Surveillance::surveillerConstantes() { // AJOUTER POUR MAGNETO ET POUR DEMANDE UTILISATEUR
    float tauxRadia = 0.0; // TROUVER COMMENT RECUPERER LA VALEUR ET MODIFIER LA LIGNE 26
    etatThread = true;
    while (etatThread) {
        if (ordinateur->getTemperatureProcessor() > tempProcessAcceptable) {
            reboot->systemeReboot();
        } else if (batterie->getTemperature() > tempBattAcceptable) {
            reboot->systemeReboot();
        } else if (tauxRadia > tauxRadiaAcceptable) { // ou (magnetometre->getTauxRadia() > tauxRadiaAcceptable)
            reboot->systemeReboot();
        } else if (stockage->getOccupationRAM() > stockage->getMemoireRAM()) {
            reboot->systemeReboot();
        } /*else if (demandeReboot = true) {
            reboot->systemeReboot();
	}*/
    }
}