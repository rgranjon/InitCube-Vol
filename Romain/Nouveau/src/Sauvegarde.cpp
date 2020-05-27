#include "../defs/Sauvegarde.h"

Sauvegarde::Sauvegarde() {
}

Sauvegarde::Sauvegarde(const Sauvegarde& orig) {
}

Sauvegarde::~Sauvegarde() {
}

/////////*SOLUTION 4*/ Utilise les variables 'xmlFile' et 'commande'
// COMPILATION OUI
// FICHIER TROUVE OUI
// OUVERTURE DU FICHIER OUI
// NOM DE FICHIER AUTOMATIQUE OUI

bool Sauvegarde::enregistrerMesure() {
    pugi::xml_document doc;
    char commandeCreer[256]; // OK
    char xmlFile[] = "initcube.xml"; // POUR TEST VALIDE
    sprintf(commandeCreer, "touch %s", xmlFile);
    if (doc.load_file(xmlFile)) { // Si le fichier existe
        cout << "Le fichier " << xmlFile << " est présent dans le répertoire contenant l'exécutable du projet" << endl;
    } else {
        cout << "Le fichier " << xmlFile << " n'est pas présent dans le répertoire contenant l'exécutable du projet" << endl;
        //CREER LE FICHIER XML
        system(commandeCreer);
    }
    //OUVRIR LE FICHIER XML
    //LIRE ID DANS LE FICHIER XML
    lireID();
    //INSERER LES VALEURS DANS LE FICHIER XML
    //SAUVEGARDER LE FICHIER XML
    //FERMER LE FICHIER XML
    return true;
}

bool Sauvegarde::ajouterAMission() {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    unsigned char cubeId;
    // change node name
    //LIRE L'ID DU CUBE DANS LE FICHIER XML
    //    cubeId = (unsigned char)valeur de l'id dans le fichier xml
    return cubeId;
}