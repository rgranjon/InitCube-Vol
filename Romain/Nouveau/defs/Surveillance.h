#ifndef SURVEILLANCE_H
#define SURVEILLANCE_H

#include "Librairie.h"

#include "../../Existant/defs/Ordinateur.h"
#include "../../Existant/defs/Batterie.h"
#include "../../Existant/defs/Stockage.h"

#define tempProcessAcceptable 70 // OU 85
#define tempBattAcceptable 45 // OU 59
#define tauxRadiaAcceptable 4800 // A MODIFIER

class Surveillance {
public:
    Surveillance();
    Surveillance(const Surveillance& orig);
    virtual ~Surveillance();
    thread tSurveillerConstantes();
    void surveillerConstantes();
private:
    bool etatThread;
    Ordinateur ordinateur;
    Batterie batterie;
    Stockage stockage;
};

#endif /* SURVEILLANCE_H */

