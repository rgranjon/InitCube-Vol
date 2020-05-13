#include "../defs/Surveillance.h"

Surveillance::Surveillance() {
}

Surveillance::Surveillance(const Surveillance& orig) {
}

Surveillance::~Surveillance() {
}

//////////TEST SAUVEGARDE//////////

void Surveillance::surveillerConstantes() { // AJOUTER POUR MAGNETO ET POUR DEMANDE UTILISATEUR
    cout << "TEST-5 : SAUVEGARDE" << endl;
    sauvegarde->enregistrerMesure("test_reussi");
    cout << "Reboot du système après la sauvegarde (appel de la fonction reboot->systemeReboot());" << endl;
}

