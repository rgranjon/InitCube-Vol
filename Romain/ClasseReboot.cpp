#include "Reboot.h"
#include <stdlib.h>

Reboot::Reboot() {
}

Reboot::Reboot(const Reboot& orig) {
}

Reboot::~Reboot() {
}

void Reboot::conditionReboot() {
	bool etatThread = true;
	float tempProcess = temperatureProcessor; // ou obtenirTemperature ou getTemperatureProcessor
	float tempBatt = temperature; // ou obtenirTemperature ou getTemperature
	float tauxRadia = ???
	float memRamDispo = occupationRAM; // ou pourcentageutilise ou getOccupationRAM
	float tempProcessAcceptable = ???
	float tempBattAcceptable = ???
	float tauxRadiaAcceptable = ???
	float memRamDispoAcceptable = memoireRAM; // ou calculMemoireRam ou getMemoireRam
	While (etatThread) {
		if (tempProcess > tempProcessAcceptable) {
			systemeReboot();
		} else if (tempBatt > tempBattAcceptable) {
			systemeReboot();
		} else if (tauxRadia > tauxRadiaAcceptable) {
			systemeReboot();
		} else if (memRamDispo > memRamDispoAcceptable) {
			systemeReboot();
		} else if (demandeReboot = true) {
			systemeReboot();
		}
	}
}

void Reboot::systemeReboot() {
	system("sudo reboot"); // ou system("sudo shutdown now")
}
