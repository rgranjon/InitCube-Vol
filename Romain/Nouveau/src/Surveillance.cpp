#include "../defs/Surveillance.h"

Surveillance::Surveillance() {
}

Surveillance::Surveillance(const Surveillance& orig) {
}

Surveillance::~Surveillance() {
}

//////////TEST APPEL METHODE//////////

void Surveillance::surveillerConstantes() {
    cout << "TEST-1 : APPEL METHODE" << endl;
}

//////////TEST RETOUR VALEURS//////////

//void Surveillance::surveillerConstantes() {
//    cout << "TEST-2 : RETOUR VALEURS" << endl;
//    cout << "TEST : APPEL DE METHODE" << endl;
//    cout << "TempP-Pi : " << ordinateur->getTemperatureProcessor() << endl;
//    cout << "TempBatt : " << batterie->getTemperature() << endl;
//    cout << "OccupRam : " << stockage->getOccupationRAM() << endl;
//    cout << "MemoiRam : " << stockage->getMemoireRAM() << endl;
//}

//////////TEST TEMPERATURE R-PI//////////

//void Surveillance::surveillerConstantes() {
//    cout << "TEST-3 : TEMPERATURE R-PI" << endl;
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
//    cout << "TEST-4 : CONDITIONS" << endl;
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