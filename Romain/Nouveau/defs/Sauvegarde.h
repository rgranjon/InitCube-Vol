#ifndef SAUVEGARDE_H
#define SAUVEGARDE_H

#include "Librairie.h"

class Sauvegarde {
public:
    Sauvegarde();
    Sauvegarde(const Sauvegarde& orig);
    virtual ~Sauvegarde();
    void SauvegardeDonnees();
    bool enregistrerMesure(Mesure mesure);
    bool ajouterAMission(Mesure mesure);
    unsigned char lireID();
/*
    struct Mesure {
        Mesure mesure;
    } mesure;
*/
private:
};

#endif /* SAUVEGARDE_H */

