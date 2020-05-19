#include "../defs/Sauvegarde.h"

Sauvegarde::Sauvegarde() {
}

Sauvegarde::Sauvegarde(const Sauvegarde& orig) {
}

Sauvegarde::~Sauvegarde() {
}

/*  ALGO SAUVEGARDE
 *      Fichier présent ?
 *          si oui : Ouvrir le fichier XML
 *          si non : Créer le fichier XML et son arborescence
 *      Ecrire chacune des valeurs dans le fichier XML
 *      Sauvegarder le fichier XML
 *      Fermer le fichier XML
 */

bool Sauvegarde::enregistrerMesure() { // TEST POUR XML
    const char* resultat;
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file("initcube.xml");
    const char* xmlFile = "initcube.xm"; // POUR TEST ERREUR
//    const char* xmlFile = "initcube.xml"; // POUR TEST VALIDE
    resultat = result.description();
    cout << "Variable resultat : " << resultat << endl;
    if(doc.load_file(xmlFile)) { // Si le fichier existe
        cout << "Le fichier xml " << xmlFile << " est présent dans le répertoire contenant l'exécutable du projet" << endl;
        system("sudo nano " + xmlFile); // Erreur de compilation
    } else {
        cout << "Le fichier xml " << xmlFile << " n'est pas présent dans le répertoire contenant l'exécutable du projet" << endl;
        system("touch TESTtestTEST.xml"); // Créer un fichier xml
    }
//    if (resultat == "No error") {
//        cout << "NO ERROR" << endl;
//        return true; // Pour retourner un booléen
//    }
//    if (resultat != "No error") {
//        cout << "ERROR" << endl;
//        return false; // Pour retourner un booléen
//    }
//    if (resultat == 0) {
//        cout << "resultat == 0" << endl;
//        return true; // Pour retourner un booléen
//    }
//    if (resultat == 1) {
//        cout << "resultat == 1" << endl;
//        return true; // Pour retourner un booléen
//    }
    return true; // Pour avoir un booléen
}

bool Sauvegarde::ajouterAMission(Mesure mesure) {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    return 0;
}