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
    char commandeOuvrir[256]; // OK
    char commandeInserer[256]; // PAS OK
    char commandeSauvegarder[256]; // PAS OK
    char commandeFermer[256]; // PAS OK
    int nb = 157;
    ajouterAMission();
    char ouvertureFichier[] = "sudo nano";
    char xmlFile[] = "initcube.xml"; // POUR TEST VALIDE
    //    char* xmlFile[] = "nomDuFichierInexistant.xml"; // POUR TEST ERREUR
    if (doc.load_file(xmlFile)) { // Si le fichier existe
        cout << "Le fichier " << xmlFile << " est présent dans le répertoire contenant l'exécutable du projet" << endl;
        //OUVRIR LE FICHIER XML
        sprintf(commandeOuvrir, "%s %s", ouvertureFichier, xmlFile);
        system(commandeOuvrir);
//        //INSERER LES VALEURS DANS LE FICHIER XML
//        system(commandeInserer);
//        //SAUVEGARDER LE FICHIER XML
//        system(commandeSauvegarder);
//        //FERMER LE FICHIER XML
//        system(commandeFermer);
        return true;
    } else {
        cout << "Le fichier " << xmlFile << " n'est pas présent dans le répertoire contenant l'exécutable du projet" << endl;
        //CREER LE FICHIER XML
        sprintf(commandeCreer, "touch %s", xmlFile);
        system(commandeCreer);
        //OUVRIR LE FICHIER XML
        sprintf(commandeOuvrir, "%s %s", ouvertureFichier, xmlFile);
        system(commandeOuvrir);
//        //INSERER LES VALEURS DANS LE FICHIER XML
//        system(commandeInserer);
//        //SAUVEGARDER LE FICHIER XML
//        system(commandeSauvegarder);
//        //FERMER LE FICHIER XML
//        system(commandeFermer);
        return false;
    }
}

bool Sauvegarde::ajouterAMission() {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    int cubeId;
    char commandeOuvrir[256]; // OK
    char commandeFermer[256]; // PAS OK
    char ouvertureFichier[] = "sudo nano";
    char xmlFile[] = "initcube.xml";
    //OUVRIR LE FICHIER XML
    system(commandeOuvrir);
    //LIRE L'ID DU CUBE DANS LE FICHIER XML
//    cubeId = valeur de l'id dans le fichier xml
    //FERMER LE FICHIER XML
    system(commandeFermer);
    return 0;
}