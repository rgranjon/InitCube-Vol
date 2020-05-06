#include "../defs/Sauvegarde.h"

Sauvegarde::Sauvegarde() {
}

Sauvegarde::Sauvegarde(const Sauvegarde& orig) {
}

Sauvegarde::~Sauvegarde() {
}

bool Sauvegarde::enregistrerMesure(Mesure mesure) {
    /*EXEMPLE*/
    fstream lecture_file("fichier.xml",ios::in);
    if(lecture_file.is_open()){
        string line;
        while(getline(lecture_file,line)){
            cout << line << endl;
        }
        cout << "Fin de la lecture de données du fichier" << endl;
        lecture_file.close();
    } else {
        cout << "Erreur d'ouverture du fichier" << endl;
    }
}

bool Sauvegarde::ajouterAMission(Mesure mesure) {
    return 0;
}

unsigned char Sauvegarde::lireID() {
    return 0;
}