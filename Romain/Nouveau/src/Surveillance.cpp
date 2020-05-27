#include "../defs/Surveillance.h"

Surveillance::Surveillance() {
}

Surveillance::Surveillance(const Surveillance& orig) {
}

Surveillance::~Surveillance() {
}

//////////TEST SAUVEGARDE//////////

void Surveillance::surveillerConstantes() { // AJOUTER POUR MAGNETO ET POUR DEMANDE UTILISATEUR
    // INCLURE LE CODE SUIVANT : "TEST-6 : CONDITIONS + SAUVEGARDE" qui est dans le fichier aide_SURVEILLANCE
    cout << "TEST-5 : SAUVEGARDE" << endl;
    sauvegarde->enregistrerMesure();
    cout << "Reboot du système après la sauvegarde (appel de la fonction reboot->systemeReboot());" << endl;
}

