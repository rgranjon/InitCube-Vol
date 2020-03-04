#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include "../../Nouveau/defs/Librairie.h"

#include "../defs/Status.h"
#include "../defs/Mesure.h"

class Instrument {
public:

    Instrument();
    Instrument(const Instrument& orig);

    virtual ~Instrument();
    Status * getStatus();
    list<Mesure*> getMesures();

    /// <summary>
    /// Cette m�thode permet de vider la liste de mesures apr�s la transmission par l'unit� de communication.
    /// </summary>
    void clearMesures();

    /// <summary>
    /// Cette m�thode permet de supprimer la derni�re mesure de la liste de mesures apr�s la transmission par l'unit� de communication.
    /// </summary>
    void clearLastMesures();

    /// <summary>
    /// Cette m�thode permet d'ajouter une mesure � la liste de mesures de l'instrument.
    /// </summary>
    void addMesure(Mesure *auneMesure);

    /// <summary>
    /// Cette m�thode permet d'ajouter une date et une heure � la derni�re mesure enregistr�e.
    /// </summary>
    void setDateMesure(string adateHour);

    /// <summary>
    /// Cette m�thode permet de r�colter l'�tat de l'instrument (mode de fonctionnement (Normal, sommeil etc.)  et temp�rature.
    /// </summary>
    int obtenirStatus();

    /// <summary>
    /// Cette m�thode permet d'activer l'instrument avant toute mesure ou pr�l�vement de donn�es.
    /// </summary>
    virtual void activer() = 0;
    /// <summary>
    /// Cette m�thode permet de d�sactiver l'instrument quand il n'est pas utile afin d'�conomiser de l'�nergie.
    /// </summary>
    virtual void desactiver() = 0;

private:
    string type;

protected:
    /// <summary>
    /// Cette m�thode envoie une requ�te � l'instrument pour conna�tre son mode de fonctionnement. (Normal, sommeil etc.)
    /// </summary>
    virtual void obtenirMode() = 0;
    /// <summary>
    /// Cette m�thode envoie une requ�te � l'instrument pour r�cup�rer sa temp�rature interne.
    /// Remarque : Si l'instrument est dans l'�tat SLEEP, il se peut que la temp�rature soit nulle.
    /// </summary>   
    virtual void obtenirTempInst() = 0;

    Status* status;
    Mesure* mesure;
    list<Mesure*> listedemesures;
};

#endif /* INSTRUMENT_H */


