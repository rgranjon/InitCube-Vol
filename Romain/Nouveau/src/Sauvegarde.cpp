#include "../defs/Sauvegarde.h"

Sauvegarde::Sauvegarde() {
}

Sauvegarde::Sauvegarde(const Sauvegarde& orig) {
}

Sauvegarde::~Sauvegarde() {
}

/////////*SOLUTION 4*/ Utilise les variables 'xmlFile' et 'commande'
// COMPILATION NON
// FICHIER TROUVE ?
// OUVERTURE DU FICHIER ?
// NOM DE FICHIER AUTOMATIQUE OUI

bool Sauvegarde::enregistrerMesure() {
    pugi::xml_document doc;
    char commande[256];
    char ouvertureFichier[] = "sudo nano";
    char xmlFile[] = "initcube.xml"; // POUR TEST VALIDE
    //    char* xmlFile[] = "nomDuFichierInexistant.xml"; // POUR TEST ERREUR
    sprintf(commande, "%s %s", ouvertureFichier, xmlFile);
    if (doc.load_file(xmlFile)) { // Si le fichier existe
        cout << "Le fichier initcube.xml est présent dans le répertoire contenant l'exécutable du projet" << endl;
        //OUVRIR LE FICHIER XML
        system(commande); // ERREUR DE COMPILATION
        //INSERER LES VALEURS DANS LE FICHIER XML
        //SAUVEGARDER LE FICHIER XML
        //FERMER LE FICHIER XML
        return true;
    } else {
        cout << "Le fichier initcube.xml n'est pas présent dans le répertoire contenant l'exécutable du projet" << endl;
        //CREER LE FICHIER XML
        //OUVRIR LE FICHIER XML
        //INSERER LES VALEURS DANS LE FICHIER XML
        //SAUVEGARDER LE FICHIER XML
        //FERMER LE FICHIER XML
        return false;
    }
}

bool Sauvegarde::ajouterAMission(Mesure mesure) {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    return 0;
}