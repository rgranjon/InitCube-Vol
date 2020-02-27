#ifndef SEGMENTVOL_H
#define SEGMENTVOL_H

#include "../../Nouveau/defs/Librairie.h"

#include "Horloge.h"
#include "Temperature.h"
#include "CameraIR.h"
#include "Batterie.h"
#include "EmetteurRecepteur.h"
#include "Mission.h"
#include "Ordinateur.h"
#include "SegmentSol.h"
#include "Etat.h"
#include "TypeMisEtat.h"
#include "TypeAppareil.h"
#include "../../Nouveau/defs/Sauvegarde.h"
#include "../../Nouveau/defs/Surveillance.h"

class SegmentSol;

class SegmentVol : public TypeMisEtat, TypeAppareil {
public:
    SegmentVol();
    virtual ~SegmentVol();
    void lancerMission();
    void arretMission();
    void obtenirStatus(list<string>* appareil);
    void obtenirStatus();
    void effectuerMesure(string mesure);
    void creerMission(short, short, string, string);
    void activerModuleEmission();
    void activerInstrument();
    void desactiverInstrument();
    void desactiverModuleEmission();
    void setSegmentSol(SegmentSol* segmentSol) {
        this->segmentSol = segmentSol;
    }
    void configurerRecupEtat(short period, list<string> instrument);
    thread recupEtat();
    thread tLancerMission();
    thread tArretMission();
    Horloge* getHorloge();
    Temperature* getTemperature();
    CameraIR* getCameraIR();
    Batterie* getBatterie();
    EmetteurRecepteur* getEmetteurRecepteur();
    Mission* getMission();
    Ordinateur* getOrdinateur();
    Etat* getEtat();
    unsigned char getIdentifiant();
    void setIdentifiant(unsigned char id);
private:
    unsigned char identifiant;
    Horloge* horloge;
    Temperature* temperature;
    CameraIR* cameraIR;
    Batterie* batterie;
    EmetteurRecepteur* emetteurRecepteur;
    Mission* mission;
    Ordinateur* ordinateur;
    SegmentSol* segmentSol;
    Etat* etat;
    bool etatThread;
};

#endif /* SEGMENTVOL_H */

