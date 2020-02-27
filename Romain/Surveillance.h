#ifndef SURVEILLANCE_H
#define SURVEILLANCE_H

class Surveillance {
public:
    Surveillance();
    Surveillance(const Surveillance& orig);
    virtual ~Surveillance();
    thread tSurveillerConstantes();
    void surveillerConstantes();
private:
	
};

#endif /* SURVEILLANCE_H */

