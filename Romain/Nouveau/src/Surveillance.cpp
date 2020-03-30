#include "../defs/Surveillance.h"

Surveillance::Surveillance() {
}

Surveillance::Surveillance(const Surveillance& orig) {
}

Surveillance::~Surveillance() {
}

//thread Surveillance::tSurveillerConstantes() {
//    return thread([this] {
//        surveillerConstantes();
//    });
//}

void Surveillance::surveillerConstantes() { // AJOUTER POUR MAGNETO ET POUR DEMANDE UTILISATEUR
    etatThread = true;
    while (etatThread) {
        if (ordinateur->getTemperatureProcessor() > tempProcessAcceptable) {
            reboot->systemeReboot();
        } else {
            cout << ordinateur->getTemperatureProcessor() << endl;
        }
        sleep(1);
        //        if (ordinateur->getTemperatureProcessor() > tempProcessAcceptable) {
        //            reboot->systemeReboot();

        //        } else if (batterie->getTemperature() > tempBattAcceptable) {
        //            reboot->systemeReboot();
        //        } else if (tauxRadia > tauxRadiaAcceptable) { // ou (magnetometre->getTauxRadia() > tauxRadiaAcceptable)
        //            reboot->systemeReboot();
        //        } else if (stockage->getOccupationRAM() > stockage->getMemoireRAM()) {
        //            reboot->systemeReboot();
        //        } else if (demandeReboot = true) {
        //            reboot->systemeReboot();
        //	}
    }
}

//void Reboot::surveillerConstantes() {
//    tempProcessAcceptable = 42.0;
//    while (true) {
//        cout << ordinateur->getTemperatureProcessor() << endl;
//        sleep(1);
//        if (ordinateur->getTemperatureProcessor() > tempProcessAcceptable) {
//            systemeReboot();
//        }
//    }
//}