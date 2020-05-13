#include "../defs/Sauvegarde.h"

Sauvegarde::Sauvegarde() {
}

Sauvegarde::Sauvegarde(const Sauvegarde& orig) {
}

Sauvegarde::~Sauvegarde() {
}

bool is_readable(const string & file) {
    ifstream fichier(file.c_str());
    return !fichier.fail();
}

//bool Sauvegarde::enregistrerMesure(Mesure mesure) {

bool Sauvegarde::enregistrerMesure(string textetest) {
    if (is_readable("../../initcube.xml")) { // ERREUR DE COMPILATION
            cout << "Fichier existant et lisible" << endl;
        } else {
            cout << "Fichier inexistant ou non lisible" << endl;
        }
    return true; // Pour retourner un booléen
}

bool Sauvegarde::ajouterAMission(Mesure mesure) {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    return 0;
}