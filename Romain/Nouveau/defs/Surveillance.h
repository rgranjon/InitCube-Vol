#ifndef SURVEILLANCE_H
#define SURVEILLANCE_H

#include "../../Nouveau/defs/Librairie.h"

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
};

#endif /* SURVEILLANCE_H */

