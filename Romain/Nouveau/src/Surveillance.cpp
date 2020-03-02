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
        if (Ordinateur::temperatureProcessor > tempProcessAcceptable) { // ou (Ordinateur->getTemperatureProcessor() > tempProcessAcceptable)
            Reboot::systemeReboot();
        } else if (Batterie::temperature > tempBattAcceptable) { // ou (Batterie->getTemperature() > tempBattAcceptable)
            Reboot::systemeReboot();
        } else if (tauxRadia > tauxRadiaAcceptable) { // ou (Magnetometre->getTauxRadia() > tauxRadiaAcceptable)
            Reboot::systemeReboot();
        } else if (Stockage::occupationRAM > Stockage::memoireRAM) { // ou (Stockage->getOccupationRAM() > Stockage->getMemoireRAM())
            Reboot::systemeReboot();
        } /*else if (demandeReboot = true) {
            Reboot::systemeReboot(demande de reboot);
	}*/
    }
}