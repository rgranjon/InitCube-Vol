#ifndef SAUVEGARDE_H
#define SAUVEGARDE_H

#include "Librairie.h"

#include "../../Existant/defs/Mesure.h"

class Sauvegarde {
public:
    Sauvegarde();
    Sauvegarde(const Sauvegarde& orig);
    virtual ~Sauvegarde();
    bool enregistrerMesure();
//    bool enregistrerMesure(Mesure mesure);
    bool ajouterAMission();
//    bool ajouterAMission(Mesure mesure);
    unsigned char lireID();
};

#endif /* SAUVEGARDE_H */
