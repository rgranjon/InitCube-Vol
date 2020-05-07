#include "../defs/Sauvegarde.h"

Sauvegarde::Sauvegarde() {
}

Sauvegarde::Sauvegarde(const Sauvegarde& orig) {
}

Sauvegarde::~Sauvegarde() {
}

bool Sauvegarde::enregistrerMesure(Mesure mesure) {
    /*EXEMPLE 1*/
    fstream lecture_file("fichier.xml", ios::in);
    if (lecture_file.is_open()) {
        string line;
        while (getline(lecture_file, line)) {
            cout << line << endl;
        }
        cout << "Fin de la lecture de données du fichier" << endl;
        lecture_file.close();
    } else {
        cout << "Erreur d'ouverture du fichier" << endl;
    }

    /*EXEMPLE 2*/
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file("xgconsole.xml");
    if (!result)
        return -1;
    for (pugi::xml_node tool : doc.child("Profile").child("Tools").children("Tool")) {
        int timeout = tool.attribute("Timeout").as_int();
        if (timeout > 0)
            std::cout << "Tool " << tool.attribute("Filename").value() << " has timeout " << timeout << "\n";
    }
}

bool Sauvegarde::ajouterAMission(Mesure mesure) {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    return 0;
}