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
	//float tauxRadia = ???
    etatThread = true;
	while (etatThread) {
		if (Ordinateur::temperatureProcessor > tempProcessAcceptable) {
			//Reboot::systemeReboot(temperature processeur raspberry trop élevée);
		} else if (Batterie::temperature > tempBattAcceptable) {
			//Reboot::systemeReboot(temperature batterie trop élevée);
		} else if (tauxRadia > tauxRadiaAcceptable) {
			//Reboot::systemeReboot(taux électromagnétique trop important);
		} else if (Stockage::occupationRAM > Stockage::memoireRAM) {
			//Reboot::systemeReboot(mémoire RAM insuffisante);
		} else if (demandeReboot = true) {
			//Reboot::systemeReboot(demande de reboot);
		}
	}
}