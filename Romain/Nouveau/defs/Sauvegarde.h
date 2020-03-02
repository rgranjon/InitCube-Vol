#ifndef SAUVEGARDE_H
#define SAUVEGARDE_H

#include "Librairie.h"

#include "../../Existant/defs/Mesure.h"
#include "../../Existant/defs/SegmentVol.h"

class Sauvegarde {
public:
    Sauvegarde();
    Sauvegarde(const Sauvegarde& orig);
    virtual ~Sauvegarde();
    bool enregistrerMesure(Mesure mesure);
    bool ajouterAMission(Mesure mesure);
    unsigned char lireID();
private:
};

#endif /* SAUVEGARDE_H */

