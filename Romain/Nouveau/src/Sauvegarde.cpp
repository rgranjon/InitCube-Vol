#include "../defs/Sauvegarde.h"

Sauvegarde::Sauvegarde() {
}

Sauvegarde::Sauvegarde(const Sauvegarde& orig) {
}

Sauvegarde::~Sauvegarde() {
}

//////////SOLUTION FINALE
// COMPILATION OUI
// FICHIER TROUVE OUI
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
    //INSERER LES VALEURS DANS LE FICHIER XML
    //SAUVEGARDER LE FICHIER XML
    //FERMER LE FICHIER XML
    return true;
}

bool Sauvegarde::ajouterAMission() {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    pugi::xml_document doc;
    pugi::xpath_node nodeId = doc.select_node("//initcube/description/id");
    unsigned char cubeId;
    char intermediateId;
    //LIRE L'ID DU CUBE DANS LE FICHIER XML
    cubeId = (unsigned char) intermediateId = (char) nodeId.node().child_value();
    cout << "L'InitCube à pour ID le numéro " << cubeId << endl;
    return cubeId;
}