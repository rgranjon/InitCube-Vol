#include <climits>

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
    char commandeCreer[256];
    char xmlFile[] = "initcube.xml";
    sprintf(commandeCreer, "touch %s", xmlFile);
    if (doc.load_file(xmlFile)) {
        cout << "Le fichier " << xmlFile << " est présent dans le répertoire contenant l'exécutable du projet" << endl;
    } else {
        cout << "Le fichier " << xmlFile << " n'est pas présent dans le répertoire contenant l'exécutable du projet" << endl;
        //CREER LE FICHIER XML
        system(commandeCreer);
        //CREER L'ARBORESCENCE DU FICHIER XML
    }
    //LIRE ID DANS LE FICHIER XML
    lireID();
    //INSERER LES VALEURS DANS LE FICHIER XML
    pugi::xpath_node nodeVal = doc.select_node("//initcube/etat/bord/temperature");
    nodeVal.node().attribute("seuilAlerteHaut").set_value(90);
    cout << "Nv seuilAlerteHaut est : " << nodeVal.node().attribute("seuilAlerteHaut").value() << nodeVal.node().attribute("unite").value() << endl;
    //SAUVEGARDER LE FICHIER XML
    doc.save_file(xmlFile);
    return true;
}

bool Sauvegarde::ajouterAMission() { // Décrit quand démarre mesure / périodicité / type de mesure (quel est la mission en cours)
    return 0;
}

unsigned char Sauvegarde::lireID() {
    pugi::xml_document doc;
    char xmlFile[] = "initcube.xml";
    unsigned char cubeId;
    if (doc.load_file(xmlFile)) {
        pugi::xpath_node nodeId = doc.select_node("//initcube/description/id");
        string intermediateId = nodeId.node().child_value();
        istringstream iss(intermediateId);
        int nb;
        iss >> nb;
        cubeId = (unsigned char) nb;
        cout << "L'InitCube a pour ID le numéro : " << (int) cubeId << endl;
    } else {
        cout << "L'InitCube n'a pas d'Id" << endl;
        cubeId = 0;
    }
    return cubeId;
}