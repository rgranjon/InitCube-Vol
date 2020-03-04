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

void Surveillance::surveillerConstantes() {
    float tauxRadia = 0.0; // TROUVER COMMENT RECUPERER LA VALEUR
    etatThread = true;
    while (etatThread) {
        if (ordinateur->getTemperatureProcessor() > tempProcessAcceptable) {
            reboot->systemeReboot();
        } else if (batterie->getTemperature() > tempBattAcceptable) {
            reboot->systemeReboot();
        } else if (tauxRadia > tauxRadiaAcceptable) { // ou (Magnetometre->getTauxRadia() > tauxRadiaAcceptable)
            reboot->systemeReboot();
        } else if (stockage->getOccupationRAM() > stockage->getMemoireRAM()) {
            reboot->systemeReboot();
        } /*else if (demandeReboot = true) { // TROUVER PARAMETRE
            Reboot::systemeReboot(demande de reboot);
	}*/
    }
}