#include "Surveillance.h"
#include <stdlib.h>

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

void Surveillance::surveillerConstantes() {
	bool etatThread = true;
	float tempProcess = temperatureProcessor; // ou obtenirTemperature ou getTemperatureProcessor
	float tempBatt = temperature; // ou obtenirTemperature ou getTemperature
	float tauxRadia = ??? // 
	float memRamDispo = occupationRAM; // ou pourcentageutilise ou getOccupationRAM
	float tempProcessAcceptable = ??? // 60-70 ou 70+ ou 85+
	float tempBattAcceptable = ??? // 45 ou 59 (à ± 1°C)
	float tauxRadiaAcceptable = ??? // ± 4800μT
	float memRamDispoAcceptable = memoireRAM; // ou calculMemoireRam ou getMemoireRam
	While (etatThread) {
		if (tempProcess > tempProcessAcceptable) {
			Reboot::systemeReboot(temperature processeur raspberry trop élevée);
		} else if (tempBatt > tempBattAcceptable) {
			Reboot::systemeReboot(temperature batterie trop élevée);
		} else if (tauxRadia > tauxRadiaAcceptable) {
			Reboot::systemeReboot(taux électromagnétique trop important);
		} else if (memRamDispo > memRamDispoAcceptable) {
			Reboot::systemeReboot(mémoire RAM insuffisante);
		} else if (demandeReboot = true) {
			Reboot::systemeReboot(demande de reboot);
		}
	}
}

void Reboot::systemeReboot(string probleme) {
	system("sudo reboot now");
	cout << "Problème : " << probleme << endl;
}
