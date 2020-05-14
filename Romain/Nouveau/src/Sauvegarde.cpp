#include "../defs/Sauvegarde.h"

Sauvegarde::Sauvegarde() {
}

Sauvegarde::Sauvegarde(const Sauvegarde& orig) {
}

Sauvegarde::~Sauvegarde() {
}

//CODE INITIAL (INTERNET)
//bool is_readable(const string & file) {
//    ifstream fichier(file.c_str());
//    return !fichier.fail();
//}
//
//bool Sauvegarde::enregistrerMesure(Mesure mesure) {
//
//bool Sauvegarde::enregistrerMesure(string textetest) {
//    if (is_readable("initcube.xml")) { // ERREUR DE COMPILATION
//        cout << "Fichier existant et lisible" << endl;
//    } else {
//        cout << "Fichier inexistant ou non lisible" << endl;
//    }

bool Sauvegarde::enregistrerMesure() { // ERREUR DE COMPILATION
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file("initcube.xml");
    cout << "Load result: " << result.description() << endl;
    
/*  ALGO SAUVEGARDE
 *      Fichier présent ?
 *          si oui : Ouvrir le fichier XML
 *          si non : Créer le fichier XML et son arborescence
 *      Ecrire chacune des valeurs dans le fichier XML
 *      Sauvegarder le fichier XML
 *      Fermer le fichier XML
*/
    return true; // Pour retourner un booléen
}

bool Sauvegarde::ajouterAMission(Mesure mesure) {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    return 0;
}