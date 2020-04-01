#include "../defs/Surveillance.h"

Surveillance::Surveillance() {
}

Surveillance::Surveillance(const Surveillance& orig) {
}

Surveillance::~Surveillance() {
}

//////////TEST APPEL METHODE//////////

void Surveillance::surveillerConstantes() {
    cout << "TEST-VALIDE : APPEL DE METHODE" << endl;
}

//////////TEST TEMPERATURE R-PI//////////

//void Surveillance::surveillerConstantes() {
//    etatThread = true;
//    while (etatThread) {
//        sleep(1);
//        if (ordinateur->getTemperatureProcessor() > tempProcessAcceptable) {
//            etatThread = false;
//            reboot->systemeReboot();
//        } else {
//            cout << ordinateur->getTemperatureProcessor() << endl;
//        }
//    }
//}

//////////TEST CONDITIONS//////////

//void Surveillance::surveillerConstantes() { // AJOUTER POUR MAGNETO ET POUR DEMANDE UTILISATEUR
//    etatThread = true;
//    while (etatThread) {
//        sleep(1);
//        if (ordinateur->getTemperatureProcessor() > tempProcessAcceptable) {
//            etatThread = false;
//            reboot->systemeReboot();
//        } else if (batterie->getTemperature() > tempBattAcceptable) {
//            reboot->systemeReboot();
//        } else if (tauxRadia > tauxRadiaAcceptable) { // ou (magnetometre->getTauxRadia() > tauxRadiaAcceptable)
//            reboot->systemeReboot();
//        } else if (stockage->getOccupationRAM() > stockage->getMemoireRAM()) {
//            reboot->systemeReboot();
//        } else if (demandeReboot = true) {
//            reboot->systemeReboot();
//        }
//    }
//}