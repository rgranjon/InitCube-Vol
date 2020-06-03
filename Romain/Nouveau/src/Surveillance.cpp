#include "../defs/Surveillance.h"

Surveillance::Surveillance() {
}

Surveillance::Surveillance(const Surveillance& orig) {
}

Surveillance::~Surveillance() {
}

void Surveillance::surveillerConstantes() { // AJOUTER POUR DEMANDE REBOOT DE L'UTILISATEUR
    etatThread = true;
//    while (etatThread) {
//        sleep(1);
//        if (ordinateur->getTemperatureProcessor() > tempProcessAcceptable) {
//            valeurIncompatible();
//        } else if (batterie->getTemperature() > tempBattAcceptable) {
//            valeurIncompatible();
//        } else if (stockage->getOccupationRAM() > stockage->getMemoireRAM()) {
//            valeurIncompatible();
//        } else if (demandeReboot = true) { // VOIR AVEC M.TAILLEFER (SOL-IHM)
//            valeurIncompatible();
//        }
        if (etatThread == true) {
            valeurIncompatible();
        }
    }
//}

void Surveillance::valeurIncompatible() {
//    etatThread = false;
    sauvegarde->enregistrerMesure();
//    reboot->systemeReboot();
}