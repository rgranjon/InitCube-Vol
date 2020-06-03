#ifndef SURVEILLANCE_H
#define SURVEILLANCE_H

#include "Librairie.h"

#include "../../Existant/defs/Ordinateur.h"
#include "../../Existant/defs/Batterie.h"
#include "../../Existant/defs/Stockage.h"
#include "Sauvegarde.h"

#define tempProcessAcceptable 40 // 70 OU 85 MAIS 40 POUR TEST
#define tempBattAcceptable 45 // OU 59

class Surveillance {
public:
    Surveillance();
    Surveillance(const Surveillance& orig);
    virtual ~Surveillance();
    void surveillerConstantes();
    void demandeReboot();
    void valeurIncompatible();
private:
    bool etatThread;
    Sauvegarde* sauvegarde;
    Reboot* reboot;
    Ordinateur* ordinateur;
    Batterie* batterie;
    Stockage* stockage;
    
};

#endif /* SURVEILLANCE_H */

