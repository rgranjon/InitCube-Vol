#ifndef SURVEILLANCE_H
#define SURVEILLANCE_H

#include "Librairie.h"

#include "../../Existant/defs/Ordinateur.h"
#include "../../Existant/defs/Batterie.h"
#include "../../Existant/defs/Stockage.h"
#include "Sauvegarde.h"

#define tempProcessAcceptable 40 // 70 OU 85 MAIS 40 POUR TEST
#define tempBattAcceptable 45 // OU 59
#define tauxRadiaAcceptable 4800 // A MODIFIER

class Surveillance {
public:
    Surveillance();
    Surveillance(const Surveillance& orig);
    virtual ~Surveillance();
    void surveillerConstantes();
    void demandeReboot();
    void probleme();
private:
    bool etatThread;
    Sauvegarde* sauvegarde;
    float tauxRadia;
    Reboot* reboot;
    Ordinateur* ordinateur;
    Batterie* batterie;
    Stockage* stockage;
//    Magnetometre* magnetometre;
    
};

#endif /* SURVEILLANCE_H */

