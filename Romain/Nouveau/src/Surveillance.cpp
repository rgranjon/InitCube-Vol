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
    //float tauxRadia = ???;
    etatThread = true;
    while (etatThread) {
        if (Ordinateur::temperatureProcessor > tempProcessAcceptable) { // ou (Ordinateur->getTemperatureProcessor() > tempProcessAcceptable)
            Reboot::systemeReboot("temperature processeur raspberry trop élevée");
        } else if (Batterie::temperature > tempBattAcceptable) { // ou (Batterie->getTemperature() > tempBattAcceptable)
            Reboot::systemeReboot("temperature batterie trop élevée");
        } else if (tauxRadia > tauxRadiaAcceptable) { // ou (Magnetometre->getTauxRadia() > tauxRadiaAcceptable)
            Reboot::systemeReboot("taux électromagnétique trop important");
        } else if (Stockage::occupationRAM > Stockage::memoireRAM) { // ou (Stockage->getOccupationRAM() > Stockage->getMemoireRAM())
            Reboot::systemeReboot("mémoire RAM insuffisante");
        } /*else if (demandeReboot = true) {
            Reboot::systemeReboot(demande de reboot);
	}*/
    }
}